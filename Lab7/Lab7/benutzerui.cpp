#include "benutzerui.h"
#include "ui_benutzerui.h"
#include <validation.h>
#include <QMessageBox>
BenutzerUI::BenutzerUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BenutzerUI)
{   errMsj.setText("Fatal error: Wrong data input(no such movie)");
    ui->setupUi(this);
    HideChestii();
     QObject::connect(ui->htmlButton, &QPushButton::clicked, this, &BenutzerUI::HtmlClicked);
     QObject::connect(ui->csvButton, &QPushButton::clicked, this, &BenutzerUI::CsvClicked);
     QObject::connect(ui->searchButton, &QPushButton::clicked, this, &BenutzerUI::SearchClicked);
     QObject::connect(ui->watchButton, &QPushButton::clicked, this, &BenutzerUI::WatchClicked);
     QObject::connect(ui->quitButton, &QPushButton::clicked, this, &BenutzerUI::QuitClicked);
     QObject::connect(ui->addToWatchlistButton, &QPushButton::clicked, this, &BenutzerUI::AddToWClicked);
      QObject::connect(ui->likeButton, &QPushButton::clicked, this, &BenutzerUI::LikeClicked);
      QObject::connect(ui->skipButton, &QPushButton::clicked, this, &BenutzerUI::SkipClicked);
      QObject::connect(ui->backToOptionsButton, &QPushButton::clicked, this, &BenutzerUI::BackToOptionsClicked);
      QObject::connect(ui->submitsButton, &QPushButton::clicked, this, &BenutzerUI::SubmitsClicked);
       QObject::connect(ui->submitwButton, &QPushButton::clicked, this, &BenutzerUI::SubmitwClicked);
       QObject::connect(ui->viewWatchlistButton, &QPushButton::clicked, this, &BenutzerUI::ViewWatchlistClicked);




}


void BenutzerUI:: ViewWatchlistClicked(){
    /*
    QString content = "In der Datenbank gibt es folgende Filme: \n";
    for (auto &iter : ben->get_all_watch()) {
         content += QString::fromStdString(iter.anschreiben());
    }
    QMessageBox msgBox;
    msgBox.setText(content);
    msgBox.exec();*/
    if(ben->formatgetter()=="watchlist.html")
    {
        QDir dir;
        QString path=dir.currentPath()+"/watchlist.html";
        QDesktopServices::openUrl(QUrl(path));
    }
    else{
        QDir dir;
        QString path=dir.currentPath()+"/watchlist.csv";
        QDesktopServices::openUrl(QUrl(path));
    }

}

void BenutzerUI:: SubmitwClicked(){

ui->submitwButton->hide();
ui->likeButton->show();
ui->backToOptionsButton->show();
//sf parte design
//aici trb sa ia ce e in inputuri

titel=ui->titelInput->toPlainText();
jahr=ui->jahrInput->toPlainText();
try {
    Valid::checkFilmExists(adm->view_filme(), titel.toStdString(), jahr.toInt());
} catch (FilmNotFoundException &e) {
    std::cout << "Film Not Found" << '\n';
}
int ct=0;
for (auto &iter : ben->get_all_watch()) {

     if(iter.getjahr()==jahr.toInt()&&iter.gettitel()==titel.toStdString())
     {
         index=ct;
     }
     ct++;
}

}
void BenutzerUI:: SubmitsClicked(){
ui->addToWatchlistButton->show();
ui->skipButton->show();
ui->submitsButton->hide();
genre=ui->genreInput->toPlainText();
ct=0;
filme = ben->view_genre(genre.toStdString());
if (filme.empty()) {
        filme=adm->view_filme();
        QMessageBox msj;
        msj.setText("Der Film mit dem Titel: "+QString::fromStdString(filme[ct].gettitel()));
        QString link = filme[ct].gettrailer().c_str();
        QDesktopServices::openUrl(QUrl(link));



} else {
    for (auto &it:filme) {
        it.anschreiben();
    }
}
}


void BenutzerUI:: AddToWClicked(){
    /*
     * ia inputul si le ascunde dupa
     */
    ui->searchButton->setDisabled(false);
    HideSearchOptions();
      ben->addToWatchlist(filme[ct]);


}

void BenutzerUI:: SkipClicked(){
if(ct<filme.size())
{
    ct++;
    QMessageBox msj;
    msj.setText("Der Film mit dem Titel: "+QString::fromStdString(filme[ct].gettitel()));
    QString link = filme[ct].gettrailer().c_str();
    QDesktopServices::openUrl(QUrl(link));
}
}


void BenutzerUI:: BackToOptionsClicked(){
     ui->watchButton->setDisabled(false);
     if(index!=-1)
     {
         ben->get_all_watch().erase(ben->get_all_watch().begin()+index);
     }


    HideWatchOptions();
}
void BenutzerUI:: QuitClicked(){
     this->close();
}
void BenutzerUI:: LikeClicked(){
    if (ben->watch(titel.toStdString(), jahr.toInt())) {
    ui->watchButton->setDisabled(false);
    HideWatchOptions();
    vector<Film> filme = adm->view_filme();
    if (index != -1) {
        vector<Film>cumvrtu;
        cumvrtu=ben->get_all_watch();
        cumvrtu.erase(cumvrtu.begin()+index);
         ben->set_all_watch(cumvrtu);
         for (auto &it:adm->view_filme()) {
            if(it.gettitel()==titel.toStdString()&&it.getjahr()==jahr.toInt())
            {
                adm->edit_film(it.gettitel(),it.getjahr(),it.getlikes()+1);
            }
         }
    }
    }
    else{
        errMsj.exec();
    }
}


void BenutzerUI:: ShowOptions(){
   ui->benutzerMenuText->show();
   ui->watchButton->show();
   ui->searchButton->show();
   ui->viewWatchlistButton->show();
}

void BenutzerUI:: WatchClicked(){
     ui->jahrText->show();
     ui->jahrInput->show();
     ui->titelText->show();
     ui->titelInput->show();
     ui->submitwButton->show();
     ui->searchButton->hide();
     ui->watchButton->setDisabled(true);
     ui->viewWatchlistButton->hide();
}

void BenutzerUI:: HideWatchOptions(){
     ui->jahrText->hide();
     ui->jahrInput->hide();ui->jahrInput->clear();
     ui->titelText->hide();
     ui->titelInput->hide();ui->titelInput->clear();
     ui->likeButton->hide();
     ui->backToOptionsButton->hide();
     ui->searchButton->show();
     ui->viewWatchlistButton->show();

}

void BenutzerUI:: SearchClicked(){
     ui->searchButton->setDisabled(true);
     ui->genreText->show();
     ui->genreInput->show();
     ui->submitsButton->show();
     ui->watchButton->hide();
     ui->viewWatchlistButton->hide();
}
void BenutzerUI:: HideSearchOptions(){
     ui->genreText->hide();
     ui->genreInput->hide();ui->genreInput->clear();
     ui->addToWatchlistButton->hide();
     ui->skipButton->hide();
     ui->watchButton->show();
     ui->viewWatchlistButton->showMenu();

}

void BenutzerUI:: HtmlClicked(){
    HideChooseFile();
    QString format = "watchlist.html";
    ben->formatsetter(format.toStdString());
    ShowOptions();
}

void BenutzerUI:: CsvClicked(){
    HideChooseFile();
    QString format = "watchlist.csv";
    ben->formatsetter(format.toStdString());
    ShowOptions();
}


void BenutzerUI:: HideChestii(){
    ui->benutzerMenuText->hide();
    ui->searchButton->hide();
    ui->watchButton->hide();
    ui->titelText->hide();
     ui->titelInput->hide();
      ui->jahrInput->hide();
       ui->jahrText->hide();
       ui->likeButton->hide();
       ui->addToWatchlistButton->hide();
       ui->genreText->hide();
       ui->genreInput->hide();
       ui->skipButton->hide();
       ui->backToOptionsButton->hide();
       ui->submitsButton->hide();
       ui->submitwButton->hide();
       ui->viewWatchlistButton->hide();
}

void BenutzerUI::HideChooseFile(){
    ui->htmlButton->hide();
    ui->csvButton->hide();
    ui->chooseFileText->hide();
}

BenutzerUI::~BenutzerUI()
{
    delete ui;
}

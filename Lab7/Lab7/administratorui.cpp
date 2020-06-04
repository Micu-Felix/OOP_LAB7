#include "administratorui.h"
#include "ui_administratorui.h"
#include "validation.h"

AdministratorUI::AdministratorUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdministratorUI)
{
    ui->setupUi(this);
     QObject::connect(ui->addButton, &QPushButton::clicked, this, &AdministratorUI::addFilm);
       QObject::connect(ui->removeButton, &QPushButton::clicked, this, &AdministratorUI::removeFilm);
         QObject::connect(ui->showButton, &QPushButton::clicked, this, &AdministratorUI::showFilm);
         QObject::connect(ui->modifyButton, &QPushButton::clicked, this, &AdministratorUI::modifyFilm);
         QObject::connect(ui->ok_addButton, &QPushButton::clicked, this, &AdministratorUI::ok_addFilm);
           QObject::connect(ui->ok_removeButton, &QPushButton::clicked, this, &AdministratorUI::ok_removeFilm);
             QObject::connect(ui->ok_modifyButton, &QPushButton::clicked, this, &AdministratorUI::ok_modifyFilm);
          QObject::connect(ui->quitButton, &QPushButton::clicked, this, &AdministratorUI::quitClicked);
          //ui->setupUi(this);
          hideOptions();
}

void AdministratorUI:: quitClicked(){
     this->close();
}

void AdministratorUI::addFilm(){
    hideOptions();
    ui->titleInput->show();
    ui->jahrInput->show();
    ui->genreInput->show();
    ui->likesInput->show();
    ui->trailerInput->show();
    ui->ok_addButton->show();
}

void AdministratorUI::modifyFilm(){
    hideOptions();
    ui->titleInput->show();
    ui->jahrInput->show();
    ui->likesInput->show();
    ui->ok_modifyButton->show();
}


void AdministratorUI::removeFilm(){
    hideOptions();
    ui->titleInput->show();
    ui->jahrInput->show();
    ui->ok_removeButton->show();
}

void AdministratorUI::ok_addFilm()
{
    int likes,jahr;
    string trailer;
    string titel = ui->titleInput->toPlainText().toStdString();
    try {
         jahr = ui->jahrInput->toPlainText().toInt();
         Valid::checkJahr(jahr);
    }
    catch (std::out_of_range &) {
        QMessageBox msgBox;
        msgBox.setText("Invalides Jahr");
        msgBox.exec();
        QCoreApplication::quit();
    }
    try {
         likes = ui->likesInput->toPlainText().toInt();
         Valid::checkFilmLikes(likes);
    }
    catch (std::out_of_range &) {
        QMessageBox msgBox;
        msgBox.setText("Numar invalid");
        msgBox.exec();
         QCoreApplication::quit();
    }
    try {
       trailer = ui->trailerInput->toPlainText().toStdString();
       Valid::checkTrailer(trailer);
    } catch (const char *str) {
        //std::cout << str << '\n';
        QMessageBox msgBox;
        msgBox.setText(str);
        msgBox.exec();
        QCoreApplication::quit();
     }

    string genre = ui->genreInput->toPlainText().toStdString();
    if (!adm->add_film(Film(titel, genre, jahr, likes, trailer))){
        QMessageBox msgBox;
        msgBox.setText("Es gibt schon diesen Film\n");
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Film wurde eingefugt !!\n");
        msgBox.exec();
    }
   hideOptions();
}
void AdministratorUI::ok_removeFilm()
{
    int jahr;
    string trailer;
    string titel = ui->titleInput->toPlainText().toStdString();
    try {
         jahr = ui->jahrInput->toPlainText().toInt();
         Valid::checkJahr(jahr);
    }
    catch (std::out_of_range &) {
        QMessageBox msgBox;
        msgBox.setText("Invalides Jahr");
        msgBox.exec();
        QCoreApplication::quit();
    }
    if (adm->delete_film(titel, jahr)){
        QMessageBox msgBox;
        msgBox.setText("Film wurde erfolgreich geloscht !!");
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Es gibt diesen Film nicht !!");
        msgBox.exec();
    }
   hideOptions();
}

void AdministratorUI::showFilm()
{
    QString content = "In der Datenbank gibt es folgende Filme: \n";
    for (auto &iter : adm->view_filme()) {
         content += QString::fromStdString(iter.anschreiben());
    }
    QMessageBox msgBox;
    msgBox.setText(content);
    msgBox.exec();
   //hideOptions();
}

void AdministratorUI::ok_modifyFilm()
{
    int jahr,likes;

    string titel = ui->titleInput->toPlainText().toStdString();
    try {
         jahr = ui->jahrInput->toPlainText().toInt();
         Valid::checkJahr(jahr);
    }
    catch (std::out_of_range &) {
        QMessageBox msgBox;
        msgBox.setText("Invalides Jahr");
        msgBox.exec();
       QCoreApplication::quit();

    }
    try {
         likes = ui->likesInput->toPlainText().toInt();
         Valid::checkFilmLikes(likes);
    }
    catch (std::out_of_range &) {
        QMessageBox msgBox;
        msgBox.setText("Numar invalid");
        msgBox.exec();
        QCoreApplication::quit();

    }
    if (!adm->edit_film(titel, jahr, likes)){
        QMessageBox msgBox;
        msgBox.setText("Es gibt keine solchen Film");
        msgBox.exec();
    }else{
        QMessageBox msgBox;
        msgBox.setText("Erfolgreiche Bearbeitung der Daten !");
        msgBox.exec();
    }
   hideOptions();
}

void AdministratorUI::hideOptions()
{
    ui->titleInput->hide();
    ui->jahrInput->hide();
    ui->genreInput->hide();
    ui->likesInput->hide();
    ui->trailerInput->hide();
    ui->ok_addButton->hide();
    ui->ok_modifyButton->hide();
    ui->ok_removeButton->hide();
}


AdministratorUI::~AdministratorUI()
{
    delete ui;
}

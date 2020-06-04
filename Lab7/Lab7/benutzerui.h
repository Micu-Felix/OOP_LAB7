#ifndef BENUTZERUI_H
#define BENUTZERUI_H

#include <QMainWindow>
#include "BenutzerController.h"
#include "AdministratorController.h"
#include <QMessageBox>
namespace Ui {
class BenutzerUI;
}

class BenutzerUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit BenutzerUI(QWidget *parent = nullptr);
    ~BenutzerUI();

protected slots:
    void HideChestii();
    void HideChooseFile();
    void HtmlClicked();
    void CsvClicked();
    void ShowOptions();
    void SearchClicked();
    void WatchClicked();
    void QuitClicked();
    void LikeClicked();
    void AddToWClicked();
    void HideWatchOptions();
    void HideSearchOptions();
    void SkipClicked();
    void BackToOptionsClicked();
    void SubmitsClicked();
    void SubmitwClicked();
    void ViewWatchlistClicked();
private:
    Ui::BenutzerUI *ui;
    vector<Film> filme;
    QString titel,genre;
    QString jahr;int index=-1;
    QMessageBox errMsj;
    unsigned long long ct;

    BenutzerController *ben = new BenutzerController();
     AdministratorController *adm = new AdministratorController();
};

#endif // BENUTZERUI_H

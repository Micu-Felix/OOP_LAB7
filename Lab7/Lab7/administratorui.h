#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H

#include <QMainWindow>
#include <QMessageBox>
#include "AdministratorController.h"

namespace Ui {
class AdministratorUI;
}

class AdministratorUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdministratorUI(QWidget *parent = nullptr);
    ~AdministratorUI();

protected slots:
    void hideOptions();
    void addFilm();
    void removeFilm();
    void modifyFilm();
    void ok_addFilm();
    void ok_removeFilm();
    void ok_modifyFilm();
    void showFilm();
    void quitClicked();
private:
    Ui::AdministratorUI *ui;
    AdministratorController *adm=new AdministratorController();
};

#endif // ADMINISTRATORUI_H

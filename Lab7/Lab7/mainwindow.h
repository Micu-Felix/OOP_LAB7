#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <administratorui.h>
#include <benutzerui.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void adminMenu();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void benutzerMenu();
protected slots:
    void quitClicked();
private:
    Ui::MainWindow *ui;
      AdministratorUI *adm;
      BenutzerUI *ben;
};
#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "administratorui.h"
#include "ui_administratorui.h"
#include "ui_mainwindow.h"
#include "benutzerui.h"
#include "ui_benutzerui.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->Admin, &QPushButton::clicked, this, &MainWindow::adminMenu);
    QObject::connect(ui->Benutzer, &QPushButton::clicked, this, &MainWindow::benutzerMenu);
     QObject::connect(ui->quitButton, &QPushButton::clicked, this, &MainWindow::quitClicked);
}
void MainWindow:: quitClicked(){
     this->close();
}
void MainWindow::adminMenu()
{
    this->close();
    adm=new AdministratorUI(this);
    adm->show();

}

void MainWindow::benutzerMenu()
{
    /*QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.exec();*/
     this->close();
    ben=new BenutzerUI(this);
    ben->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


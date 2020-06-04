/********************************************************************************
** Form generated from reading UI file 'administratorui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORUI_H
#define UI_ADMINISTRATORUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorUI
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *modifyButton;
    QPushButton *showButton;
    QTextBrowser *administratorMenuText;
    QPushButton *quitButton;
    QPlainTextEdit *titleInput;
    QPlainTextEdit *jahrInput;
    QPlainTextEdit *likesInput;
    QPlainTextEdit *trailerInput;
    QPlainTextEdit *genreInput;
    QPushButton *ok_addButton;
    QPushButton *ok_removeButton;
    QPushButton *ok_modifyButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdministratorUI)
    {
        if (AdministratorUI->objectName().isEmpty())
            AdministratorUI->setObjectName(QString::fromUtf8("AdministratorUI"));
        AdministratorUI->resize(800, 600);
        centralwidget = new QWidget(AdministratorUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(70, 120, 171, 41));
        QFont font;
        font.setPointSize(14);
        addButton->setFont(font);
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(70, 180, 171, 41));
        removeButton->setFont(font);
        modifyButton = new QPushButton(centralwidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(70, 250, 171, 41));
        modifyButton->setFont(font);
        showButton = new QPushButton(centralwidget);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setGeometry(QRect(70, 310, 171, 41));
        showButton->setFont(font);
        administratorMenuText = new QTextBrowser(centralwidget);
        administratorMenuText->setObjectName(QString::fromUtf8("administratorMenuText"));
        administratorMenuText->setGeometry(QRect(80, 10, 601, 81));
        administratorMenuText->setFrameShape(QFrame::NoFrame);
        administratorMenuText->setLineWidth(1);
        administratorMenuText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(660, 390, 121, 41));
        QFont font1;
        font1.setPointSize(16);
        quitButton->setFont(font1);
        titleInput = new QPlainTextEdit(centralwidget);
        titleInput->setObjectName(QString::fromUtf8("titleInput"));
        titleInput->setGeometry(QRect(340, 90, 281, 41));
        jahrInput = new QPlainTextEdit(centralwidget);
        jahrInput->setObjectName(QString::fromUtf8("jahrInput"));
        jahrInput->setGeometry(QRect(340, 140, 281, 41));
        likesInput = new QPlainTextEdit(centralwidget);
        likesInput->setObjectName(QString::fromUtf8("likesInput"));
        likesInput->setGeometry(QRect(340, 260, 281, 41));
        trailerInput = new QPlainTextEdit(centralwidget);
        trailerInput->setObjectName(QString::fromUtf8("trailerInput"));
        trailerInput->setGeometry(QRect(340, 310, 281, 41));
        genreInput = new QPlainTextEdit(centralwidget);
        genreInput->setObjectName(QString::fromUtf8("genreInput"));
        genreInput->setGeometry(QRect(340, 200, 281, 41));
        ok_addButton = new QPushButton(centralwidget);
        ok_addButton->setObjectName(QString::fromUtf8("ok_addButton"));
        ok_addButton->setGeometry(QRect(640, 130, 61, 21));
        ok_removeButton = new QPushButton(centralwidget);
        ok_removeButton->setObjectName(QString::fromUtf8("ok_removeButton"));
        ok_removeButton->setGeometry(QRect(640, 190, 61, 21));
        ok_modifyButton = new QPushButton(centralwidget);
        ok_modifyButton->setObjectName(QString::fromUtf8("ok_modifyButton"));
        ok_modifyButton->setGeometry(QRect(640, 270, 61, 21));
        AdministratorUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdministratorUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AdministratorUI->setMenuBar(menubar);
        statusbar = new QStatusBar(AdministratorUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdministratorUI->setStatusBar(statusbar);

        retranslateUi(AdministratorUI);

        QMetaObject::connectSlotsByName(AdministratorUI);
    } // setupUi

    void retranslateUi(QMainWindow *AdministratorUI)
    {
        AdministratorUI->setWindowTitle(QCoreApplication::translate("AdministratorUI", "MainWindow", nullptr));
        addButton->setText(QCoreApplication::translate("AdministratorUI", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("AdministratorUI", "Remove", nullptr));
        modifyButton->setText(QCoreApplication::translate("AdministratorUI", "Modify", nullptr));
        showButton->setText(QCoreApplication::translate("AdministratorUI", "Show", nullptr));
        administratorMenuText->setHtml(QCoreApplication::translate("AdministratorUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">Administrator-Menu</span></p></body></html>", nullptr));
        quitButton->setText(QCoreApplication::translate("AdministratorUI", "Quit", nullptr));
        titleInput->setPlainText(QCoreApplication::translate("AdministratorUI", "Title", nullptr));
        jahrInput->setPlainText(QCoreApplication::translate("AdministratorUI", "Jahr", nullptr));
        likesInput->setPlainText(QCoreApplication::translate("AdministratorUI", "Likes Anzahl", nullptr));
        trailerInput->setPlainText(QCoreApplication::translate("AdministratorUI", "Trailer", nullptr));
        genreInput->setPlainText(QCoreApplication::translate("AdministratorUI", "Genre", nullptr));
        ok_addButton->setText(QCoreApplication::translate("AdministratorUI", "ok", nullptr));
        ok_removeButton->setText(QCoreApplication::translate("AdministratorUI", "ok", nullptr));
        ok_modifyButton->setText(QCoreApplication::translate("AdministratorUI", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministratorUI: public Ui_AdministratorUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORUI_H

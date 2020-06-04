/********************************************************************************
** Form generated from reading UI file 'benutzerui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENUTZERUI_H
#define UI_BENUTZERUI_H

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

class Ui_BenutzerUI
{
public:
    QWidget *centralwidget;
    QTextBrowser *chooseFileText;
    QPushButton *htmlButton;
    QPushButton *csvButton;
    QPushButton *searchButton;
    QPushButton *watchButton;
    QTextBrowser *titelText;
    QPlainTextEdit *titelInput;
    QTextBrowser *jahrText;
    QPlainTextEdit *jahrInput;
    QTextBrowser *genreText;
    QPlainTextEdit *genreInput;
    QPushButton *likeButton;
    QPushButton *addToWatchlistButton;
    QTextBrowser *benutzerMenuText;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BenutzerUI)
    {
        if (BenutzerUI->objectName().isEmpty())
            BenutzerUI->setObjectName(QString::fromUtf8("BenutzerUI"));
        BenutzerUI->resize(800, 600);
        centralwidget = new QWidget(BenutzerUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chooseFileText = new QTextBrowser(centralwidget);
        chooseFileText->setObjectName(QString::fromUtf8("chooseFileText"));
        chooseFileText->setGeometry(QRect(170, 80, 421, 91));
        chooseFileText->setFrameShape(QFrame::NoFrame);
        htmlButton = new QPushButton(centralwidget);
        htmlButton->setObjectName(QString::fromUtf8("htmlButton"));
        htmlButton->setGeometry(QRect(180, 200, 151, 51));
        QFont font;
        font.setPointSize(16);
        htmlButton->setFont(font);
        csvButton = new QPushButton(centralwidget);
        csvButton->setObjectName(QString::fromUtf8("csvButton"));
        csvButton->setGeometry(QRect(430, 200, 151, 51));
        csvButton->setFont(font);
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(50, 430, 131, 41));
        QFont font1;
        font1.setPointSize(14);
        searchButton->setFont(font1);
        watchButton = new QPushButton(centralwidget);
        watchButton->setObjectName(QString::fromUtf8("watchButton"));
        watchButton->setGeometry(QRect(50, 260, 131, 41));
        watchButton->setFont(font1);
        titelText = new QTextBrowser(centralwidget);
        titelText->setObjectName(QString::fromUtf8("titelText"));
        titelText->setGeometry(QRect(200, 260, 181, 41));
        titelInput = new QPlainTextEdit(centralwidget);
        titelInput->setObjectName(QString::fromUtf8("titelInput"));
        titelInput->setGeometry(QRect(390, 260, 331, 41));
        jahrText = new QTextBrowser(centralwidget);
        jahrText->setObjectName(QString::fromUtf8("jahrText"));
        jahrText->setGeometry(QRect(200, 310, 181, 41));
        jahrInput = new QPlainTextEdit(centralwidget);
        jahrInput->setObjectName(QString::fromUtf8("jahrInput"));
        jahrInput->setGeometry(QRect(390, 310, 331, 41));
        genreText = new QTextBrowser(centralwidget);
        genreText->setObjectName(QString::fromUtf8("genreText"));
        genreText->setGeometry(QRect(210, 430, 181, 41));
        genreInput = new QPlainTextEdit(centralwidget);
        genreInput->setObjectName(QString::fromUtf8("genreInput"));
        genreInput->setGeometry(QRect(400, 430, 331, 41));
        likeButton = new QPushButton(centralwidget);
        likeButton->setObjectName(QString::fromUtf8("likeButton"));
        likeButton->setGeometry(QRect(320, 370, 131, 41));
        likeButton->setFont(font1);
        addToWatchlistButton = new QPushButton(centralwidget);
        addToWatchlistButton->setObjectName(QString::fromUtf8("addToWatchlistButton"));
        addToWatchlistButton->setGeometry(QRect(270, 490, 241, 41));
        addToWatchlistButton->setFont(font1);
        benutzerMenuText = new QTextBrowser(centralwidget);
        benutzerMenuText->setObjectName(QString::fromUtf8("benutzerMenuText"));
        benutzerMenuText->setGeometry(QRect(100, 40, 601, 81));
        benutzerMenuText->setFrameShape(QFrame::NoFrame);
        benutzerMenuText->setLineWidth(1);
        benutzerMenuText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(650, 490, 121, 41));
        quitButton->setFont(font);
        BenutzerUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BenutzerUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        BenutzerUI->setMenuBar(menubar);
        statusbar = new QStatusBar(BenutzerUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BenutzerUI->setStatusBar(statusbar);

        retranslateUi(BenutzerUI);

        QMetaObject::connectSlotsByName(BenutzerUI);
    } // setupUi

    void retranslateUi(QMainWindow *BenutzerUI)
    {
        BenutzerUI->setWindowTitle(QCoreApplication::translate("BenutzerUI", "MainWindow", nullptr));
        chooseFileText->setHtml(QCoreApplication::translate("BenutzerUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Open the file as ... ?</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">(click one of the options)</span></p></body></html>", nullptr));
        htmlButton->setText(QCoreApplication::translate("BenutzerUI", "HTML", nullptr));
        csvButton->setText(QCoreApplication::translate("BenutzerUI", "CSV", nullptr));
        searchButton->setText(QCoreApplication::translate("BenutzerUI", "Search", nullptr));
        watchButton->setText(QCoreApplication::translate("BenutzerUI", "Watch", nullptr));
        titelText->setHtml(QCoreApplication::translate("BenutzerUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Titel eingeben:</span></p></body></html>", nullptr));
        jahrText->setHtml(QCoreApplication::translate("BenutzerUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Jahr eingeben:</span></p></body></html>", nullptr));
        genreText->setHtml(QCoreApplication::translate("BenutzerUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Genre eingeben:</span></p></body></html>", nullptr));
        likeButton->setText(QCoreApplication::translate("BenutzerUI", "Like", nullptr));
        addToWatchlistButton->setText(QCoreApplication::translate("BenutzerUI", "Add to watchlist", nullptr));
        benutzerMenuText->setHtml(QCoreApplication::translate("BenutzerUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">Benutzer-Menu</span></p></body></html>", nullptr));
        quitButton->setText(QCoreApplication::translate("BenutzerUI", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BenutzerUI: public Ui_BenutzerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENUTZERUI_H

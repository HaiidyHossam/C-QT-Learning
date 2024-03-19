/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsave_as;
    QAction *actioncut;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actionredo;
    QAction *actionundo;
    QAction *actionabout;
    QAction *actionFont;
    QAction *actioncolor;
    QAction *actionback_ground_color;
    QAction *actionbackground_color_text;
    QAction *actionprint;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuedit;
    QMenu *menuabout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(503, 429);
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName("actionnew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/new.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName("actionopen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/open.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName("actionsave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon2);
        actionsave_as = new QAction(MainWindow);
        actionsave_as->setObjectName("actionsave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/saveas.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave_as->setIcon(icon3);
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName("actioncut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/cut.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncut->setIcon(icon4);
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName("actioncopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/copy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncopy->setIcon(icon5);
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName("actionpaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/paste.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste->setIcon(icon6);
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName("actionredo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/redo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionredo->setIcon(icon7);
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName("actionundo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/undo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionundo->setIcon(icon8);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/about.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionabout->setIcon(icon9);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        actioncolor = new QAction(MainWindow);
        actioncolor->setObjectName("actioncolor");
        actionback_ground_color = new QAction(MainWindow);
        actionback_ground_color->setObjectName("actionback_ground_color");
        actionbackground_color_text = new QAction(MainWindow);
        actionbackground_color_text->setObjectName("actionbackground_color_text");
        actionprint = new QAction(MainWindow);
        actionprint->setObjectName("actionprint");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 503, 26));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuedit = new QMenu(menubar);
        menuedit->setObjectName("menuedit");
        menuabout = new QMenu(menubar);
        menuabout->setObjectName("menuabout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuedit->menuAction());
        menubar->addAction(menuabout->menuAction());
        menufile->addSeparator();
        menufile->addSeparator();
        menufile->addAction(actionnew);
        menufile->addAction(actionopen);
        menufile->addSeparator();
        menufile->addAction(actionsave);
        menufile->addAction(actionsave_as);
        menufile->addAction(actionprint);
        menuedit->addAction(actioncut);
        menuedit->addAction(actioncopy);
        menuedit->addAction(actionpaste);
        menuedit->addSeparator();
        menuedit->addAction(actionredo);
        menuedit->addAction(actionundo);
        menuedit->addSeparator();
        menuedit->addAction(actionFont);
        menuedit->addAction(actioncolor);
        menuedit->addAction(actionback_ground_color);
        menuedit->addAction(actionbackground_color_text);
        menuabout->addAction(actionabout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew->setText(QCoreApplication::translate("MainWindow", "new", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionsave_as->setText(QCoreApplication::translate("MainWindow", "save as", nullptr));
        actioncut->setText(QCoreApplication::translate("MainWindow", "cut", nullptr));
        actioncopy->setText(QCoreApplication::translate("MainWindow", "copy", nullptr));
        actionpaste->setText(QCoreApplication::translate("MainWindow", "paste", nullptr));
        actionredo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
        actionundo->setText(QCoreApplication::translate("MainWindow", "undo", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actioncolor->setText(QCoreApplication::translate("MainWindow", "color", nullptr));
        actionback_ground_color->setText(QCoreApplication::translate("MainWindow", "back ground color", nullptr));
        actionbackground_color_text->setText(QCoreApplication::translate("MainWindow", "background color_text", nullptr));
        actionprint->setText(QCoreApplication::translate("MainWindow", "print", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuedit->setTitle(QCoreApplication::translate("MainWindow", "edit", nullptr));
        menuabout->setTitle(QCoreApplication::translate("MainWindow", "about", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

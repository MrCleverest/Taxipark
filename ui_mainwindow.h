/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *vertical;
    QHBoxLayout *navigation;
    QPushButton *menu;
    QPushButton *bestdrivers;
    QPushButton *trips;
    QHBoxLayout *table;
    QTableWidget *tableWidget;
    QHBoxLayout *find;
    QPushButton *search;
    QLineEdit *searchLineEdit;
    QHBoxLayout *buttons;
    QPushButton *clear;
    QPushButton *load;
    QPushButton *save;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1426, 844);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 243);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(16777215, 1000));
        QFont font;
        font.setPointSize(9);
        centralwidget->setFont(font);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        vertical = new QVBoxLayout();
        vertical->setObjectName("vertical");
        vertical->setSizeConstraint(QLayout::SetNoConstraint);
        navigation = new QHBoxLayout();
        navigation->setSpacing(15);
        navigation->setObjectName("navigation");
        navigation->setContentsMargins(-1, -1, -1, 10);
        menu = new QPushButton(centralwidget);
        menu->setObjectName("menu");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        menu->setFont(font1);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        navigation->addWidget(menu);

        bestdrivers = new QPushButton(centralwidget);
        bestdrivers->setObjectName("bestdrivers");
        bestdrivers->setFont(font1);
        bestdrivers->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        navigation->addWidget(bestdrivers);

        trips = new QPushButton(centralwidget);
        trips->setObjectName("trips");
        trips->setFont(font1);
        trips->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        navigation->addWidget(trips);


        vertical->addLayout(navigation);

        table = new QHBoxLayout();
        table->setSpacing(15);
        table->setObjectName("table");
        table->setSizeConstraint(QLayout::SetDefaultConstraint);
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(1400, 600));
        tableWidget->setMaximumSize(QSize(1900, 800));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setDefaultSectionSize(80);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(false);

        table->addWidget(tableWidget);


        vertical->addLayout(table);

        find = new QHBoxLayout();
        find->setSpacing(4);
        find->setObjectName("find");
        find->setContentsMargins(-1, 10, -1, -1);
        search = new QPushButton(centralwidget);
        search->setObjectName("search");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy2);
        search->setBaseSize(QSize(600, 0));
        search->setFont(font1);
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        find->addWidget(search);

        searchLineEdit = new QLineEdit(centralwidget);
        searchLineEdit->setObjectName("searchLineEdit");
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(20);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy3);
        searchLineEdit->setFont(font1);
        searchLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        find->addWidget(searchLineEdit);


        vertical->addLayout(find);

        buttons = new QHBoxLayout();
        buttons->setSpacing(4);
        buttons->setObjectName("buttons");
        buttons->setContentsMargins(-1, -1, -1, 10);
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(10);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy4);
        clear->setFont(font1);
        clear->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        buttons->addWidget(clear);

        load = new QPushButton(centralwidget);
        load->setObjectName("load");
        sizePolicy4.setHeightForWidth(load->sizePolicy().hasHeightForWidth());
        load->setSizePolicy(sizePolicy4);
        load->setFont(font1);
        load->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        buttons->addWidget(load);

        save = new QPushButton(centralwidget);
        save->setObjectName("save");
        sizePolicy4.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy4);
        save->setFont(font1);
        save->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 198);\n"
"border: 1px solid black;"));

        buttons->addWidget(save);


        vertical->addLayout(buttons);


        verticalLayout->addLayout(vertical);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1426, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        menu->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        bestdrivers->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\320\272\321\200\320\260\321\211\321\226 \320\262\320\276\320\264\321\226\321\227", nullptr));
        trips->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\276\320\272 \320\277\320\276\321\227\320\267\320\264\320\272\320\270", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        load->setText(QCoreApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

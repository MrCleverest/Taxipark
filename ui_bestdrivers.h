/********************************************************************************
** Form generated from reading UI file 'bestdrivers.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BESTDRIVERS_H
#define UI_BESTDRIVERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BestDrivers
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QTableWidget *economyTable;
    QTableWidget *standardTable;
    QTableWidget *businessTable;

    void setupUi(QDialog *BestDrivers)
    {
        if (BestDrivers->objectName().isEmpty())
            BestDrivers->setObjectName("BestDrivers");
        BestDrivers->resize(1258, 556);
        BestDrivers->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));
        verticalLayout = new QVBoxLayout(BestDrivers);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(BestDrivers);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(BestDrivers);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(BestDrivers);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(BestDrivers);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        economyTable = new QTableWidget(BestDrivers);
        if (economyTable->columnCount() < 1)
            economyTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        economyTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        economyTable->setObjectName("economyTable");

        horizontalLayout->addWidget(economyTable);

        standardTable = new QTableWidget(BestDrivers);
        if (standardTable->columnCount() < 1)
            standardTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        standardTable->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        standardTable->setObjectName("standardTable");

        horizontalLayout->addWidget(standardTable);

        businessTable = new QTableWidget(BestDrivers);
        if (businessTable->columnCount() < 1)
            businessTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        businessTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        businessTable->setObjectName("businessTable");

        horizontalLayout->addWidget(businessTable);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(BestDrivers);

        QMetaObject::connectSlotsByName(BestDrivers);
    } // setupUi

    void retranslateUi(QDialog *BestDrivers)
    {
        BestDrivers->setWindowTitle(QCoreApplication::translate("BestDrivers", "Best Drivers", nullptr));
        label_4->setText(QCoreApplication::translate("BestDrivers", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\242\320\276\320\277 \320\262\320\276\320\264\321\226\321\227\320\262</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("BestDrivers", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\225\320\272\320\276\320\275\320\276\320\274</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("BestDrivers", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("BestDrivers", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\221\321\226\320\267\320\275\320\265\321\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BestDrivers: public Ui_BestDrivers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BESTDRIVERS_H

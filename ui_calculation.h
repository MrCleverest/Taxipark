/********************************************************************************
** Form generated from reading UI file 'calculation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATION_H
#define UI_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculation
{
public:
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *clas;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *km;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *km1;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *os;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *kg;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *minut;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *calculate;
    QLabel *label_16;
    QLineEdit *results;
    QPushButton *order;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *mains;
    QPushButton *trips;
    QLabel *label;

    void setupUi(QDialog *Calculation)
    {
        if (Calculation->objectName().isEmpty())
            Calculation->setObjectName("Calculation");
        Calculation->resize(771, 508);
        Calculation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));
        label_2 = new QLabel(Calculation);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -20, 781, 551));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255, 0);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Games/images/road.jpg")));
        verticalLayoutWidget_2 = new QWidget(Calculation);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(160, 100, 471, 391));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName("label_14");
        QFont font1;
        font1.setPointSize(14);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_14->addWidget(label_14);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        clas = new QLineEdit(verticalLayoutWidget_2);
        clas->setObjectName("clas");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clas->sizePolicy().hasHeightForWidth());
        clas->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        clas->setFont(font2);

        horizontalLayout_14->addWidget(clas);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName("label_15");
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_15->addWidget(label_15);

        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);

        km = new QLineEdit(verticalLayoutWidget_2);
        km->setObjectName("km");
        sizePolicy.setHeightForWidth(km->sizePolicy().hasHeightForWidth());
        km->setSizePolicy(sizePolicy);
        km->setFont(font2);

        horizontalLayout_15->addWidget(km);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_13->addWidget(label_13);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        km1 = new QLineEdit(verticalLayoutWidget_2);
        km1->setObjectName("km1");
        sizePolicy.setHeightForWidth(km1->sizePolicy().hasHeightForWidth());
        km1->setSizePolicy(sizePolicy);
        km1->setFont(font2);

        horizontalLayout_13->addWidget(km1);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        os = new QLineEdit(verticalLayoutWidget_2);
        os->setObjectName("os");
        sizePolicy.setHeightForWidth(os->sizePolicy().hasHeightForWidth());
        os->setSizePolicy(sizePolicy);
        os->setFont(font2);

        horizontalLayout_12->addWidget(os);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_11->addWidget(label_11);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        kg = new QLineEdit(verticalLayoutWidget_2);
        kg->setObjectName("kg");
        sizePolicy.setHeightForWidth(kg->sizePolicy().hasHeightForWidth());
        kg->setSizePolicy(sizePolicy);
        kg->setFont(font2);
        kg->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_11->addWidget(kg);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        minut = new QLineEdit(verticalLayoutWidget_2);
        minut->setObjectName("minut");
        sizePolicy.setHeightForWidth(minut->sizePolicy().hasHeightForWidth());
        minut->setSizePolicy(sizePolicy);
        minut->setFont(font2);

        horizontalLayout_10->addWidget(minut);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        calculate = new QPushButton(verticalLayoutWidget_2);
        calculate->setObjectName("calculate");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(250);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calculate->sizePolicy().hasHeightForWidth());
        calculate->setSizePolicy(sizePolicy1);
        calculate->setFont(font1);
        calculate->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
"border: 2px solid black;"));

        horizontalLayout_16->addWidget(calculate);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        horizontalLayout_16->addWidget(label_16);

        results = new QLineEdit(verticalLayoutWidget_2);
        results->setObjectName("results");
        results->setFont(font2);

        horizontalLayout_16->addWidget(results);


        verticalLayout_2->addLayout(horizontalLayout_16);

        order = new QPushButton(verticalLayoutWidget_2);
        order->setObjectName("order");
        order->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(order->sizePolicy().hasHeightForWidth());
        order->setSizePolicy(sizePolicy2);
        order->setFont(font1);
        order->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
"border: 2px solid black;"));

        verticalLayout_2->addWidget(order);

        layoutWidget_3 = new QWidget(Calculation);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(40, 10, 691, 42));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        mains = new QPushButton(layoutWidget_3);
        mains->setObjectName("mains");
        mains->setFont(font1);
        mains->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
"border: 2px solid black;"));

        horizontalLayout_8->addWidget(mains);

        trips = new QPushButton(layoutWidget_3);
        trips->setObjectName("trips");
        trips->setFont(font1);
        trips->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
"border: 2px solid black;"));

        horizontalLayout_8->addWidget(trips);

        label = new QLabel(Calculation);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 331, 51));
        QFont font3;
        font3.setPointSize(18);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 0);"));

        retranslateUi(Calculation);

        QMetaObject::connectSlotsByName(Calculation);
    } // setupUi

    void retranslateUi(QDialog *Calculation)
    {
        Calculation->setWindowTitle(QCoreApplication::translate("Calculation", "Dialog", nullptr));
        label_2->setText(QString());
        label_14->setText(QCoreApplication::translate("Calculation", "\320\232\320\273\320\260\321\201 \320\260\320\262\321\202\320\276", nullptr));
        label_15->setText(QCoreApplication::translate("Calculation", "\320\222\321\226\320\264\321\201\321\202\320\260\320\275\321\214 (\320\274\321\226\321\201\321\202\320\276, \320\272\320\274)", nullptr));
        label_13->setText(QCoreApplication::translate("Calculation", "\320\222\321\226\320\264\321\201\321\202\320\260\320\275\321\214 (\320\267\320\260 \320\274\321\226\321\201\321\202\320\276\320\274)", nullptr));
        label_12->setText(QCoreApplication::translate("Calculation", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\276\321\201\321\226\320\261", nullptr));
        label_11->setText(QCoreApplication::translate("Calculation", "\320\222\320\260\320\275\321\202\320\260\320\266", nullptr));
        label_10->setText(QCoreApplication::translate("Calculation", "\320\247\320\260\321\201 \320\276\321\207\321\226\320\272\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        calculate->setText(QCoreApplication::translate("Calculation", "\320\237\320\276\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("Calculation", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        order->setText(QCoreApplication::translate("Calculation", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
        mains->setText(QCoreApplication::translate("Calculation", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260", nullptr));
        trips->setText(QCoreApplication::translate("Calculation", "\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\276\320\272 \320\277\320\276\321\227\320\267\320\264\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("Calculation", "<html><head/><body><p align=\"center\">\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\276\320\272 \320\277\320\276\321\227\320\267\320\264\320\272\320\270</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculation: public Ui_Calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H

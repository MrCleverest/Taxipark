/********************************************************************************
** Form generated from reading UI file 'createwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWINDOW_H
#define UI_CREATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *open;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *name;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *password;
    QPushButton *enter;

    void setupUi(QDialog *CreateWindow)
    {
        if (CreateWindow->objectName().isEmpty())
            CreateWindow->setObjectName("CreateWindow");
        CreateWindow->resize(1150, 590);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateWindow->sizePolicy().hasHeightForWidth());
        CreateWindow->setSizePolicy(sizePolicy);
        CreateWindow->setMaximumSize(QSize(1150, 590));
        CreateWindow->setStyleSheet(QString::fromUtf8("background-image: url(C:\\Games\\images);"));
        label = new QLabel(CreateWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-40, -40, 1241, 631));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Games/images/taxi.jpg")));
        label_2 = new QLabel(CreateWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(185, 143, 171, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        open = new QPushButton(CreateWindow);
        open->setObjectName("open");
        open->setGeometry(QRect(50, 30, 441, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        open->setFont(font1);
        open->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        horizontalLayoutWidget = new QWidget(CreateWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 230, 381, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(20);
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name = new QLineEdit(horizontalLayoutWidget);
        name->setObjectName("name");
        QFont font3;
        font3.setPointSize(18);
        name->setFont(font3);

        horizontalLayout->addWidget(name);

        horizontalLayoutWidget_2 = new QWidget(CreateWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(80, 330, 381, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        password = new QLineEdit(horizontalLayoutWidget_2);
        password->setObjectName("password");
        password->setFont(font3);

        horizontalLayout_2->addWidget(password);

        enter = new QPushButton(CreateWindow);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(150, 450, 241, 51));
        enter->setFont(font1);
        enter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));

        retranslateUi(CreateWindow);

        QMetaObject::connectSlotsByName(CreateWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateWindow)
    {
        CreateWindow->setWindowTitle(QCoreApplication::translate("CreateWindow", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("CreateWindow", "\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\321\217", nullptr));
        open->setText(QCoreApplication::translate("CreateWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\321\226\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("CreateWindow", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("CreateWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        enter->setText(QCoreApplication::translate("CreateWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWindow: public Ui_CreateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWINDOW_H

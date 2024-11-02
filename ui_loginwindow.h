/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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

class Ui_LoginWindow
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *name;
    QPushButton *enter;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *password;
    QPushButton *create;
    QLabel *label_4;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(1150, 590);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        LoginWindow->setMaximumSize(QSize(1150, 590));
        QFont font;
        font.setPointSize(12);
        LoginWindow->setFont(font);
        label = new QLabel(LoginWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(-40, -40, 1301, 631));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Games/images/taxi.jpg")));
        horizontalLayoutWidget = new QWidget(LoginWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 230, 371, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name = new QLineEdit(horizontalLayoutWidget);
        name->setObjectName("name");
        QFont font2;
        font2.setPointSize(18);
        name->setFont(font2);

        horizontalLayout->addWidget(name);

        enter = new QPushButton(LoginWindow);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(150, 450, 241, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        enter->setFont(font3);
        enter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"border: 2px solid black;"));
        horizontalLayoutWidget_2 = new QWidget(LoginWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(90, 330, 371, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        password = new QLineEdit(horizontalLayoutWidget_2);
        password->setObjectName("password");
        password->setFont(font2);

        horizontalLayout_2->addWidget(password);

        create = new QPushButton(LoginWindow);
        create->setObjectName("create");
        create->setGeometry(QRect(50, 30, 441, 51));
        create->setFont(font3);
        create->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 0);\n"
"border: 2px solid black;"));
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 130, 201, 71));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        label_4->setFont(font4);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\321\226\320\275", nullptr));
        enter->setText(QCoreApplication::translate("LoginWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        create->setText(QCoreApplication::translate("LoginWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\321\226\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

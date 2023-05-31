/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 81, 31));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 170, 81, 31));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 130, 181, 21));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 100, 181, 21));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 100, 41, 21));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 41, 21));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        pushButton_2->setText(QApplication::translate("login", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

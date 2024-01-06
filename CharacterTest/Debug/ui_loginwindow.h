/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QLabel *imgLabel;
    QLabel *AccountLabel;
    QLineEdit *AccountEdit;
    QLabel *CodeLabel;
    QLineEdit *CodeEdit;
    QPushButton *SubmitButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(890, 449);
        imgLabel = new QLabel(loginWindow);
        imgLabel->setObjectName(QStringLiteral("imgLabel"));
        imgLabel->setGeometry(QRect(0, 0, 731, 391));
        imgLabel->setPixmap(QPixmap(QString::fromUtf8(":/background.png")));
        AccountLabel = new QLabel(loginWindow);
        AccountLabel->setObjectName(QStringLiteral("AccountLabel"));
        AccountLabel->setGeometry(QRect(170, 80, 71, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        AccountLabel->setFont(font);
        AccountLabel->setAutoFillBackground(false);
        AccountEdit = new QLineEdit(loginWindow);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));
        AccountEdit->setGeometry(QRect(240, 90, 281, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        AccountEdit->setFont(font1);
        AccountEdit->setCursor(QCursor(Qt::PointingHandCursor));
        CodeLabel = new QLabel(loginWindow);
        CodeLabel->setObjectName(QStringLiteral("CodeLabel"));
        CodeLabel->setGeometry(QRect(170, 190, 71, 50));
        CodeLabel->setFont(font);
        CodeLabel->setAutoFillBackground(false);
        CodeEdit = new QLineEdit(loginWindow);
        CodeEdit->setObjectName(QStringLiteral("CodeEdit"));
        CodeEdit->setGeometry(QRect(240, 200, 281, 31));
        CodeEdit->setFont(font1);
        SubmitButton = new QPushButton(loginWindow);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        SubmitButton->setGeometry(QRect(160, 290, 81, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        SubmitButton->setFont(font2);
        SubmitButton->setCursor(QCursor(Qt::PointingHandCursor));
        cancelButton = new QPushButton(loginWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(480, 290, 81, 41));
        cancelButton->setFont(font2);
        cancelButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QDialog *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "loginWindow", Q_NULLPTR));
        imgLabel->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        AccountLabel->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        AccountLabel->setText(QApplication::translate("loginWindow", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        CodeLabel->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        CodeLabel->setText(QApplication::translate("loginWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        SubmitButton->setText(QApplication::translate("loginWindow", "\346\217\220\344\272\244", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("loginWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

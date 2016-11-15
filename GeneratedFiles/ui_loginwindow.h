/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *myNameLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *accountLabel;
    QLineEdit *accountLineEdit;
    QPushButton *regPushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pwdLabel;
    QLineEdit *pwdLineEdit_2;
    QPushButton *fgtPwdPushButton;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *autoLogincheckBox;
    QCheckBox *remPwdcheckBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginPushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *accountLabel_2;
    QLabel *pwdLabel_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *accountLineEdit_2;
    QLineEdit *pwdLineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loginPushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(892, 668);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 120, 260, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        myNameLabel = new QLabel(layoutWidget);
        myNameLabel->setObjectName(QStringLiteral("myNameLabel"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        myNameLabel->setFont(font);
        myNameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(myNameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        accountLabel = new QLabel(layoutWidget);
        accountLabel->setObjectName(QStringLiteral("accountLabel"));

        horizontalLayout->addWidget(accountLabel);

        accountLineEdit = new QLineEdit(layoutWidget);
        accountLineEdit->setObjectName(QStringLiteral("accountLineEdit"));

        horizontalLayout->addWidget(accountLineEdit);

        regPushButton = new QPushButton(layoutWidget);
        regPushButton->setObjectName(QStringLiteral("regPushButton"));

        horizontalLayout->addWidget(regPushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pwdLabel = new QLabel(layoutWidget);
        pwdLabel->setObjectName(QStringLiteral("pwdLabel"));

        horizontalLayout_2->addWidget(pwdLabel);

        pwdLineEdit_2 = new QLineEdit(layoutWidget);
        pwdLineEdit_2->setObjectName(QStringLiteral("pwdLineEdit_2"));

        horizontalLayout_2->addWidget(pwdLineEdit_2);

        fgtPwdPushButton = new QPushButton(layoutWidget);
        fgtPwdPushButton->setObjectName(QStringLiteral("fgtPwdPushButton"));

        horizontalLayout_2->addWidget(fgtPwdPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        autoLogincheckBox = new QCheckBox(layoutWidget);
        autoLogincheckBox->setObjectName(QStringLiteral("autoLogincheckBox"));

        horizontalLayout_3->addWidget(autoLogincheckBox);

        remPwdcheckBox = new QCheckBox(layoutWidget);
        remPwdcheckBox->setObjectName(QStringLiteral("remPwdcheckBox"));

        horizontalLayout_3->addWidget(remPwdcheckBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        loginPushButton = new QPushButton(layoutWidget);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginPushButton->sizePolicy().hasHeightForWidth());
        loginPushButton->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(loginPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 390, 261, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        accountLabel_2 = new QLabel(layoutWidget1);
        accountLabel_2->setObjectName(QStringLiteral("accountLabel_2"));

        verticalLayout_2->addWidget(accountLabel_2);

        pwdLabel_2 = new QLabel(layoutWidget1);
        pwdLabel_2->setObjectName(QStringLiteral("pwdLabel_2"));

        verticalLayout_2->addWidget(pwdLabel_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        accountLineEdit_2 = new QLineEdit(layoutWidget1);
        accountLineEdit_2->setObjectName(QStringLiteral("accountLineEdit_2"));

        verticalLayout_3->addWidget(accountLineEdit_2);

        pwdLineEdit_3 = new QLineEdit(layoutWidget1);
        pwdLineEdit_3->setObjectName(QStringLiteral("pwdLineEdit_3"));

        verticalLayout_3->addWidget(pwdLineEdit_3);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        loginPushButton_2 = new QPushButton(layoutWidget1);
        loginPushButton_2->setObjectName(QStringLiteral("loginPushButton_2"));
        sizePolicy.setHeightForWidth(loginPushButton_2->sizePolicy().hasHeightForWidth());
        loginPushButton_2->setSizePolicy(sizePolicy);
        loginPushButton_2->setMinimumSize(QSize(80, 40));
        loginPushButton_2->setMaximumSize(QSize(160, 80));

        horizontalLayout_6->addWidget(loginPushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 892, 23));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "\345\205\210\347\273\264\346\224\277\344\274\201\344\272\221\344\274\232\350\256\256", 0));
        myNameLabel->setText(QApplication::translate("LoginWindow", "\345\205\210\347\273\264\346\224\277\344\274\201\344\272\221\344\274\232\350\256\256", 0));
        accountLabel->setText(QApplication::translate("LoginWindow", "\350\264\246\345\217\267\357\274\232", 0));
        regPushButton->setText(QApplication::translate("LoginWindow", "\346\263\250\345\206\214", 0));
        pwdLabel->setText(QApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", 0));
        fgtPwdPushButton->setText(QApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        autoLogincheckBox->setText(QApplication::translate("LoginWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        remPwdcheckBox->setText(QApplication::translate("LoginWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        loginPushButton->setText(QApplication::translate("LoginWindow", "\347\231\273\345\275\225", 0));
        accountLabel_2->setText(QApplication::translate("LoginWindow", "\344\274\232\350\256\256\345\217\267\357\274\232", 0));
        pwdLabel_2->setText(QApplication::translate("LoginWindow", "\346\202\250\347\232\204\345\247\223\345\220\215\357\274\232", 0));
        loginPushButton_2->setText(QApplication::translate("LoginWindow", "\345\212\240\345\205\245\344\274\232\350\256\256", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'managewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEWINDOW_H
#define UI_MANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageWindow)
    {
        if (ManageWindow->objectName().isEmpty())
            ManageWindow->setObjectName(QStringLiteral("ManageWindow"));
        ManageWindow->resize(800, 600);
        centralwidget = new QWidget(ManageWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 80, 75, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 80, 75, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 515, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        ManageWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        ManageWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ManageWindow->setStatusBar(statusbar);

        retranslateUi(ManageWindow);

        QMetaObject::connectSlotsByName(ManageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ManageWindow)
    {
        ManageWindow->setWindowTitle(QApplication::translate("ManageWindow", "\345\205\210\347\273\264\346\224\277\344\274\201\344\272\221\344\274\232\350\256\256", 0));
        pushButton_2->setText(QApplication::translate("ManageWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("ManageWindow", "PushButton", 0));
        label->setText(QApplication::translate("ManageWindow", "\345\260\212\346\225\254\347\232\204xxx\347\224\250\346\210\267\357\274\214\346\202\250\345\245\275\357\274\201\346\254\242\350\277\216\347\231\273\345\275\225\344\272\221\344\274\232\350\256\256\347\263\273\347\273\237\357\274\201", 0));
        pushButton->setText(QApplication::translate("ManageWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageWindow: public Ui_ManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEWINDOW_H

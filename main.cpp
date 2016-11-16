#include "ManageFrame.h"
#include "MainWindow.h"
#include "LoginFrame.h"
#include "BuoyWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow oMainWindow;
    oMainWindow.show();

    LoginFrame *pLoginFrame = new LoginFrame();
    //oLoginFrame.setWindowFlags(Qt::Popup);
    pLoginFrame->show();

    QVBoxLayout *pQVBoxLayout = oMainWindow.mainWidget();
    pQVBoxLayout->insertWidget(0, pLoginFrame);

    /*oLoginFrame.hide();
    ManageFrame oManageFrame;
    oManageFrame.show();*/

    return a.exec();
}

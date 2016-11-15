#include "LoginFrame.h"
#include "ManageFrame.h"
#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow oMainWindow;
    oMainWindow.show();

    LoginFrame oLoginFrame(oMainWindow.centralWidget());
    //oLoginFrame.setWindowFlags(Qt::Popup);
    oLoginFrame.show();

    /*oLoginFrame.hide();
    ManageFrame oManageFrame;
    oManageFrame.show();*/
    return a.exec();
}

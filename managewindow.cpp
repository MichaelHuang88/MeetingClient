#include "managewindow.h"
#include "ui_managewindow.h"

ManageWindow::ManageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManageWindow)
{
    ui->setupUi(this);
}

ManageWindow::~ManageWindow()
{
    delete ui;
}

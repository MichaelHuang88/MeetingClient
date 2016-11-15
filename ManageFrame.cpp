#include "ManageFrame.h"
#include "ui_manageframe.h"

ManageFrame::ManageFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::ManageFrame)
{
    ui->setupUi(this);
}

ManageFrame::~ManageFrame()
{
    delete ui;
}

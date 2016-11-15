#include "LoginningFrame.h"
#include "ui_loginningframe.h"

LoginningFrame::LoginningFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LoginningFrame)
{
    ui->setupUi(this);
}

LoginningFrame::~LoginningFrame()
{
    delete ui;
}

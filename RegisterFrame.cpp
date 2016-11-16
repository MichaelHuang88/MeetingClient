#include "RegisterFrame.h"
#include "ui_RegisterFrame.h"

RegisterFrame::RegisterFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::RegisterFrame)
{
    ui->setupUi(this);
}

RegisterFrame::~RegisterFrame()
{
    delete ui;
}

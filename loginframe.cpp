#include "LoginFrame.h"
#include "ui_loginframe.h"
#include "RegisterFrame.h"

LoginFrame::LoginFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::LoginFrame),
    m_pRegisterFrame(new RegisterFrame)
{
    ui->setupUi(this);
    ui->pwdLineEdit->setEchoMode(QLineEdit::Password);
}

LoginFrame::~LoginFrame()
{
    delete ui;
    delete m_pRegisterFrame;
}

void LoginFrame::ShowRegister()
{
    m_pRegisterFrame->show();
}

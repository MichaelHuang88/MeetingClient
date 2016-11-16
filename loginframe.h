#ifndef LOGINFRAME_H
#define LOGINFRAME_H

#include <QFrame>

class RegisterFrame;

namespace Ui {
class LoginFrame;
}

class LoginFrame : public QFrame
{
    Q_OBJECT

public:
    explicit LoginFrame(QWidget *parent = 0);
    ~LoginFrame();
private slots:
    void ShowRegister();

private:
    Ui::LoginFrame *ui;
    RegisterFrame  *m_pRegisterFrame;
};

#endif // LOGINFRAME_H

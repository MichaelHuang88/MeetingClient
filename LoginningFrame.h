#ifndef LOGINNINGFRAME_H
#define LOGINNINGFRAME_H

#include <QFrame>

namespace Ui {
class LoginningFrame;
}

class LoginningFrame : public QFrame
{
    Q_OBJECT

public:
    explicit LoginningFrame(QWidget *parent = 0);
    ~LoginningFrame();

private:
    Ui::LoginningFrame *ui;
};

#endif // LOGINNINGFRAME_H

#ifndef REGISTERFRAME_H
#define REGISTERFRAME_H

#include <QFrame>

namespace Ui {
class RegisterFrame;
}

class RegisterFrame : public QFrame
{
    Q_OBJECT

public:
    explicit RegisterFrame(QWidget *parent = 0);
    ~RegisterFrame();

private:
    Ui::RegisterFrame *ui;
};

#endif // REGISTERFRAME_H

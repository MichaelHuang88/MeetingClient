#ifndef MANAGEFRAME_H
#define MANAGEFRAME_H

#include <QFrame>

namespace Ui {
class ManageFrame;
}

class ManageFrame : public QFrame
{
    Q_OBJECT

public:
    explicit ManageFrame(QWidget *parent = 0);
    ~ManageFrame();

private:
    Ui::ManageFrame *ui;
};

#endif // MANAGEFRAME_H

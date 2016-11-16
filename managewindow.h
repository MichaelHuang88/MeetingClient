#ifndef MANAGEWINDOW_H
#define MANAGEWINDOW_H

#include <QMainWindow>

namespace Ui {
class ManageWindow;
}

class ManageWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManageWindow(QWidget *parent = 0);
    ~ManageWindow();

private:
    Ui::ManageWindow *ui;
};

#endif // MANAGEWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>

#include "BuoyWidget.h"

class BuoyWidget;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    QVBoxLayout* mainWidget();

protected:
    void changeEvent(QEvent *event);

public slots:
    void ShowMainWindow();
    void HideMainWindow();

private:
    Ui::MainWindow *ui;
    BuoyWidget     *m_oBuoyWidget;
};

#endif // MAINWINDOW_H

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "BuoyWidget.h"

#include <QPainter>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //第一个参数是设置无边框。第二个参数是允许任务栏按钮右键菜单，第三个参数是允许最小化与还原。
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);

    m_oBuoyWidget = new BuoyWidget;
    m_oBuoyWidget->SetPixmap( QPixmap(":/ico/res/myappico.ico") );
    //双击浮动时，隐藏浮标，还原主窗口（这里是一个LABEL）
    connect(m_oBuoyWidget, SIGNAL(DoubleClickedSignal()), this, SLOT(ShowMainWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QVBoxLayout* MainWindow::mainWidget()
{
    return ui->verticalLayout_2;
}

void MainWindow::changeEvent(QEvent *event)
{
    //重点，窗口最小化时最小化窗口（废话），显示浮标
    //窗口还原时，隐藏浮标，还原主窗口（这里是一个LABEL）
    if(event->type()==QEvent::WindowStateChange)
    {
        //changeEvent会在窗口最小化之前调用，如果不加QTimer，
        //我们把窗口隐藏了，但是Qt还以为窗口正要最小化，这样就会出错
        if(windowState() & Qt::WindowMinimized)
            QTimer::singleShot(0, this, SLOT(HideMainWindow()));
        else if(windowState() & Qt::WindowNoState)
            QTimer::singleShot(0, this, SLOT(ShowMainWindow()));
    }
    QMainWindow::changeEvent(event);
}

void MainWindow::ShowMainWindow()
{
    m_oBuoyWidget->hide();
    setWindowState(Qt::WindowMaximized);
    show();
}

void MainWindow::HideMainWindow()
{
    hide();
    m_oBuoyWidget->move( pos() );
    m_oBuoyWidget->show();
    setWindowState(Qt::WindowMinimized);
}

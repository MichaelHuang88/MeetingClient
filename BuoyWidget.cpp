#include "BuoyWidget.h"
#include <QPainter>

BuoyWidget::BuoyWidget(QWidget *parent)
: QWidget(parent)
{
    //将浮标Widget设置为：顶层窗口；无标题栏；工具条模式；背景透明；无输入焦点
    setWindowFlags( Qt::FramelessWindowHint
        | Qt::WindowStaysOnTopHint | Qt::Tool );
    setAttribute(Qt::WA_TranslucentBackground, true);
    setFocusPolicy(Qt::NoFocus);
    setWindowOpacity(0.5);
}

void BuoyWidget::mousePressEvent(QMouseEvent *event)
{
    //按住左键移动可以拖动窗口
    if(event->button() == Qt::LeftButton)
    {
        m_CurrentPos = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void BuoyWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton)
    {
        move(event->globalPos() - m_CurrentPos);
        event->accept();
    }
}

void BuoyWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, m_Pixmap);
}

void BuoyWidget::leaveEvent(QEvent *event)
{
    //鼠标离开窗口时是普通的指针
    setCursor(Qt::ArrowCursor);
}

void BuoyWidget::enterEvent(QEvent *event)
{
    //鼠标留在窗口上时是一个手指
    setCursor(Qt::PointingHandCursor);
}

void BuoyWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    emit DoubleClickedSignal();
}

void BuoyWidget::SetPixmap(const QPixmap &pixmap)
{
    m_Pixmap = pixmap;
    update();
}

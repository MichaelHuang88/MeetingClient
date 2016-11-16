#ifndef BUOYWIDGET_H
#define BUOYWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QPaintEvent>

class BuoyWidget : public QWidget
{
    Q_OBJECT
private:
    QPoint m_CurrentPos;
    QPixmap m_Pixmap;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
public:
    BuoyWidget(QWidget *parent = 0);
    void SetPixmap(const QPixmap &pixmap);
signals:
    void DoubleClickedSignal();
};

#endif // BUOYWIDGET_H

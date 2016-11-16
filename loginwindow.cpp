#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "wtypes.h"
#include "tchar.h"

#include "imcnote.h"

typedef IMCNote* (WINAPI *_MCNoteCreate)(HWND);

extern void LoadChat(HWND m_hWnd, int left, int top, int right, int bottom);

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
//     HWND m_hWnd = (HWND)ui->widget->winId();
// 	QRect rect = ui->widget->rect();

// 	m_hModuleNote = LoadLibrary(_T("note.dll"));
// 	DWORD dw = GetLastError();
// 
// 	if (m_hModuleNote){
// 		_MCNoteCreate p_MCNoteCreate = (_MCNoteCreate)GetProcAddress(m_hModuleNote, "MCNoteCreate");
// 
// 		if (p_MCNoteCreate){
// 			p_MCNoteCreate(m_hWnd);
// 		}
//     }

/*	LoadChat(m_hWnd, rect.left(), rect.top(), rect.right(), rect.bottom());*/
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

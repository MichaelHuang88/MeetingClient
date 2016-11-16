#define MUF_NO_WTYPES
#include "atlstr.h"
#include "wtypes.h"
#include "mufbase.h"
#include "mcnc.h"
#include "mcconfc.h"
#include "imcccore.h"
#include "mcreg.h"
#include "mcurl.h"
#include "imcccom.h"

class CMgr : public IComMgr
{
	virtual	 BOOL	GetUIMgr(IConsoleUIMgr **ppIConsoleUIMgr){return true;};
	virtual	 BOOL	GetRoomMgr(IRoomMgr **ppIRoomMgr){return true;};
	virtual	 BOOL	GetUserMgr(IUserMgr **ppIUserMgr){return true;};
	//	virtual  BOOL   GetConf(void ** ppConf){return true;};
	virtual	 HWND	GetFrameWnd(HCOMINSTANCE hComInstance){return 0;}; // The main window
	virtual	 void	ExitMe(HCOMINSTANCE hComInstance){return ;};		// Please unload me
	virtual	 void	YieldTime(HCOMINSTANCE hComInstance){return ;};		// I'm very busy.
	virtual	 BOOL	SwitchMeOn(HCOMINSTANCE hComInstance){return true;};

	virtual  void   PlusInVideoCamara(BOOL bPlusIn){return ;};
	virtual  void   ShowClassInfoPage(int nCmdShow){return ;};

	virtual	 void   SetAudioDataCBFunc(CBAuidoData pCBAuidoData){return ;};
	virtual	 void   SendFileTransfer(IMCC_Cache_ID cache_id){return ;};
	virtual	 void   SendFileTransferRequest(IMCC_Node_ID nodeId, IMCC_Cache_ID cache_id){return ;};
	virtual  DWORD  GetRecordState(){return 0;};

	virtual	 BOOL	SwitchOffCom(CENWAVE_IID ComID, HCOMINSTANCE hComInstance){return true;};
	virtual  BOOL	SwitchOnCom(CENWAVE_IID ComID, HCOMINSTANCE hComInstance, BOOL bUpdate = TRUE){return true;};
	virtual  DWORD   GetCustomerType(){return true;};
	virtual  DWORD   GetCurrentLayoutModel(){return true;};

	//virtual  void EnterAssistant(IMCC_Node_ID nodeId){return true;};
	virtual  void   SetUserAudioVolumn(IMCC_Node_ID nodeID, DWORD dwCur, DWORD dwMin = 0, DWORD dwMax = 100){return ;};
	virtual  void	EnableVideoFullScreen(BOOL  bFlag){return ;};
	virtual  BOOL   IsVideoFullScreen(){return true;};

	virtual  BOOL  UpdatePrivilegeToOne(IMCC_Node_ID NodeId, DWORD dwMask, DWORD dwPrivilege){return true;};
	virtual  BOOL  UpdatePrivilegeToAll(DWORD dwMask, DWORD dwPrivilege){return true;};

	// Private CmdID defined by the component should be >256, otherwise they are common command 

	// Return value:
	// 0 = OK, otherwise, the following error code indicate
	// 1 = the component of ComID does not exist
	// 2 = the component rejects the command
	// ...
	// Above 256, it is error code defined by the component
	virtual LRESULT  SendCmdToCom(CENWAVE_IID ComID, DWORD CmdID, WPARAM wParam, LPARAM lParam,
		LPBYTE lpInputBuffer1, DWORD dwInputBufferSize1,
		LPBYTE lpInputBuffer2, DWORD dwInputBufferSize2,
		LPBYTE lpOutputBuffer, LPDWORD lpdwOutputBufferSize, LRESULT *pResult){return true;};

	virtual   BOOL   IsUseSlaveScreen(){return true;};
	virtual   BOOL   IsPureTextConf(){return true;};
	virtual   char   GetWebConfig(DWORD dwPos){return true;};
};

void LoadChat(HWND m_hWnd, int left, int top, int right, int bottom)
{
	HMODULE hComModule = LoadLibraryEx(_T("chat.dll"), NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	if (!hComModule)
	{
		GetLastError();
		return;
	}

	CreateComponentInstance_API pfnCreateInstance = (CreateComponentInstance_API)GetProcAddress(hComModule, "CreateComponentInstance");
	DWORD dw = GetLastError();
	if (!pfnCreateInstance)
	{
		FreeLibrary(hComModule);
		return;
	}

	COM_CREATE_INFO ComCreateInfo;
	memset(&ComCreateInfo, 0, sizeof(ComCreateInfo));
	ComCreateInfo.dwSize = sizeof(ComCreateInfo);
	ComCreateInfo.VisualLayout.hParentWnd = m_hWnd;
	ComCreateInfo.VisualLayout.rcPos = RECT{ left, top, right, bottom };
	ComCreateInfo.pIComMgr = new CMgr();;

	HCOMINSTANCE m_hComInstance = pfnCreateInstance(CENWAVE_IID_CHAT, &ComCreateInfo);
	if (!m_hComInstance)
	{
		FreeLibrary(hComModule);
		return;
	}
}
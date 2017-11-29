// IntgCtrl.cpp : 实现文件
//

#include "stdafx.h"
#include "bib-technology.h"
#include "afxdialogex.h"
#include "GLOBAL.h"
#include "TempControl.h"
#include "SpeedControl.h"
#include "ChooseHeater.h"
#include "IntgCtrl.h"
#include "DataCtrl.h"
#include "ChoosingModeDlg.h"
#include "bib-technologyDlg.h"

extern CDataCtrl* pDtaCtrlDlg;
extern CbibtechnologyDlg* pMainDlg;
CIntgCtrl* pIntgCtrlDlg;
// CIntgCtrl 对话框

IMPLEMENT_DYNAMIC(CIntgCtrl, CDialogEx)

BOOL CIntgCtrl::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	pIntgCtrlDlg = this;
	//关联图片ID    
	HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE1);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE2);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE3);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	CStatic *pStatic4 = (CStatic *)GetDlgItem(IDC_PICTURE4);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	CStatic *pStatic5 = (CStatic *)GetDlgItem(IDC_PICTURE5);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	CStatic *pStatic6 = (CStatic *)GetDlgItem(IDC_PICTURE6);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	CStatic *pStatic7 = (CStatic *)GetDlgItem(IDC_PICTURE7);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	CStatic *pStatic8 = (CStatic *)GetDlgItem(IDC_PICTURE8);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	CStatic *pStatic9 = (CStatic *)GetDlgItem(IDC_PICTURE9);//控件ID     
															//设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	pStatic1->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic2->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic3->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic4->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic5->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic6->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic7->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic8->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic9->ModifyStyle(0xF, SS_BITMAP | SS_CENTERIMAGE);
	pStatic1->SetBitmap(hBitmap1);
	pStatic2->SetBitmap(hBitmap1);
	pStatic3->SetBitmap(hBitmap1);
	pStatic4->SetBitmap(hBitmap1);
	pStatic5->SetBitmap(hBitmap1);
	pStatic6->SetBitmap(hBitmap1);
	pStatic7->SetBitmap(hBitmap1);
	pStatic8->SetBitmap(hBitmap1);
	pStatic9->SetBitmap(hBitmap1);

	//设置字体
	m_font1.CreatePointFont(300, _T("黑体"));
	m_static0.SetFont(&m_font1);
	m_font2.CreatePointFont(150, _T(TEXT_FONT));
	m_static7.SetFont(&m_font2);
	m_static8.SetFont(&m_font2);
	m_static9.SetFont(&m_font2);
	m_static10.SetFont(&m_font2);
	m_button_fjtz.SetFont(&m_font2);
	m_button_fshd.SetFont(&m_font2);
	m_button_fjyx.SetFont(&m_font2);
	m_button_jrhd.SetFont(&m_font2);
	m_button_jrtz.SetFont(&m_font2);
	m_button_jryx.SetFont(&m_font2);
	m_button_jwyx.SetFont(&m_font2);
	m_button_jwtz.SetFont(&m_font2);
	m_button_jwhd.SetFont(&m_font2);
	m_font3.CreatePointFont(180, _T(TEXT_FONT));
	CEdit *m_Edit = (CEdit *)GetDlgItem(IDC_EDIT_TIME);
	m_static1.SetFont(&m_font3);
	m_static2.SetFont(&m_font3);
	m_static3.SetFont(&m_font3);
	m_static4.SetFont(&m_font3);
	m_static5.SetFont(&m_font3);
	m_static6.SetFont(&m_font3);
	m_static11.SetFont(&m_font3);
	m_static12.SetFont(&m_font3);
	m_button_cnfs.SetFont(&m_font3);
	m_button_cnwd.SetFont(&m_font3);
	m_button_fjpl.SetFont(&m_font3);
	m_button_mode.SetFont(&m_font3);
	m_static_11.SetFont(&m_font3);
	m_static_12.SetFont(&m_font3);
	m_static_13.SetFont(&m_font3);
	m_static_14.SetFont(&m_font3);
	m_Edit->SetFont(&m_font3, FALSE);
	m_Edit = (CEdit *)GetDlgItem(IDC_EDIT_PRES2);
	m_Edit->SetFont(&m_font3, FALSE);
	m_Edit = (CEdit *)GetDlgItem(IDC_EDIT_SPEED);
	m_Edit->SetFont(&m_font3, FALSE);
	m_Edit = (CEdit *)GetDlgItem(IDC_EDIT_TEMP);
	m_Edit->SetFont(&m_font3, FALSE);

	m_strStatic11 = _T("30°C");
	m_strStatic12 = _T("3.00m/s");
	m_strStatic13 = _T("50.00Hz");
	m_strStatic14 = _T("手动模式-风速");
	m_button_fjpl.EnableWindow(FALSE);
	m_button_fshd.EnableWindow(FALSE);
	m_static_13.EnableWindow(FALSE);
	UpdateData(FALSE);

	//设置定时器
	SetTimer(1, 150, 0);
	return 1;
}

CIntgCtrl::CIntgCtrl(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INTEGRATE_DISPLAYCONTROL, pParent)
	, m_strRecvData(_T(""))
	, m_strTemp(_T(""))
	, m_strSpeed(_T(""))
	, m_strTime(_T(""))
	, m_strPressure(_T(""))
	, m_strStatic11(_T(""))
	, m_strStatic12(_T(""))
	, m_strStatic13(_T(""))
	, m_strStatic14(_T(""))
{

}

CIntgCtrl::~CIntgCtrl()
{
}

void CIntgCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC1, m_static1);
	DDX_Control(pDX, IDC_STATIC2, m_static2);
	DDX_Control(pDX, IDC_STATIC3, m_static3);
	DDX_Control(pDX, IDC_STATIC4, m_static4);
	DDX_Control(pDX, IDC_STATIC5, m_static5);
	DDX_Control(pDX, IDC_STATIC6, m_static6);
	DDX_Control(pDX, IDC_STATIC0, m_static0);
	DDX_Control(pDX, IDC_BUTTON_CNWD, m_button_cnwd);
	DDX_Control(pDX, IDC_BUTTON_CNFS, m_button_cnfs);
	DDX_Control(pDX, IDC_BUTTON_FJYX, m_button_fjyx);
	DDX_Control(pDX, IDC_BUTTON_FSHD, m_button_fshd);
	DDX_Control(pDX, IDC_BUTTON_FJTZ, m_button_fjtz);
	DDX_Control(pDX, IDC_BUTTON_JRYX, m_button_jryx);
	DDX_Control(pDX, IDC_BUTTON_JRHD, m_button_jrhd);
	DDX_Control(pDX, IDC_BUTTON_JRTZ, m_button_jrtz);
	DDX_Control(pDX, IDC_BUTTON_JWYX, m_button_jwyx);
	DDX_Control(pDX, IDC_BUTTON_JWHD, m_button_jwhd);
	DDX_Control(pDX, IDC_BUTTON_JWTZ, m_button_jwtz);
	DDX_Control(pDX, IDC_STATIC7, m_static7);
	DDX_Control(pDX, IDC_STATIC8, m_static8);
	DDX_Control(pDX, IDC_STATIC9, m_static9);
	DDX_Control(pDX, IDC_STATIC10, m_static10);
	DDX_Text(pDX, IDC_EDIT_RECV, m_strRecvData);
	DDX_Text(pDX, IDC_EDIT_TEMP, m_strTemp);
	DDX_Text(pDX, IDC_EDIT_SPEED, m_strSpeed);
	DDX_Text(pDX, IDC_EDIT_TIME, m_strTime);
	DDX_Control(pDX, IDC_STATIC11, m_static11);
	DDX_Control(pDX, IDC_STATIC12, m_static12);
	DDX_Text(pDX, IDC_EDIT_PRES2, m_strPressure);
	DDX_Control(pDX, IDC_STATIC_11, m_static_11);
	DDX_Control(pDX, IDC_STATIC_12, m_static_12);
	DDX_Text(pDX, IDC_STATIC_11, m_strStatic11);
	DDX_Text(pDX, IDC_STATIC_12, m_strStatic12);
	DDX_Control(pDX, IDC_BUTTON_FJPL, m_button_fjpl);
	DDX_Control(pDX, IDC_BUTTON_MODE, m_button_mode);
	DDX_Control(pDX, IDC_STATIC_13, m_static_13);
	DDX_Text(pDX, IDC_STATIC_13, m_strStatic13);
	DDX_Control(pDX, IDC_STATIC_14, m_static_14);
	DDX_Text(pDX, IDC_STATIC_14, m_strStatic14);
}


BEGIN_MESSAGE_MAP(CIntgCtrl, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_FJYX, &CIntgCtrl::OnBnClickedButtonFjyx)
	ON_BN_CLICKED(IDC_BUTTON_FSHD, &CIntgCtrl::OnBnClickedButtonFshd)
	ON_BN_CLICKED(IDC_BUTTON_FJTZ, &CIntgCtrl::OnBnClickedButtonFjtz)
	ON_BN_CLICKED(IDC_BUTTON_JRYX, &CIntgCtrl::OnBnClickedButtonJryx)
	ON_BN_CLICKED(IDC_BUTTON_JRHD, &CIntgCtrl::OnBnClickedButtonJrhd)
	ON_BN_CLICKED(IDC_BUTTON_JRTZ, &CIntgCtrl::OnBnClickedButtonJrtz)
	ON_BN_CLICKED(IDC_BUTTON_JWYX, &CIntgCtrl::OnBnClickedButtonJwyx)
	ON_BN_CLICKED(IDC_BUTTON_JWHD, &CIntgCtrl::OnBnClickedButtonJwhd)
	ON_BN_CLICKED(IDC_BUTTON_JWTZ, &CIntgCtrl::OnBnClickedButtonJwtz)
	ON_BN_CLICKED(IDC_BUTTON_CNWD, &CIntgCtrl::OnBnClickedButtonCnwd)
	ON_BN_CLICKED(IDC_BUTTON_CNFS, &CIntgCtrl::OnBnClickedButtonCnfs)
	ON_WM_TIMER()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON_MODE, &CIntgCtrl::OnBnClickedButtonMode)
	ON_BN_CLICKED(IDC_BUTTON_FJPL, &CIntgCtrl::OnBnClickedButtonFjpl)
END_MESSAGE_MAP()


// CIntgCtrl 消息处理程序

void CIntgCtrl::OnBnClickedButtonFjyx()
{
	// TODO: 在此添加控件通知处理程序代码
	//关联图片ID  
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE1);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE2);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE3);//控件ID     

	if (MessageBox(_T("你确定要开启风机?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		pStatic1->SetBitmap(hBitmap2);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[0] = 1;
		m_button_mode.EnableWindow(FALSE);
		pDtaCtrlDlg->ForceMPLC(ADDRESSM_START, TRUE);
	}
}


void CIntgCtrl::OnBnClickedButtonFshd()
{
	// TODO: 在此添加控件通知处理程序代码
	//关联图片ID  
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE1);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE2);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE3);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中

	if (MessageBox(_T("你确定要开启风速恒定?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap2);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[0] = 2;
		m_button_mode.EnableWindow(FALSE);
		pDtaCtrlDlg->ForceMPLC(ADDRESSM_START, TRUE); 
	}
}


void CIntgCtrl::OnBnClickedButtonFjtz()
{
	// TODO: 在此添加控件通知处理程序代码
	//关联图片ID  
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE1);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE2);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE3);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中

	if (MessageBox(_T("你确定要关闭风机?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap2);
		m_button_mode.EnableWindow(TRUE);
		bButtonFlag[0] = 3;
		pDtaCtrlDlg->ForceMPLC(ADDRESSM_START, FALSE);
	}
}


void CIntgCtrl::OnBnClickedButtonJryx()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE4);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE5);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE6);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	if (MessageBox(_T("你确定要打开加热模式?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = 0;
		pStatic1->SetBitmap(hBitmap2);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[1] = 1;
		pDtaCtrlDlg->SendMessageToController(OPEN_HEATER);
	}
}


void CIntgCtrl::OnBnClickedButtonJrhd()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE4);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE5);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE6);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	if (MessageBox(_T("你确定要恒温加热?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = DTRZMODE_HEATING;
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap2);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[1] = 2;
		pDtaCtrlDlg->SendMessageToController(CONSTANT_HEATING, g_nTempCon);
	}
}


void CIntgCtrl::OnBnClickedButtonJrtz()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE4);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE5);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE6);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中

	if (MessageBox(_T("你确定要停止加热?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = 0;
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap2);
		bButtonFlag[1] = 3;
		pDtaCtrlDlg->SendMessageToController(CLOSE_HEATER);
	}
}


void CIntgCtrl::OnBnClickedButtonJwyx()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE7);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE8);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE9);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中

	if (MessageBox(_T("你确定要降温运行?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = 0;
		pStatic1->SetBitmap(hBitmap2);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[2] = 1;
		pDtaCtrlDlg->SendMessageToController(OPEN_REFRIGERATION);
	}
}


void CIntgCtrl::OnBnClickedButtonJwhd()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE7);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE8);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE9);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 

	if (MessageBox(_T("你确定要恒定降温运行?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = DTRZMODE_REFRIGING;
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap2);
		pStatic3->SetBitmap(hBitmap1);
		bButtonFlag[2] = 2;
		pDtaCtrlDlg->SendMessageToController(CONSTANT_REFRIGING, g_nTempCon);
	}
}


void CIntgCtrl::OnBnClickedButtonJwtz()
{
	// TODO: 在此添加控件通知处理程序代码
	static HBITMAP hBitmap1 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP1),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	static HBITMAP hBitmap2 = (HBITMAP)LoadImage(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDB_BITMAP2),
		IMAGE_BITMAP, 0, 0,
		LR_LOADMAP3DCOLORS);
	//获得指向静态控件的指针    
	static CStatic *pStatic1 = (CStatic *)GetDlgItem(IDC_PICTURE7);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中 
	static CStatic *pStatic2 = (CStatic *)GetDlgItem(IDC_PICTURE8);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中
	static CStatic *pStatic3 = (CStatic *)GetDlgItem(IDC_PICTURE9);//控件ID     
																   //设置静态控件的样式，使其可以使用位图，并试位标显示使居中

	if (MessageBox(_T("你确定要停止降温运行?"), _T("提示:"), MB_YESNO) == IDYES)
	{
		g_nFlagDTRZMode = 0;
		pStatic1->SetBitmap(hBitmap1);
		pStatic2->SetBitmap(hBitmap1);
		pStatic3->SetBitmap(hBitmap2);
		bButtonFlag[2] = 3;
		pDtaCtrlDlg->SendMessageToController(CLOSE_REFRIGERATION);
	}
}

void CIntgCtrl::OnBnClickedButtonCnwd()
{
	// TODO: 在此添加控件通知处理程序代码
	g_nFlagTemp = CNWD;
	CTempControl TempControlDLG;
	TempControlDLG.DoModal();
}


void CIntgCtrl::OnBnClickedButtonCnfs()
{
	// TODO: 在此添加控件通知处理程序代码
	CSpeedControl SpeedControlDlg;
	SpeedControlDlg.DoModal();
}

void CIntgCtrl::OnBnClickedButtonFjpl()
{
	// TODO: 在此添加控件通知处理程序代码
	CSpeedControl SpeedControlDlg;
	SpeedControlDlg.DoModal();

}

 void CIntgCtrl::OnTimer(UINT nIDEvent)
{
	// TODO: Add your message handler code here and/or call default  
	switch (nIDEvent) 
	{
	case 1:
		{
			static CString strRecvDataTemp;
			m_strSpeed = g_strSpeed;
			m_strTemp = g_strTemp;
			m_strTime = g_strTime;
			m_strPressure = g_strPressure;
			UpdateData(FALSE);
			if (strRecvDataTemp != g_strRecvData)
			{
				m_strRecvData = g_strRecvData;
				strRecvDataTemp = m_strRecvData;
				UpdateData(FALSE);
				CEdit* pedit = (CEdit*)GetDlgItem(IDC_EDIT_RECV);
				pedit->LineScroll(pedit->GetLineCount());
			}

			if (g_nFlagMode == MODE_MANU_SPEED)
			{
				SetDlgItemText(IDC_BUTTON_CNFS, _T("风速设置(手动)"));
			}
			else if(g_nFlagMode == MODE_AUTO)
			{
				SetDlgItemText(IDC_BUTTON_CNFS, _T("风速设置(自动)"));
			}
			break;
		}
	}
}



 void CIntgCtrl::OnSize(UINT nType, int cx, int cy)
 {
	 CDialogEx::OnSize(nType, cx, cy);

	 // TODO: 在此处添加消息处理程序代码
	 float fsp[2];
	 POINT Newp; //获取现在对话框的大小  
	 CRect recta;
	 pMainDlg->m_tab.GetClientRect(&recta); //取客户区大小    
	 Newp.x = recta.right - recta.left;
	 Newp.y = recta.bottom - recta.top;
	 fsp[0] = (float)Newp.x / g_OldSizeTab.x;
	 fsp[1] = (float)Newp.y / g_OldSizeTab.y;
	 CRect Rect;
	 int woc;
	 CPoint OldTLPoint, TLPoint; //左上角  
	 CPoint OldBRPoint, BRPoint; //右下角  
	 HWND hwndChild = ::GetWindow(m_hWnd, GW_CHILD); //列出所有控件    
	 while (hwndChild)
	 {
		 woc = ::GetDlgCtrlID(hwndChild);//取得ID  
		 GetDlgItem(woc)->GetWindowRect(Rect);
		 ScreenToClient(Rect);
		 OldTLPoint = Rect.TopLeft();
		 TLPoint.x = long(OldTLPoint.x*fsp[0]);
		 TLPoint.y = long(OldTLPoint.y*fsp[1]);
		 OldBRPoint = Rect.BottomRight();
		 BRPoint.x = long(OldBRPoint.x *fsp[0]);
		 BRPoint.y = long(OldBRPoint.y *fsp[1]);
		 Rect.SetRect(TLPoint, BRPoint);
		 GetDlgItem(woc)->MoveWindow(Rect, TRUE);
		 hwndChild = ::GetWindow(hwndChild, GW_HWNDNEXT);
	 }
	 g_OldSizeTab = Newp;
 }


 void CIntgCtrl::OnBnClickedButtonMode()
 {
	 // TODO: 在此添加控件通知处理程序代码
	 CChoosingModeDlg Dlg;
	 Dlg.DoModal();
 }



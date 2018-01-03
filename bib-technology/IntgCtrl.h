#pragma once
#include "afxwin.h"
// CIntgCtrl 对话框

class CIntgCtrl : public CDialogEx
{
	//DECLARE_EASYSIZE
	DECLARE_DYNAMIC(CIntgCtrl)

public:
	CIntgCtrl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CIntgCtrl();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INTEGRATE_DISPLAYCONTROL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonFjyx();
	afx_msg void OnBnClickedButtonFshd();
	afx_msg void OnBnClickedButtonFjtz();
	afx_msg void OnBnClickedButtonJryx();
	afx_msg void OnBnClickedButtonJrhd();
	afx_msg void OnBnClickedButtonJrtz();
	afx_msg void OnBnClickedButtonJwyx();
	afx_msg void OnBnClickedButtonJwhd();
	afx_msg void OnBnClickedButtonJwtz();
	afx_msg void OnBnClickedButtonCnwd();
	afx_msg void OnBnClickedButtonCnfs();
	void OnTimer(UINT nIDEvent);
	CFont m_font1;
	CFont m_font2;
	CFont m_font3;
	CStatic m_static1;
	CStatic m_static2;
	CStatic m_static3;
	CStatic m_static4;
	CStatic m_static5;
	CStatic m_static6;
	CStatic m_static0;
	CButton m_button_cnwd;
	CButton m_button_cnfs;
	CButton m_button_fjyx;
	CButton m_button_fshd;
	CButton m_button_fjtz;
	CButton m_button_jryx;
	CButton m_button_jrhd;
	CButton m_button_jrtz;
	CButton m_button_jwyx;
	CButton m_button_jwhd;
	CButton m_button_jwtz;
	CStatic m_static7;
	CStatic m_static8;
	CStatic m_static9;
	CStatic m_static10;
	CString m_strRecvData;
	CString m_strTemp;
	CString m_strSpeed;
	CString m_strTime;
	CString m_strPressure;
	CStatic m_static11;
	CStatic m_static12;
	
	afx_msg void OnSize(UINT nType, int cx, int cy);
	CStatic m_static_11;
	CStatic m_static_12;
	CString m_strStatic11;
	CString m_strStatic12;
	CButton m_button_fjpl;
	CButton m_button_mode;
	CStatic m_static_13;
	CString m_strStatic13;
	afx_msg void OnBnClickedButtonMode();
	afx_msg void OnBnClickedButtonFjpl();
	CStatic m_static_14;
	CString m_strStatic14;
	afx_msg void OnBnClickedButtonTimeStart();
	afx_msg void OnBnClickedButtonTimePause();
	afx_msg void OnBnClickedButtonTimeClear();
};

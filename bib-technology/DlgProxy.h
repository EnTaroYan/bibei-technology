
// DlgProxy.h: 头文件
//

#pragma once

class CbibtechnologyDlg;


// CbibtechnologyDlgAutoProxy 命令目标

class CbibtechnologyDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CbibtechnologyDlgAutoProxy)

	CbibtechnologyDlgAutoProxy();           // 动态创建所使用的受保护的构造函数

// 特性
public:
	CbibtechnologyDlg* m_pDialog;

// 操作
public:

// 重写
	public:
	virtual void OnFinalRelease();

// 实现
protected:
	virtual ~CbibtechnologyDlgAutoProxy();

	// 生成的消息映射函数

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CbibtechnologyDlgAutoProxy)

	// 生成的 OLE 调度映射函数

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};


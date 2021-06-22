
// Lianliankan2Dlg.h: 头文件
//

#pragma once

#ifndef LIANLIANKAN2DLG_H
#define LIANLIANKAN2DLG_H

// CLianliankan2Dlg 对话框
class CLianliankan2Dlg : public CDialogEx
{
	// 构造
public:
	CLianliankan2Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LIANLIANKAN2_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CDC dcMem;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	void InitBackGround();
public:
	POINT Old;
	afx_msg void OnClickedBtnBasic();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	void resize();
};

#endif // !LIANLIANKAN2DLG_H

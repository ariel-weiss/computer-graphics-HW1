
// MFC_HW0_NEWDlg.h : header file
//

#pragma once


// CMFCHW0NEWDlg dialog
class CMFCHW0NEWDlg : public CDialogEx
{
// Construction

	
public:
	bool _drawLine;
	CMFCHW0NEWDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_HW0_NEW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnBnClickedbtndraw();
	afx_msg void OnChangesettings();
};

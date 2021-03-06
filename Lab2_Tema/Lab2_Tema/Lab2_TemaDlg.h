
// Lab2_TemaDlg.h : header file
//

#pragma once


// CLab2TemaDlg dialog
class CLab2TemaDlg : public CDialog
{
// Construction
public:
	CLab2TemaDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LAB2_TEMA_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int numarator;
	int numitor;
	int cmMdc;
	int cmmmc;
	int numarator_simplificat;
	int numitor_simplificat;

	afx_msg void OnBnClickedCalculeaza();
	
	int cmmdcResult(int x, int y);
	int cmmmcResult(int x, int y);
	int current_element;
	
	afx_msg void OnBnClickedAdauga();

	afx_msg void OnBnClickedSterge();

	CArray<int, int> number_list;
	CString current_list;
};

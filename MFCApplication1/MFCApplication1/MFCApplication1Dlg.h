
// MFCApplication1Dlg.h : ヘッダー ファイル
//

#pragma once


// CMFCApplication1Dlg ダイアログ
class CMFCApplication1Dlg : public CDialogEx
{
// コンストラクション
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnLbnSelchangeList2();
	afx_msg void OnIpnFieldchangedIpaddress1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCbnSelchangeCombo3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnTvnSelchangedMfcshelltree1(NMHDR* pNMHDR, LRESULT* pResult);
};


// TeleprompterDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

// CTeleprompterDlg �Ի���
class CTeleprompterDlg : public CDialogEx
{
// ����
public:
	CTeleprompterDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TELEPROMPTER_DIALOG };
#endif
	bool isNeedEXIT()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		return m_needEXIT;
	}
	void resetEXITflag()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		m_needEXIT = false;
	}
	void setEXITflag()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		m_needEXIT = true;
	}
	int getInputMemGB()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		return GetDlgItemInt(IDC_MEMUSEGB);
	}
	bool hasCheckedEnableRandom()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		return m_ckRandom.GetCheck() == BST_CHECKED;
	}
	bool hasCheckedEnableRead()
	{
		//boost::mutex::scoped_lock lock(m_Mutex);
		return m_ckRead.GetCheck() == BST_CHECKED;
	}
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
	void MyThreadProc();
	void resetBtn();
// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButton1();
	boost::thread *m_pThread;
	bool m_needEXIT;
	boost::mutex     m_Mutex;
	CButton m_startbtn;
	CEdit m_editmem;
	CButton m_ckRandom;
	CButton m_ckRead;
};

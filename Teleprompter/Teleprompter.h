
// Teleprompter.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTeleprompterApp: 
// �йش����ʵ�֣������ Teleprompter.cpp
//

class CTeleprompterApp : public CWinApp
{
public:
	CTeleprompterApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTeleprompterApp theApp;
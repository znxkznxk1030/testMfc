
// gitTest.h : gitTest ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CgitTestApp:
// �� Ŭ������ ������ ���ؼ��� gitTest.cpp�� �����Ͻʽÿ�.
//

class CgitTestApp : public CWinApp
{
public:
	CgitTestApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CgitTestApp theApp;


// Lab2_Tema.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLab2TemaApp:
// See Lab2_Tema.cpp for the implementation of this class
//

class CLab2TemaApp : public CWinApp
{
public:
	CLab2TemaApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLab2TemaApp theApp;

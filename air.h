// air.h : main header file for the AIR application
//

#if !defined(AFX_AIR_H__04A7A74E_D6B1_4871_964D_71B33E3B0062__INCLUDED_)
#define AFX_AIR_H__04A7A74E_D6B1_4871_964D_71B33E3B0062__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAirApp:
// See air.cpp for the implementation of this class
//

class CAirApp : public CWinApp
{
public:
	CAirApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAirApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAirApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AIR_H__04A7A74E_D6B1_4871_964D_71B33E3B0062__INCLUDED_)

#if !defined(AFX_RECEPTOR_H__3605BEE4_9071_4203_879E_9B4883883240__INCLUDED_)
#define AFX_RECEPTOR_H__3605BEE4_9071_4203_879E_9B4883883240__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// receptor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Creceptor dialog

class Creceptor : public CDialog
{
// Construction
public:
	Creceptor(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Creceptor)
	enum { IDD = IDD_RECEPTOR_DIALOG };
	float	m_x1;
	float	m_x2;
	float	m_x3;
	float	m_x4;
	float	m_x5;
	float	m_x6;
	float	m_x7;
	float	m_x8;
	float	m_x9;
	float	m_y1;
	float	m_y2;
	float	m_y3;
	float	m_y4;
	float	m_y5;
	float	m_y6;
	float	m_y7;
	float	m_y8;
	float	m_y9;
	float	m_z1;
	float	m_z2;
	float	m_z3;
	float	m_z4;
	float	m_z5;
	float	m_z6;
	float	m_z7;
	float	m_z8;
	float	m_z9;
	float	m_x10;
	float	m_y10;
	float	m_z10;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Creceptor)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Creceptor)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECEPTOR_H__3605BEE4_9071_4203_879E_9B4883883240__INCLUDED_)

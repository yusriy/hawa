#if !defined(AFX_GRID_H__F404CD82_79A1_4C1B_A21B_EBFCF82AD0E2__INCLUDED_)
#define AFX_GRID_H__F404CD82_79A1_4C1B_A21B_EBFCF82AD0E2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// grid.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cgrid dialog

class Cgrid : public CDialog
{
// Construction
public:
	Cgrid(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cgrid)
	enum { IDD = IDD_GRID_DIALOG };
	float	m_relevation;
	float	m_rlength;
	int		m_ramount;
	int		m_rring;
	float	m_between;
	float	m_maxx;
	float	m_maxy;
	float	m_minx;
	float	m_miny;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cgrid)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cgrid)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GRID_H__F404CD82_79A1_4C1B_A21B_EBFCF82AD0E2__INCLUDED_)

#if !defined(AFX_STACK6_H__AC7C07F7_CF16_490A_9AD1_8647437032E6__INCLUDED_)
#define AFX_STACK6_H__AC7C07F7_CF16_490A_9AD1_8647437032E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack6.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack6 dialog

class Cstack6 : public CDialog
{
// Construction
public:
	Cstack6(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack6)
	enum { IDD = IDD_STACK6_DIALOG };
	BOOL	m_buildingdownwash6;
	BOOL	m_buildinglocation6;
	BOOL	m_buoyancy6;
	float	m_ds6;
	float	m_buildingheight6;
	float	m_buildingwidth6;
	float	m_q6;
	float	m_stack6;
	float	m_stackx6;
	float	m_stacky6;
	float	m_stackz6;
	float	m_ts6;
	float	m_vs6;
	int		m_plumerise6;
	float	m_decay6;
	float	m_sccoef6;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack6)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack6)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition6;
	float m_pp6;
	float m_dp6;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK6_H__AC7C07F7_CF16_490A_9AD1_8647437032E6__INCLUDED_)

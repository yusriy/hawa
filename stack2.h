#if !defined(AFX_STACK2_H__A39DEBA9_70DF_4CC3_8F36_446C04990763__INCLUDED_)
#define AFX_STACK2_H__A39DEBA9_70DF_4CC3_8F36_446C04990763__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack2 dialog

class Cstack2 : public CDialog
{
// Construction
public:
	Cstack2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack2)
	enum { IDD = IDD_STACK2_DIALOG };
	BOOL	m_buildingdownwash2;
	BOOL	m_buildinglocation2;
	BOOL	m_buoyancy2;
	float	m_ds2;
	float	m_buildingheight2;
	float	m_buildingwidth2;
	float	m_q2;
	float	m_stack2;
	float	m_stackx2;
	float	m_stacky2;
	float	m_stackz2;
	float	m_ts2;
	float	m_vs2;
	int		m_plumerise2;
	float	m_decay2;
	float	m_sccoef2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack2)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition2;
	float m_pp2;
	float m_dp2;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK2_H__A39DEBA9_70DF_4CC3_8F36_446C04990763__INCLUDED_)

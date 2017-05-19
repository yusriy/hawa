#if !defined(AFX_STACK9_H__DB9B8185_C783_4B0F_91CF_A6AD06426B76__INCLUDED_)
#define AFX_STACK9_H__DB9B8185_C783_4B0F_91CF_A6AD06426B76__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack9.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack9 dialog

class Cstack9 : public CDialog
{
// Construction
public:
	Cstack9(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack9)
	enum { IDD = IDD_STACK9_DIALOG };
	BOOL	m_buildingdownwash9;
	BOOL	m_buildinglocation9;
	BOOL	m_buoyancy9;
	float	m_ds9;
	float	m_buildingheight9;
	float	m_buildingwidth9;
	float	m_q9;
	float	m_stack9;
	float	m_stackx9;
	float	m_stacky9;
	float	m_stackz9;
	float	m_ts9;
	float	m_vs9;
	int		m_plumerise9;
	float	m_decay9;
	float	m_sccoef9;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack9)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack9)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition9;
	float m_pp9;
	float m_dp9;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK9_H__DB9B8185_C783_4B0F_91CF_A6AD06426B76__INCLUDED_)

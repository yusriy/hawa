#if !defined(AFX_STACK7_H__5EF2E8DC_0983_4767_82BA_1D27FFFF2930__INCLUDED_)
#define AFX_STACK7_H__5EF2E8DC_0983_4767_82BA_1D27FFFF2930__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack7.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack7 dialog

class Cstack7 : public CDialog
{
// Construction
public:
	Cstack7(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack7)
	enum { IDD = IDD_STACK7_DIALOG };
	BOOL	m_buildingdownwash7;
	BOOL	m_buildinglocation7;
	BOOL	m_buoyancy7;
	float	m_ds7;
	float	m_buildingheight7;
	float	m_buildingwidth7;
	float	m_q7;
	float	m_stack7;
	float	m_stackx7;
	float	m_stacky7;
	float	m_stackz7;
	float	m_ts7;
	float	m_vs7;
	int		m_plumerise7;
	float	m_decay7;
	float	m_sccoef7;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack7)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack7)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition7;
	float m_pp7;
	float m_dp7;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK7_H__5EF2E8DC_0983_4767_82BA_1D27FFFF2930__INCLUDED_)

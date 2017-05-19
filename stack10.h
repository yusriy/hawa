#if !defined(AFX_STACK10_H__C8C932BF_829F_45E3_B316_42B5DD22643D__INCLUDED_)
#define AFX_STACK10_H__C8C932BF_829F_45E3_B316_42B5DD22643D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack10.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack10 dialog

class Cstack10 : public CDialog
{
// Construction
public:
	Cstack10(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack10)
	enum { IDD = IDD_STACK10_DIALOG };
	BOOL	m_buildingdownwash10;
	BOOL	m_buildinglocation10;
	BOOL	m_buoyancy10;
	float	m_ds10;
	float	m_buildingheight10;
	float	m_buildingwidth10;
	float	m_q10;
	float	m_stack10;
	float	m_stackx10;
	float	m_stacky10;
	float	m_stackz10;
	float	m_ts10;
	float	m_vs10;
	int		m_plumerise10;
	float	m_decay10;
	float	m_sccoef10;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack10)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack10)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition10;
	float m_pp10;
	float m_dp10;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK10_H__C8C932BF_829F_45E3_B316_42B5DD22643D__INCLUDED_)

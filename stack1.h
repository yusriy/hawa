#if !defined(AFX_STACK1_H__9FC21F15_0F37_468E_A4AF_B4031C1737AE__INCLUDED_)
#define AFX_STACK1_H__9FC21F15_0F37_468E_A4AF_B4031C1737AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack1 dialog

class Cstack1 : public CDialog
{
// Construction
public:
	Cstack1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack1)
	enum { IDD = IDD_STACK1_DIALOG };
	BOOL	m_buildingdownwash1;
	BOOL	m_buildinglocation1;
	BOOL	m_buoyancy1;
	float	m_ds1;
	float	m_buildingheight1;
	float	m_buildingwidth1;
	float	m_q1;
	float	m_stacky1;
	float	m_stackx1;
	float	m_stack1;
	float	m_stackz1;
	float	m_ts1;
	float	m_vs1;
	int		m_plumerise1;
	float	m_decay1;
	float	m_sccoef1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack1)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	float m_pp1;
	float m_dp1;
	BOOL m_deposition1;
	//float m_dp1a;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK1_H__9FC21F15_0F37_468E_A4AF_B4031C1737AE__INCLUDED_)

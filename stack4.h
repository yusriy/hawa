#if !defined(AFX_STACK4_H__2859F3E3_15F5_4C98_86A7_1A9258DAE3A5__INCLUDED_)
#define AFX_STACK4_H__2859F3E3_15F5_4C98_86A7_1A9258DAE3A5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack4 dialog

class Cstack4 : public CDialog
{
// Construction
public:
	Cstack4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack4)
	enum { IDD = IDD_STACK4_DIALOG };
	BOOL	m_buildingdownwash4;
	BOOL	m_buildinglocation4;
	BOOL	m_buoyancy4;
	float	m_ds4;
	float	m_buildingheight4;
	float	m_buildingwidth4;
	float	m_q4;
	float	m_stack4;
	float	m_stackx4;
	float	m_stacky4;
	float	m_stackz4;
	float	m_ts4;
	float	m_vs4;
	int		m_plumerise4;
	float	m_decay4;
	float	m_sccoef4;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack4)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition4;
	float m_pp4;
	float m_dp4;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK4_H__2859F3E3_15F5_4C98_86A7_1A9258DAE3A5__INCLUDED_)

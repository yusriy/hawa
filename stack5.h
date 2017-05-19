#if !defined(AFX_STACK5_H__DF87472D_5F7B_44F7_9CBB_BD7AD4705E7E__INCLUDED_)
#define AFX_STACK5_H__DF87472D_5F7B_44F7_9CBB_BD7AD4705E7E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack5.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack5 dialog

class Cstack5 : public CDialog
{
// Construction
public:
	Cstack5(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack5)
	enum { IDD = IDD_STACK5_DIALOG };
	BOOL	m_buildingdownwash5;
	BOOL	m_buildinglocation5;
	BOOL	m_buoyancy5;
	float	m_ds5;
	float	m_buildingheight5;
	float	m_buildingwidth5;
	float	m_q5;
	float	m_stack5;
	float	m_stackx5;
	float	m_stacky5;
	float	m_stackz5;
	float	m_ts5;
	float	m_vs5;
	int		m_plumerise5;
	float	m_decay5;
	float	m_sccoef5;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack5)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack5)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition5;
	float m_pp5;
	float m_dp5;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK5_H__DF87472D_5F7B_44F7_9CBB_BD7AD4705E7E__INCLUDED_)

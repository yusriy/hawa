#if !defined(AFX_STACK8_H__B8B2B1C1_47CB_45B9_9406_4AE213EB1065__INCLUDED_)
#define AFX_STACK8_H__B8B2B1C1_47CB_45B9_9406_4AE213EB1065__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack8.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack8 dialog

class Cstack8 : public CDialog
{
// Construction
public:
	Cstack8(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack8)
	enum { IDD = IDD_STACK8_DIALOG };
	BOOL	m_buildingdownwash8;
	BOOL	m_buildinglocation8;
	BOOL	m_buoyancy8;
	float	m_ds8;
	float	m_buildingheight8;
	float	m_buildingwidth8;
	float	m_q8;
	float	m_stack8;
	float	m_stackx8;
	float	m_stacky8;
	float	m_stackz8;
	float	m_ts8;
	float	m_vs8;
	int		m_plumerise8;
	float	m_decay8;
	float	m_sccoef8;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack8)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack8)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition8;
	float m_pp8;
	float m_dp8;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK8_H__B8B2B1C1_47CB_45B9_9406_4AE213EB1065__INCLUDED_)

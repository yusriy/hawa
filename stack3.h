#if !defined(AFX_STACK3_H__E0070E0C_AAD2_47EB_A479_B6124F43F3E7__INCLUDED_)
#define AFX_STACK3_H__E0070E0C_AAD2_47EB_A479_B6124F43F3E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// stack3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cstack3 dialog

class Cstack3 : public CDialog
{
// Construction
public:
	Cstack3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cstack3)
	enum { IDD = IDD_STACK3_DIALOG };
	BOOL	m_buildingdownwash3;
	BOOL	m_buildinglocation3;
	BOOL	m_buoyancy3;
	float	m_ds3;
	float	m_buildingheight3;
	float	m_buildingwidth3;
	float	m_q3;
	float	m_stack3;
	float	m_stackx3;
	float	m_stacky3;
	float	m_stackz3;
	float	m_ts3;
	float	m_vs3;
	int		m_plumerise3;
	float	m_decay3;
	float	m_sccoef3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cstack3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cstack3)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_deposition3;
	float m_pp3;
	float m_dp3;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STACK3_H__E0070E0C_AAD2_47EB_A479_B6124F43F3E7__INCLUDED_)

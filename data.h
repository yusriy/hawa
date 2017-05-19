#if !defined(AFX_DATA_H__38991C2F_ED95_4C8F_9D36_22362050215B__INCLUDED_)
#define AFX_DATA_H__38991C2F_ED95_4C8F_9D36_22362050215B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// data.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cdata dialog

class Cdata : public CDialog
{
// Construction
public:
	Cdata(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cdata)
	enum { IDD = IDD_DATA_DIALOG };
	BOOL	m_ruralurban;
	BOOL	m_downwash;
	float	m_direction;
	float	m_pa;
	float	m_mix;
	float	m_ta;
	float	m_u;
	float	m_heightref;
	int		m_stabilityclass;
	float	m_time;
	float	m_prate;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cdata)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cdata)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATA_H__38991C2F_ED95_4C8F_9D36_22362050215B__INCLUDED_)

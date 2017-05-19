// stack9.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack9.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack9 dialog


Cstack9::Cstack9(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack9::IDD, pParent)
	, m_deposition9(FALSE)
	, m_pp9(0)
	, m_dp9(0)
{
	//{{AFX_DATA_INIT(Cstack9)
	m_buildingdownwash9 = FALSE;
	m_buildinglocation9 = FALSE;
	m_buoyancy9 = FALSE;
	m_ds9 = 0.0f;
	m_buildingheight9 = 0.0f;
	m_buildingwidth9 = 0.0f;
	m_q9 = 0.0f;
	m_stack9 = 0.0f;
	m_stackx9 = 0.0f;
	m_stacky9 = 0.0f;
	m_stackz9 = 0.0f;
	m_ts9 = 0.0f;
	m_vs9 = 0.0f;
	m_plumerise9 = -1;
	m_decay9 = 0.0f;
	m_sccoef9 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack9::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack9)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH9, m_buildingdownwash9);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION9, m_buildinglocation9);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY9, m_buoyancy9);
	DDX_Text(pDX, IDC_EDIT_DS9, m_ds9);
	DDX_Text(pDX, IDC_EDIT_HB9, m_buildingheight9);
	DDX_Text(pDX, IDC_EDIT_HW9, m_buildingwidth9);
	DDX_Text(pDX, IDC_EDIT_Q9, m_q9);
	DDX_Text(pDX, IDC_EDIT_STACK9, m_stack9);
	DDX_Text(pDX, IDC_EDIT_STACKX9, m_stackx9);
	DDX_Text(pDX, IDC_EDIT_STACKY9, m_stacky9);
	DDX_Text(pDX, IDC_EDIT_STACKZ9, m_stackz9);
	DDX_Text(pDX, IDC_EDIT_TS9, m_ts9);
	DDX_Text(pDX, IDC_EDIT_VS9, m_vs9);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS9, m_plumerise9);
	DDX_Text(pDX, IDC_EDIT_DECAY9, m_decay9);
	DDX_Text(pDX, IDC_EDIT_WET9, m_sccoef9);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION9, m_deposition9);
	DDX_Text(pDX, IDC_EDIT_PP9, m_pp9);
	DDX_Text(pDX, IDC_EDIT_DP9, m_dp9);
}


BEGIN_MESSAGE_MAP(Cstack9, CDialog)
	//{{AFX_MSG_MAP(Cstack9)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack9 message handlers

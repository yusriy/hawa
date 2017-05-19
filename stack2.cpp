// stack2.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack2 dialog


Cstack2::Cstack2(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack2::IDD, pParent)
	, m_deposition2(FALSE)
	, m_pp2(0)
	, m_dp2(0)
{
	//{{AFX_DATA_INIT(Cstack2)
	m_buildingdownwash2 = FALSE;
	m_buildinglocation2 = FALSE;
	m_buoyancy2 = FALSE;
	m_ds2 = 0.0f;
	m_buildingheight2 = 0.0f;
	m_buildingwidth2 = 0.0f;
	m_q2 = 0.0f;
	m_stack2 = 0.0f;
	m_stackx2 = 0.0f;
	m_stacky2 = 0.0f;
	m_stackz2 = 0.0f;
	m_ts2 = 0.0f;
	m_vs2 = 0.0f;
	m_plumerise2 = -1;
	m_decay2 = 0.0f;
	m_sccoef2 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack2)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH2, m_buildingdownwash2);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION2, m_buildinglocation2);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY2, m_buoyancy2);
	DDX_Text(pDX, IDC_EDIT_DS2, m_ds2);
	DDX_Text(pDX, IDC_EDIT_HB2, m_buildingheight2);
	DDX_Text(pDX, IDC_EDIT_HW2, m_buildingwidth2);
	DDX_Text(pDX, IDC_EDIT_Q2, m_q2);
	DDX_Text(pDX, IDC_EDIT_STACK2, m_stack2);
	DDX_Text(pDX, IDC_EDIT_STACKX2, m_stackx2);
	DDX_Text(pDX, IDC_EDIT_STACKY2, m_stacky2);
	DDX_Text(pDX, IDC_EDIT_STACKZ2, m_stackz2);
	DDX_Text(pDX, IDC_EDIT_TS2, m_ts2);
	DDX_Text(pDX, IDC_EDIT_VS2, m_vs2);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS2, m_plumerise2);
	DDX_Text(pDX, IDC_EDIT_DECAY2, m_decay2);
	DDX_Text(pDX, IDC_EDIT_WET1, m_sccoef2);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION2, m_deposition2);
	DDX_Text(pDX, IDC_EDIT_PP2, m_pp2);
	DDX_Text(pDX, IDC_EDIT_DP2, m_dp2);
}


BEGIN_MESSAGE_MAP(Cstack2, CDialog)
	//{{AFX_MSG_MAP(Cstack2)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack2 message handlers

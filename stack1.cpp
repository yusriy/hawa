// stack1.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack1 dialog


Cstack1::Cstack1(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack1::IDD, pParent)
	, m_pp1(0)
	, m_dp1(0)
	, m_deposition1(FALSE)
	//, m_dp1a(0)
{
	//{{AFX_DATA_INIT(Cstack1)
	m_buildingdownwash1 = FALSE;
	m_buildinglocation1 = FALSE;
	m_buoyancy1 = FALSE;
	m_ds1 = 0.0f;
	m_buildingheight1 = 0.0f;
	m_buildingwidth1 = 0.0f;
	m_q1 = 0.0f;
	m_stacky1 = 0.0f;
	m_stackx1 = 0.0f;
	m_stack1 = 0.0f;
	m_stackz1 = 0.0f;
	m_ts1 = 0.0f;
	m_vs1 = 0.0f;
	m_plumerise1 = -1;
	m_decay1 = 0.0f;
	m_sccoef1 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack1)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH1, m_buildingdownwash1);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION1, m_buildinglocation1);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY1, m_buoyancy1);
	DDX_Text(pDX, IDC_EDIT_DS1, m_ds1);
	DDX_Text(pDX, IDC_EDIT_HB1, m_buildingheight1);
	DDX_Text(pDX, IDC_EDIT_HW1, m_buildingwidth1);
	DDX_Text(pDX, IDC_EDIT_Q1, m_q1);
	DDX_Text(pDX, IDC_EDIT_STACKY1, m_stacky1);
	DDX_Text(pDX, IDC_EDIT_STACKX1, m_stackx1);
	DDX_Text(pDX, IDC_EDIT_STACK1, m_stack1);
	DDX_Text(pDX, IDC_EDIT_STACKZ1, m_stackz1);
	DDX_Text(pDX, IDC_EDIT_TS1, m_ts1);
	DDX_Text(pDX, IDC_EDIT_VS1, m_vs1);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS1, m_plumerise1);
	DDX_Text(pDX, IDC_EDIT_DECAY1, m_decay1);
	DDX_Text(pDX, IDC_EDIT_WET1, m_sccoef1);
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT_PP1, m_pp1);
	DDX_Text(pDX, IDC_EDIT_DP1, m_dp1);
	DDX_Check(pDX, IDC_DEPOSITION1, m_deposition1);
	//DDX_Text(pDX, IDC_EDIT_DP1, m_dp1a);
}


BEGIN_MESSAGE_MAP(Cstack1, CDialog)
	//{{AFX_MSG_MAP(Cstack1)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack1 message handlers

// stack6.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack6 dialog


Cstack6::Cstack6(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack6::IDD, pParent)
	, m_deposition6(FALSE)
	, m_pp6(0)
	, m_dp6(0)
{
	//{{AFX_DATA_INIT(Cstack6)
	m_buildingdownwash6 = FALSE;
	m_buildinglocation6 = FALSE;
	m_buoyancy6 = FALSE;
	m_ds6 = 0.0f;
	m_buildingheight6 = 0.0f;
	m_buildingwidth6 = 0.0f;
	m_q6 = 0.0f;
	m_stack6 = 0.0f;
	m_stackx6 = 0.0f;
	m_stacky6 = 0.0f;
	m_stackz6 = 0.0f;
	m_ts6 = 0.0f;
	m_vs6 = 0.0f;
	m_plumerise6 = -1;
	m_decay6 = 0.0f;
	m_sccoef6 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack6::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack6)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH6, m_buildingdownwash6);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION6, m_buildinglocation6);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY6, m_buoyancy6);
	DDX_Text(pDX, IDC_EDIT_DS6, m_ds6);
	DDX_Text(pDX, IDC_EDIT_HB6, m_buildingheight6);
	DDX_Text(pDX, IDC_EDIT_HW6, m_buildingwidth6);
	DDX_Text(pDX, IDC_EDIT_Q6, m_q6);
	DDX_Text(pDX, IDC_EDIT_STACK6, m_stack6);
	DDX_Text(pDX, IDC_EDIT_STACKX6, m_stackx6);
	DDX_Text(pDX, IDC_EDIT_STACKY6, m_stacky6);
	DDX_Text(pDX, IDC_EDIT_STACKZ6, m_stackz6);
	DDX_Text(pDX, IDC_EDIT_TS6, m_ts6);
	DDX_Text(pDX, IDC_EDIT_VS6, m_vs6);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS6, m_plumerise6);
	DDX_Text(pDX, IDC_EDIT_DECAY6, m_decay6);
	DDX_Text(pDX, IDC_EDIT_WET6, m_sccoef6);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION6, m_deposition6);
	DDX_Text(pDX, IDC_EDIT_PP6, m_pp6);
	DDX_Text(pDX, IDC_EDIT_DP6, m_dp6);
}


BEGIN_MESSAGE_MAP(Cstack6, CDialog)
	//{{AFX_MSG_MAP(Cstack6)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack6 message handlers

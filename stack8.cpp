// stack8.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack8.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack8 dialog


Cstack8::Cstack8(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack8::IDD, pParent)
	, m_deposition8(FALSE)
	, m_pp8(0)
	, m_dp8(0)
{
	//{{AFX_DATA_INIT(Cstack8)
	m_buildingdownwash8 = FALSE;
	m_buildinglocation8 = FALSE;
	m_buoyancy8 = FALSE;
	m_ds8 = 0.0f;
	m_buildingheight8 = 0.0f;
	m_buildingwidth8 = 0.0f;
	m_q8 = 0.0f;
	m_stack8 = 0.0f;
	m_stackx8 = 0.0f;
	m_stacky8 = 0.0f;
	m_stackz8 = 0.0f;
	m_ts8 = 0.0f;
	m_vs8 = 0.0f;
	m_plumerise8 = -1;
	m_decay8 = 0.0f;
	m_sccoef8 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack8::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack8)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH8, m_buildingdownwash8);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION8, m_buildinglocation8);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY8, m_buoyancy8);
	DDX_Text(pDX, IDC_EDIT_DS8, m_ds8);
	DDX_Text(pDX, IDC_EDIT_HB8, m_buildingheight8);
	DDX_Text(pDX, IDC_EDIT_HW8, m_buildingwidth8);
	DDX_Text(pDX, IDC_EDIT_Q8, m_q8);
	DDX_Text(pDX, IDC_EDIT_STACK8, m_stack8);
	DDX_Text(pDX, IDC_EDIT_STACKX8, m_stackx8);
	DDX_Text(pDX, IDC_EDIT_STACKY8, m_stacky8);
	DDX_Text(pDX, IDC_EDIT_STACKZ8, m_stackz8);
	DDX_Text(pDX, IDC_EDIT_TS8, m_ts8);
	DDX_Text(pDX, IDC_EDIT_VS8, m_vs8);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS8, m_plumerise8);
	DDX_Text(pDX, IDC_EDIT_DECAY8, m_decay8);
	DDX_Text(pDX, IDC_EDIT_WET8, m_sccoef8);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION8, m_deposition8);
	DDX_Text(pDX, IDC_EDIT_PP8, m_pp8);
	DDX_Text(pDX, IDC_EDIT_DP8, m_dp8);
}


BEGIN_MESSAGE_MAP(Cstack8, CDialog)
	//{{AFX_MSG_MAP(Cstack8)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack8 message handlers

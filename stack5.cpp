// stack5.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack5.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack5 dialog


Cstack5::Cstack5(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack5::IDD, pParent)
	, m_deposition5(FALSE)
	, m_pp5(0)
	, m_dp5(0)
{
	//{{AFX_DATA_INIT(Cstack5)
	m_buildingdownwash5 = FALSE;
	m_buildinglocation5 = FALSE;
	m_buoyancy5 = FALSE;
	m_ds5 = 0.0f;
	m_buildingheight5 = 0.0f;
	m_buildingwidth5 = 0.0f;
	m_q5 = 0.0f;
	m_stack5 = 0.0f;
	m_stackx5 = 0.0f;
	m_stacky5 = 0.0f;
	m_stackz5 = 0.0f;
	m_ts5 = 0.0f;
	m_vs5 = 0.0f;
	m_plumerise5 = -1;
	m_decay5 = 0.0f;
	m_sccoef5 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack5::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack5)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH5, m_buildingdownwash5);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION5, m_buildinglocation5);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY5, m_buoyancy5);
	DDX_Text(pDX, IDC_EDIT_DS5, m_ds5);
	DDX_Text(pDX, IDC_EDIT_HB5, m_buildingheight5);
	DDX_Text(pDX, IDC_EDIT_HW5, m_buildingwidth5);
	DDX_Text(pDX, IDC_EDIT_Q5, m_q5);
	DDX_Text(pDX, IDC_EDIT_STACK5, m_stack5);
	DDX_Text(pDX, IDC_EDIT_STACKX5, m_stackx5);
	DDX_Text(pDX, IDC_EDIT_STACKY5, m_stacky5);
	DDX_Text(pDX, IDC_EDIT_STACKZ5, m_stackz5);
	DDX_Text(pDX, IDC_EDIT_TS5, m_ts5);
	DDX_Text(pDX, IDC_EDIT_VS5, m_vs5);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS5, m_plumerise5);
	DDX_Text(pDX, IDC_EDIT_DECAY5, m_decay5);
	DDX_Text(pDX, IDC_EDIT_WET5, m_sccoef5);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION5, m_deposition5);
	DDX_Text(pDX, IDC_EDIT_PP5, m_pp5);
	DDX_Text(pDX, IDC_EDIT_DP5, m_dp5);
}


BEGIN_MESSAGE_MAP(Cstack5, CDialog)
	//{{AFX_MSG_MAP(Cstack5)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack5 message handlers

// stack3.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack3 dialog


Cstack3::Cstack3(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack3::IDD, pParent)
	, m_deposition3(FALSE)
	, m_pp3(0)
	, m_dp3(0)
{
	//{{AFX_DATA_INIT(Cstack3)
	m_buildingdownwash3 = FALSE;
	m_buildinglocation3 = FALSE;
	m_buoyancy3 = FALSE;
	m_ds3 = 0.0f;
	m_buildingheight3 = 0.0f;
	m_buildingwidth3 = 0.0f;
	m_q3 = 0.0f;
	m_stack3 = 0.0f;
	m_stackx3 = 0.0f;
	m_stacky3 = 0.0f;
	m_stackz3 = 0.0f;
	m_ts3 = 0.0f;
	m_vs3 = 0.0f;
	m_plumerise3 = -1;
	m_decay3 = 0.0f;
	m_sccoef3 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack3)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH3, m_buildingdownwash3);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION3, m_buildinglocation3);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY3, m_buoyancy3);
	DDX_Text(pDX, IDC_EDIT_DS3, m_ds3);
	DDX_Text(pDX, IDC_EDIT_HB3, m_buildingheight3);
	DDX_Text(pDX, IDC_EDIT_HW3, m_buildingwidth3);
	DDX_Text(pDX, IDC_EDIT_Q3, m_q3);
	DDX_Text(pDX, IDC_EDIT_STACK3, m_stack3);
	DDX_Text(pDX, IDC_EDIT_STACKX3, m_stackx3);
	DDX_Text(pDX, IDC_EDIT_STACKY3, m_stacky3);
	DDX_Text(pDX, IDC_EDIT_STACKZ3, m_stackz3);
	DDX_Text(pDX, IDC_EDIT_TS3, m_ts3);
	DDX_Text(pDX, IDC_EDIT_VS3, m_vs3);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS3, m_plumerise3);
	DDX_Text(pDX, IDC_EDIT_DECAY3, m_decay3);
	DDX_Text(pDX, IDC_EDIT_WET1, m_sccoef3);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION3, m_deposition3);
	DDX_Text(pDX, IDC_EDIT_PP3, m_pp3);
	DDX_Text(pDX, IDC_EDIT_DP3, m_dp3);
}


BEGIN_MESSAGE_MAP(Cstack3, CDialog)
	//{{AFX_MSG_MAP(Cstack3)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack3 message handlers

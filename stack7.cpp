// stack7.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack7.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack7 dialog


Cstack7::Cstack7(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack7::IDD, pParent)
	, m_deposition7(FALSE)
	, m_pp7(0)
	, m_dp7(0)
{
	//{{AFX_DATA_INIT(Cstack7)
	m_buildingdownwash7 = FALSE;
	m_buildinglocation7 = FALSE;
	m_buoyancy7 = FALSE;
	m_ds7 = 0.0f;
	m_buildingheight7 = 0.0f;
	m_buildingwidth7 = 0.0f;
	m_q7 = 0.0f;
	m_stack7 = 0.0f;
	m_stackx7 = 0.0f;
	m_stacky7 = 0.0f;
	m_stackz7 = 0.0f;
	m_ts7 = 0.0f;
	m_vs7 = 0.0f;
	m_plumerise7 = -1;
	m_decay7 = 0.0f;
	m_sccoef7 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack7::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack7)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH7, m_buildingdownwash7);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION7, m_buildinglocation7);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY7, m_buoyancy7);
	DDX_Text(pDX, IDC_EDIT_DS7, m_ds7);
	DDX_Text(pDX, IDC_EDIT_HB7, m_buildingheight7);
	DDX_Text(pDX, IDC_EDIT_HW7, m_buildingwidth7);
	DDX_Text(pDX, IDC_EDIT_Q7, m_q7);
	DDX_Text(pDX, IDC_EDIT_STACK7, m_stack7);
	DDX_Text(pDX, IDC_EDIT_STACKX7, m_stackx7);
	DDX_Text(pDX, IDC_EDIT_STACKY7, m_stacky7);
	DDX_Text(pDX, IDC_EDIT_STACKZ7, m_stackz7);
	DDX_Text(pDX, IDC_EDIT_TS7, m_ts7);
	DDX_Text(pDX, IDC_EDIT_VS7, m_vs7);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS7, m_plumerise7);
	DDX_Text(pDX, IDC_EDIT_DECAY7, m_decay7);
	DDX_Text(pDX, IDC_EDIT_WET7, m_sccoef7);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION7, m_deposition7);
	DDX_Text(pDX, IDC_EDIT_PP7, m_pp7);
	DDX_Text(pDX, IDC_EDIT_DP7, m_dp7);
}


BEGIN_MESSAGE_MAP(Cstack7, CDialog)
	//{{AFX_MSG_MAP(Cstack7)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack7 message handlers

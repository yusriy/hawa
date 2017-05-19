// stack10.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack10.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack10 dialog


Cstack10::Cstack10(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack10::IDD, pParent)
	, m_deposition10(FALSE)
	, m_pp10(0)
	, m_dp10(0)
{
	//{{AFX_DATA_INIT(Cstack10)
	m_buildingdownwash10 = FALSE;
	m_buildinglocation10 = FALSE;
	m_buoyancy10 = FALSE;
	m_ds10 = 0.0f;
	m_buildingheight10 = 0.0f;
	m_buildingwidth10 = 0.0f;
	m_q10 = 0.0f;
	m_stack10 = 0.0f;
	m_stackx10 = 0.0f;
	m_stacky10 = 0.0f;
	m_stackz10 = 0.0f;
	m_ts10 = 0.0f;
	m_vs10 = 0.0f;
	m_plumerise10 = -1;
	m_decay10 = 0.0f;
	m_sccoef10 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack10::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack10)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH10, m_buildingdownwash10);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION10, m_buildinglocation10);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY10, m_buoyancy10);
	DDX_Text(pDX, IDC_EDIT_DS10, m_ds10);
	DDX_Text(pDX, IDC_EDIT_HB10, m_buildingheight10);
	DDX_Text(pDX, IDC_EDIT_HW10, m_buildingwidth10);
	DDX_Text(pDX, IDC_EDIT_Q10, m_q10);
	DDX_Text(pDX, IDC_EDIT_STACK10, m_stack10);
	DDX_Text(pDX, IDC_EDIT_STACKX10, m_stackx10);
	DDX_Text(pDX, IDC_EDIT_STACKY10, m_stacky10);
	DDX_Text(pDX, IDC_EDIT_STACKZ10, m_stackz10);
	DDX_Text(pDX, IDC_EDIT_TS10, m_ts10);
	DDX_Text(pDX, IDC_EDIT_VS10, m_vs10);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS10, m_plumerise10);
	DDX_Text(pDX, IDC_EDIT_DECAY10, m_decay10);
	DDX_Text(pDX, IDC_EDIT_WET10, m_sccoef10);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION10, m_deposition10);
	DDX_Text(pDX, IDC_EDIT_PP10, m_pp10);
	DDX_Text(pDX, IDC_EDIT_DP10, m_dp10);
}


BEGIN_MESSAGE_MAP(Cstack10, CDialog)
	//{{AFX_MSG_MAP(Cstack10)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack10 message handlers

// stack4.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "stack4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cstack4 dialog


Cstack4::Cstack4(CWnd* pParent /*=NULL*/)
	: CDialog(Cstack4::IDD, pParent)
	, m_deposition4(FALSE)
	, m_pp4(0)
	, m_dp4(0)
{
	//{{AFX_DATA_INIT(Cstack4)
	m_buildingdownwash4 = FALSE;
	m_buildinglocation4 = FALSE;
	m_buoyancy4 = FALSE;
	m_ds4 = 0.0f;
	m_buildingheight4 = 0.0f;
	m_buildingwidth4 = 0.0f;
	m_q4 = 0.0f;
	m_stack4 = 0.0f;
	m_stackx4 = 0.0f;
	m_stacky4 = 0.0f;
	m_stackz4 = 0.0f;
	m_ts4 = 0.0f;
	m_vs4 = 0.0f;
	m_plumerise4 = -1;
	m_decay4 = 0.0f;
	m_sccoef4 = 0.0f;
	//}}AFX_DATA_INIT
}


void Cstack4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cstack4)
	DDX_Check(pDX, IDC_CHECK_BUILDINGDOWNWASH4, m_buildingdownwash4);
	DDX_Check(pDX, IDC_CHECK_BUILDINGLOCATION4, m_buildinglocation4);
	DDX_Check(pDX, IDC_CHECK_BUOYANCY4, m_buoyancy4);
	DDX_Text(pDX, IDC_EDIT_DS4, m_ds4);
	DDX_Text(pDX, IDC_EDIT_HB4, m_buildingheight4);
	DDX_Text(pDX, IDC_EDIT_HW3, m_buildingwidth4);
	DDX_Text(pDX, IDC_EDIT_Q4, m_q4);
	DDX_Text(pDX, IDC_EDIT_STACK4, m_stack4);
	DDX_Text(pDX, IDC_EDIT_STACKX4, m_stackx4);
	DDX_Text(pDX, IDC_EDIT_STACKY4, m_stacky4);
	DDX_Text(pDX, IDC_EDIT_STACKZ4, m_stackz4);
	DDX_Text(pDX, IDC_EDIT_TS4, m_ts4);
	DDX_Text(pDX, IDC_EDIT_VS4, m_vs4);
	DDX_Radio(pDX, IDC_RADIO_BRIGGS4, m_plumerise4);
	DDX_Text(pDX, IDC_EDIT_DECAY4, m_decay4);
	DDX_Text(pDX, IDC_EDIT_WET1, m_sccoef4);
	//}}AFX_DATA_MAP
	DDX_Check(pDX, IDC_DEPOSITION4, m_deposition4);
	DDX_Text(pDX, IDC_EDIT_PP4, m_pp4);
	DDX_Text(pDX, IDC_EDIT_DP4, m_dp4);
}


BEGIN_MESSAGE_MAP(Cstack4, CDialog)
	//{{AFX_MSG_MAP(Cstack4)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cstack4 message handlers

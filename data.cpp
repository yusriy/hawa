// data.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "data.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cdata dialog


Cdata::Cdata(CWnd* pParent /*=NULL*/)
	: CDialog(Cdata::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cdata)
	m_ruralurban = FALSE;
	m_downwash = FALSE;
	m_direction = 0.0f;
	m_pa = 0.0f;
	m_mix = 0.0f;
	m_ta = 0.0f;
	m_u = 0.0f;
	m_heightref = 0.0f;
	m_stabilityclass = -1;
	m_time = 0.0f;
	m_prate = 0.0f;
	//}}AFX_DATA_INIT
}


void Cdata::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cdata)
	DDX_Check(pDX, IDC_CHECK_RURALURBAN, m_ruralurban);
	DDX_Check(pDX, IDC_CHECK_TIPDOWNWASH, m_downwash);
	DDX_Text(pDX, IDC_EDIT_DIRECTION, m_direction);
	DDX_Text(pDX, IDC_EDIT_PA, m_pa);
	DDX_Text(pDX, IDC_EDIT_MIX, m_mix);
	DDX_Text(pDX, IDC_EDIT_TA, m_ta);
	DDX_Text(pDX, IDC_EDIT_US, m_u);
	DDX_Text(pDX, IDC_EDIT_WINDHEIGHT, m_heightref);
	DDX_Radio(pDX, IDC_RADIO_A, m_stabilityclass);
	DDX_Text(pDX, IDC_EDIT_TIME, m_time);
	DDX_Text(pDX, IDC_EDIT_PRATE, m_prate);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cdata, CDialog)
	//{{AFX_MSG_MAP(Cdata)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cdata message handlers

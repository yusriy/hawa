// grid.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "grid.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cgrid dialog


Cgrid::Cgrid(CWnd* pParent /*=NULL*/)
	: CDialog(Cgrid::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cgrid)
	m_relevation = 0.0f;
	m_rlength = 0.0f;
	m_ramount = 0;
	m_rring = 0;
	m_between = 0.0f;
	m_maxx = 0.0f;
	m_maxy = 0.0f;
	m_minx = 0.0f;
	m_miny = 0.0f;
	//}}AFX_DATA_INIT
}


void Cgrid::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cgrid)
	DDX_Text(pDX, IDC_EDIT_RELEVATION, m_relevation);
	DDX_Text(pDX, IDC_EDIT_RLENGTH, m_rlength);
	DDX_Text(pDX, IDC_EDIT_RAMOUNT, m_ramount);
	DDX_Text(pDX, IDC_EDIT_RRING, m_rring);
	DDX_Text(pDX, IDC_EDIT_BETWEEN, m_between);
	DDX_Text(pDX, IDC_EDIT_MAXX, m_maxx);
	DDX_Text(pDX, IDC_EDIT_MAXY, m_maxy);
	DDX_Text(pDX, IDC_EDIT_MINX, m_minx);
	DDX_Text(pDX, IDC_EDIT_MINY, m_miny);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cgrid, CDialog)
	//{{AFX_MSG_MAP(Cgrid)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cgrid message handlers

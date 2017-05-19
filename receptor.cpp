// receptor.cpp : implementation file
//

#include "stdafx.h"
#include "air.h"
#include "receptor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Creceptor dialog


Creceptor::Creceptor(CWnd* pParent /*=NULL*/)
	: CDialog(Creceptor::IDD, pParent)
{
	//{{AFX_DATA_INIT(Creceptor)
	m_x1 = 0.0f;
	m_x2 = 0.0f;
	m_x3 = 0.0f;
	m_x4 = 0.0f;
	m_x5 = 0.0f;
	m_x6 = 0.0f;
	m_x7 = 0.0f;
	m_x8 = 0.0f;
	m_x9 = 0.0f;
	m_y1 = 0.0f;
	m_y2 = 0.0f;
	m_y3 = 0.0f;
	m_y4 = 0.0f;
	m_y5 = 0.0f;
	m_y6 = 0.0f;
	m_y7 = 0.0f;
	m_y8 = 0.0f;
	m_y9 = 0.0f;
	m_z1 = 0.0f;
	m_z2 = 0.0f;
	m_z3 = 0.0f;
	m_z4 = 0.0f;
	m_z5 = 0.0f;
	m_z6 = 0.0f;
	m_z7 = 0.0f;
	m_z8 = 0.0f;
	m_z9 = 0.0f;
	m_x10 = 0.0f;
	m_y10 = 0.0f;
	m_z10 = 0.0f;
	//}}AFX_DATA_INIT
}


void Creceptor::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Creceptor)
	DDX_Text(pDX, IDC_EDIT_X1, m_x1);
	DDX_Text(pDX, IDC_EDIT_X2, m_x2);
	DDX_Text(pDX, IDC_EDIT_X3, m_x3);
	DDX_Text(pDX, IDC_EDIT_X4, m_x4);
	DDX_Text(pDX, IDC_EDIT_X5, m_x5);
	DDX_Text(pDX, IDC_EDIT_X6, m_x6);
	DDX_Text(pDX, IDC_EDIT_X7, m_x7);
	DDX_Text(pDX, IDC_EDIT_X8, m_x8);
	DDX_Text(pDX, IDC_EDIT_X9, m_x9);
	DDX_Text(pDX, IDC_EDIT_Y1, m_y1);
	DDX_Text(pDX, IDC_EDIT_Y2, m_y2);
	DDX_Text(pDX, IDC_EDIT_Y3, m_y3);
	DDX_Text(pDX, IDC_EDIT_Y4, m_y4);
	DDX_Text(pDX, IDC_EDIT_Y5, m_y5);
	DDX_Text(pDX, IDC_EDIT_Y6, m_y6);
	DDX_Text(pDX, IDC_EDIT_Y7, m_y7);
	DDX_Text(pDX, IDC_EDIT_Y8, m_y8);
	DDX_Text(pDX, IDC_EDIT_Y9, m_y9);
	DDX_Text(pDX, IDC_EDIT_Z1, m_z1);
	DDX_Text(pDX, IDC_EDIT_Z2, m_z2);
	DDX_Text(pDX, IDC_EDIT_Z3, m_z3);
	DDX_Text(pDX, IDC_EDIT_Z4, m_z4);
	DDX_Text(pDX, IDC_EDIT_Z5, m_z5);
	DDX_Text(pDX, IDC_EDIT_Z6, m_z6);
	DDX_Text(pDX, IDC_EDIT_Z7, m_z7);
	DDX_Text(pDX, IDC_EDIT_Z8, m_z8);
	DDX_Text(pDX, IDC_EDIT_Z9, m_z9);
	DDX_Text(pDX, IDC_EDIT_X10, m_x10);
	DDX_Text(pDX, IDC_EDIT_Y10, m_y10);
	DDX_Text(pDX, IDC_EDIT_Z10, m_z10);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Creceptor, CDialog)
	//{{AFX_MSG_MAP(Creceptor)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Creceptor message handlers

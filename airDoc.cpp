// airDoc.cpp : implementation of the CAirDoc class
//

#include "stdafx.h"
#include "air.h"
#include "math.h"
#include "airDoc.h"
#include "data.h"
#include "receptor.h"
#include "grid.h"
#include "stack1.h"
#include "stack2.h"
#include "stack3.h"
#include "stack4.h"
#include "stack5.h"
#include "stack6.h"
#include "stack7.h"
#include "stack8.h"
#include "stack9.h"
#include "stack10.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAirDoc

IMPLEMENT_DYNCREATE(CAirDoc, CDocument)

BEGIN_MESSAGE_MAP(CAirDoc, CDocument)
	//{{AFX_MSG_MAP(CAirDoc)
	ON_COMMAND(ID_DATA_DATA, OnDataData)
	ON_COMMAND(ID_RECEPTOR_RECEPTORLOCATION, OnReceptorReceptorlocation)
	ON_COMMAND(ID_STACK1_STACK1DATA, OnStack1Stack1data)
	ON_COMMAND(ID_STACK2_STACK2DATA, OnStack2Stack2data)
	ON_COMMAND(ID_STACK3_STACK3DATA, OnStack3Stack3data)
	ON_COMMAND(ID_STACK4_STACK4DATA, OnStack4Stack4data)
	ON_COMMAND(ID_STACK5_STACK5DATA, OnStack5Stack5data)
	ON_COMMAND(ID_STACK6_STACK6DATA, OnStack6Stack6data)
	ON_COMMAND(ID_STACK7_STACK7DATA, OnStack7Stack7data)
	ON_COMMAND(ID_STACK8_STACK8DATA, OnStack8Stack8data)
	ON_COMMAND(ID_STACK9_STACK9DATA, OnStack9Stack9data)
	ON_COMMAND(ID_STACK10_STACK10DATA, OnStack10Stack10data)
	ON_COMMAND(ID_RECEPTORGRID_GRID, OnReceptorgridGrid)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAirDoc construction/destruction

CAirDoc::CAirDoc()
{
	// TODO: add one-time construction code here

}

CAirDoc::~CAirDoc()
{
}

BOOL CAirDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	MAXX = 0;
	MINX = 0;
	MINY = 0;
	MAXY = 0;
	BETWEEN = 0;
	BUILDINGDOWNWASH1 = FALSE;
	BUILDINGDOWNWASH2 = FALSE;
	BUILDINGDOWNWASH3 = FALSE;
	BUILDINGDOWNWASH4 = FALSE;
	BUILDINGDOWNWASH5 = FALSE;
	BUILDINGDOWNWASH6 = FALSE;
	BUILDINGDOWNWASH7 = FALSE;
	BUILDINGDOWNWASH8 = FALSE;
	BUILDINGDOWNWASH9 = FALSE;
	BUILDINGDOWNWASH10 = FALSE;
	PLUMERISE1 = 0;
	PLUMERISE2 = 0;
	PLUMERISE3 = 0;
	PLUMERISE4 = 0;
	PLUMERISE5 = 0;
	PLUMERISE6 = 0;
	PLUMERISE7 = 0;
	PLUMERISE8 = 0;
	PLUMERISE9 = 0;
	PLUMERISE10 = 0;
	BUILDINGHEIGHT1 = 0;
	BUILDINGHEIGHT2 = 0;
	BUILDINGHEIGHT3 = 0;
	BUILDINGHEIGHT4 = 0;
	BUILDINGHEIGHT5 = 0;
	BUILDINGHEIGHT6 = 0;
	BUILDINGHEIGHT7 = 0;
	BUILDINGHEIGHT8 = 0;
	BUILDINGHEIGHT9 = 0;
	BUILDINGHEIGHT10 = 0;
	BUILDINGLOCATION1 = FALSE;
	BUILDINGLOCATION2 = FALSE;
	BUILDINGLOCATION3 = FALSE;
	BUILDINGLOCATION4 = FALSE;
	BUILDINGLOCATION5 = FALSE;
	BUILDINGLOCATION6 = FALSE;
	BUILDINGLOCATION7 = FALSE;
	BUILDINGLOCATION8 = FALSE;
	BUILDINGLOCATION9 = FALSE;
	BUILDINGLOCATION10 = FALSE;
	BUILDINGWIDTH1 = 0;
	BUILDINGWIDTH2 = 0;
	BUILDINGWIDTH3 = 0;
	BUILDINGWIDTH4 = 0;
	BUILDINGWIDTH5 = 0;
	BUILDINGWIDTH6 = 0;
	BUILDINGWIDTH7 = 0;
	BUILDINGWIDTH8 = 0;
	BUILDINGWIDTH9 = 0;
	BUILDINGWIDTH10 = 0;
	BUOYANCY1 = FALSE;
	BUOYANCY2 = FALSE;
	BUOYANCY3 = FALSE;
	BUOYANCY4 = FALSE;
	BUOYANCY5 = FALSE;
	BUOYANCY6 = FALSE;
	BUOYANCY7 = FALSE;
	BUOYANCY8 = FALSE;
	BUOYANCY9 = FALSE;
	BUOYANCY10 = FALSE;
	DOWNWASH = FALSE;
	DS1 = 0;
	DS2 = 0;
	DS3 = 0;
	DS4 = 0;
	DS5 = 0;
	DS6 = 0;
	DS7 = 0;
	DS8 = 0;
	DS9 = 0;
	DS10 = 0;
	HEIGHTREF = 0;
	MIX = 0;
	PA = 0;
	Q1 = 0;
	Q2 = 0;
	Q3 = 0;
	Q4 = 0;
	Q5 = 0;
	Q6 = 0;
	Q7 = 0;
	Q8 = 0;
	Q9 = 0;
	Q10 = 0;
	RURAL_URBAN = FALSE;
	STABILITYCLASS = 0;
	STACK1 = 0;
	STACK2 = 0;
	STACK3 = 0;
	STACK4 = 0;
	STACK5 = 0;
	STACK6 = 0;
	STACK7 = 0;
	STACK8 = 0;
	STACK9 = 0;
	STACK10 = 0;
	STACKX1 = 0;
	STACKX2 = 0;
	STACKX3 = 0;
	STACKX4 = 0;
	STACKX5 = 0;
	STACKX6 = 0;
	STACKX7 = 0;
	STACKX8 = 0;
	STACKX9 = 0;
	STACKX10 = 0;
	STACKY1 = 0;
	STACKY2 = 0;
	STACKY3 = 0;
	STACKY4 = 0;
	STACKY5 = 0;
	STACKY6 = 0;
	STACKY7 = 0;
	STACKY8 = 0;
	STACKY9 = 0;
	STACKY10 = 0;
	STACKZ1 = 0;
	STACKZ2 = 0;
	STACKZ3 = 0;
	STACKZ4 = 0;
	STACKZ5 = 0;
	STACKZ6 = 0;
	STACKZ7 = 0;
	STACKZ8 = 0;
	STACKZ9 = 0;
	STACKZ10 = 0;
	TA = 0;
	TS1 = 0;
	TS2 = 0;
	TS3 = 0;
	TS4 = 0;
	TS5 = 0;
	TS6 = 0;
	TS7 = 0;
	TS8 = 0;
	TS9 = 0;
	TS10 = 0;
	U = 0;
	VS1 = 0;
	VS2 = 0;
	VS3 = 0;
	VS4 = 0;
	VS5 = 0;
	VS6 = 0;
	VS7 = 0;
	VS8 = 0;
	VS9 = 0;
	VS10 = 0;
	WD = 0;
	X1 = 0;
	X2 = 0;
	X3 = 0;
	X4 = 0;
	X5 = 0;
	X6 = 0;
	X7 = 0;
	X8 = 0;
	X9 = 0;
	X10 = 0;
	Y1 = 0;
	Y2 = 0;
	Y3 = 0;
	Y4 = 0;
	Y5 = 0;
	Y6 = 0;
	Y7 = 0;
	Y8 = 0;
	Y9 = 0;
	Y10 = 0;
	Z1 = 0;
	Z2 = 0;
	Z3 = 0;
	Z4 = 0;
	Z5 = 0;
	Z6 = 0;
	Z7 = 0;
	Z8 = 0;
	Z9 = 0;
	Z10 = 0;
	TIME = 10;
	DECAY1 = 0;
	DECAY2 = 0;
	DECAY3 = 0;
	DECAY4 = 0;
	DECAY5 = 0;
	DECAY6 = 0;
	DECAY7 = 0;
	DECAY8 = 0;
	DECAY9 = 0;
	DECAY10 = 0;
	RRING = 0;
	RAMOUNT = 0;
	RLENGTH = 0;
	RELEVATION = 0;
	DP1 = 0;
	DP2 = 0;
	DP3 = 0;
	DP4 = 0;
	DP5 = 0;
	DP6 = 0;
	DP7 = 0;
	DP8 = 0;
	DP9 = 0;
	DP10 = 0;
	PP1 = 0;
	PP2 = 0;
	PP3 = 0;
	PP4 = 0;
	PP5 = 0;
	PP6 = 0;
	PP7 = 0;
	PP8 = 0;
	PP9 = 0;
	PP10 = 0;
	DEPOSITION1 = FALSE;
	DEPOSITION2 = FALSE;
	DEPOSITION3 = FALSE;
	DEPOSITION4 = FALSE;
	DEPOSITION5 = FALSE;
	DEPOSITION6 = FALSE;
	DEPOSITION7 = FALSE;
	DEPOSITION8 = FALSE;
	DEPOSITION9 = FALSE;
	DEPOSITION10 = FALSE;
	SCCOEF1 = 0;
	SCCOEF2 = 0;
	SCCOEF3 = 0;
	SCCOEF4 = 0;
	SCCOEF5 = 0;
	SCCOEF6 = 0;
	SCCOEF7 = 0;
	SCCOEF8 = 0;
	SCCOEF9 = 0;
	SCCOEF10 = 0;
	PRATE = 0;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAirDoc serialization

void CAirDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		ar << MINX;
		ar << MAXX;
		ar << MINY;
		ar << MAXY;
		ar << BETWEEN;
		ar << BUILDINGDOWNWASH1;
		ar << BUILDINGDOWNWASH2;
		ar << BUILDINGDOWNWASH3;
		ar << BUILDINGDOWNWASH4;
		ar << BUILDINGDOWNWASH5;
		ar << BUILDINGDOWNWASH6;
		ar << BUILDINGDOWNWASH7;
		ar << BUILDINGDOWNWASH8;
		ar << BUILDINGDOWNWASH9;
		ar << BUILDINGDOWNWASH10;
		ar << BUILDINGHEIGHT1;
		ar << BUILDINGHEIGHT2;
		ar << BUILDINGHEIGHT3;
		ar << BUILDINGHEIGHT4;
		ar << BUILDINGHEIGHT5;
		ar << BUILDINGHEIGHT6;
		ar << BUILDINGHEIGHT7;
		ar << BUILDINGHEIGHT8;
		ar << BUILDINGHEIGHT9;
		ar << BUILDINGHEIGHT10;
		ar << BUILDINGLOCATION1;
		ar << BUILDINGLOCATION2;
		ar << BUILDINGLOCATION3;
		ar << BUILDINGLOCATION4;
		ar << BUILDINGLOCATION5;
		ar << BUILDINGLOCATION6;
		ar << BUILDINGLOCATION7;
		ar << BUILDINGLOCATION8;
		ar << BUILDINGLOCATION9;
		ar << BUILDINGLOCATION10;
		ar << BUILDINGWIDTH1;
		ar << BUILDINGWIDTH2;
		ar << BUILDINGWIDTH3;
		ar << BUILDINGWIDTH4;
		ar << BUILDINGWIDTH5;
		ar << BUILDINGWIDTH6;
		ar << BUILDINGWIDTH7;
		ar << BUILDINGWIDTH8;
		ar << BUILDINGWIDTH9;
		ar << BUILDINGWIDTH10;
		ar << BUOYANCY1;
		ar << BUOYANCY2;
		ar << BUOYANCY3;
		ar << BUOYANCY4;
		ar << BUOYANCY5;
		ar << BUOYANCY6;
		ar << BUOYANCY7;
		ar << BUOYANCY8;
		ar << BUOYANCY9;
		ar << BUOYANCY10;
		ar << DOWNWASH;
		ar << DS1;
		ar << DS2;
		ar << DS3;
		ar << DS4;
		ar << DS5;
		ar << DS6;
		ar << DS7;
		ar << DS8;
		ar << DS9;
		ar << DS10;
		ar << HEIGHTREF;
		ar << MIX;
		ar << PA;
		ar << Q1;
		ar << Q2;
		ar << Q3;
		ar << Q4;
		ar << Q5;
		ar << Q6;
		ar << Q7;
		ar << Q8;
		ar << Q9;
		ar << Q10;
		ar << RURAL_URBAN;
		ar << STABILITYCLASS;
		ar << STACK1;
		ar << STACK2;
		ar << STACK3;
		ar << STACK4;
		ar << STACK5;
		ar << STACK6;
		ar << STACK7;
		ar << STACK8;
		ar << STACK9;
		ar << STACK10;
		ar << STACKX1;
		ar << STACKX2;
		ar << STACKX3;
		ar << STACKX4;
		ar << STACKX5;
		ar << STACKX6;
		ar << STACKX7;
		ar << STACKX8;
		ar << STACKX9;
		ar << STACKX10;
		ar << STACKY1;
		ar << STACKY2;
		ar << STACKY3;
		ar << STACKY4;
		ar << STACKY5;
		ar << STACKY6;
		ar << STACKY7;
		ar << STACKY8;
		ar << STACKY9;
		ar << STACKY10;
		ar << STACKZ1;
		ar << STACKZ2;
		ar << STACKZ3;
		ar << STACKZ4;
		ar << STACKZ5;
		ar << STACKZ6;
		ar << STACKZ7;
		ar << STACKZ8;
		ar << STACKZ9;
		ar << STACKZ10;
		ar << PLUMERISE1;
		ar << PLUMERISE2;
		ar << PLUMERISE3;
		ar << PLUMERISE4;
		ar << PLUMERISE5;
		ar << PLUMERISE6;
		ar << PLUMERISE7;
		ar << PLUMERISE8;
		ar << PLUMERISE9;
		ar << PLUMERISE10;
		ar << TA;
		ar << TS1;
		ar << TS2;
		ar << TS3;
		ar << TS4;
		ar << TS5;
		ar << TS6;
		ar << TS7;
		ar << TS8;
		ar << TS9;
		ar << TS10;
		ar << U;
		ar << VS1;
		ar << VS2;
		ar << VS3;
		ar << VS4;
		ar << VS5;
		ar << VS6;
		ar << VS7;
		ar << VS8;
		ar << VS9;
		ar << VS10;
		ar << WD;
		ar << X1;
		ar << X2;
		ar << X3;
		ar << X4;
		ar << X5;
		ar << X6;
		ar << X7;
		ar << X8;
		ar << X9;
		ar << X10;
		ar << Y1;
		ar << Y2;
		ar << Y3;
		ar << Y4;
		ar << Y5;
		ar << Y6;
		ar << Y7;
		ar << Y8;
		ar << Y9;
		ar << Y10;
		ar << Z1;
		ar << Z2;
		ar << Z3;
		ar << Z4;
		ar << Z5;
		ar << Z6;
		ar << Z7;
		ar << Z8;
		ar << Z9;
		ar << Z10;
		ar << TIME;
		ar << RAMOUNT;
		ar << RLENGTH;
		ar << RRING;
		ar << RELEVATION;
		ar << DP1;
		ar << DP2;
		ar << DP3;
		ar << DP4;
		ar << DP5;
		ar << DP6;
		ar << DP7;
		ar << DP8;
		ar << DP9;
		ar << DP10;
		ar << PP1;
		ar << PP2;
		ar << PP3;
		ar << PP4;
		ar << PP5;
		ar << PP6;
		ar << PP7;
		ar << PP8;
		ar << PP9;
		ar << PP10;
		ar << DEPOSITION1;
		ar << DEPOSITION2;
		ar << DEPOSITION3;
		ar << DEPOSITION4;
		ar << DEPOSITION5;
		ar << DEPOSITION6;
		ar << DEPOSITION7;
		ar << DEPOSITION8;
		ar << DEPOSITION9;
		ar << DEPOSITION10;
		ar << PRATE;
		ar << SCCOEF1;
		ar << SCCOEF2;
		ar << SCCOEF3;
		ar << SCCOEF4;
		ar << SCCOEF5;
		ar << SCCOEF6;
		ar << SCCOEF7;
		ar << SCCOEF8;
		ar << SCCOEF9;
		ar << SCCOEF10;

	}
	else
	{
		ar >> MINX;
		ar >> MAXX;
		ar >> MINY;
		ar >> MAXY;
		ar >> BETWEEN;
		ar >> BUILDINGDOWNWASH1;
		ar >> BUILDINGDOWNWASH2;
		ar >> BUILDINGDOWNWASH3;
		ar >> BUILDINGDOWNWASH4;
		ar >> BUILDINGDOWNWASH5;
		ar >> BUILDINGDOWNWASH6;
		ar >> BUILDINGDOWNWASH7;
		ar >> BUILDINGDOWNWASH8;
		ar >> BUILDINGDOWNWASH9;
		ar >> BUILDINGDOWNWASH10;
		ar >> BUILDINGHEIGHT1;
		ar >> BUILDINGHEIGHT2;
		ar >> BUILDINGHEIGHT3;
		ar >> BUILDINGHEIGHT4;
		ar >> BUILDINGHEIGHT5;
		ar >> BUILDINGHEIGHT6;
		ar >> BUILDINGHEIGHT7;
		ar >> BUILDINGHEIGHT8;
		ar >> BUILDINGHEIGHT9;
		ar >> BUILDINGHEIGHT10;
		ar >> BUILDINGLOCATION1;
		ar >> BUILDINGLOCATION2;
		ar >> BUILDINGLOCATION3;
		ar >> BUILDINGLOCATION4;
		ar >> BUILDINGLOCATION5;
		ar >> BUILDINGLOCATION6;
		ar >> BUILDINGLOCATION7;
		ar >> BUILDINGLOCATION8;
		ar >> BUILDINGLOCATION9;
		ar >> BUILDINGLOCATION10;
		ar >> BUILDINGWIDTH1;
		ar >> BUILDINGWIDTH2;
		ar >> BUILDINGWIDTH3;
		ar >> BUILDINGWIDTH4;
		ar >> BUILDINGWIDTH5;
		ar >> BUILDINGWIDTH6;
		ar >> BUILDINGWIDTH7;
		ar >> BUILDINGWIDTH8;
		ar >> BUILDINGWIDTH9;
		ar >> BUILDINGWIDTH10;
		ar >> BUOYANCY1;
		ar >> BUOYANCY2;
		ar >> BUOYANCY3;
		ar >> BUOYANCY4;
		ar >> BUOYANCY5;
		ar >> BUOYANCY6;
		ar >> BUOYANCY7;
		ar >> BUOYANCY8;
		ar >> BUOYANCY9;
		ar >> BUOYANCY10;
		ar >> DOWNWASH;
		ar >> DS1;
		ar >> DS2;
		ar >> DS3;
		ar >> DS4;
		ar >> DS5;
		ar >> DS6;
		ar >> DS7;
		ar >> DS8;
		ar >> DS9;
		ar >> DS10;
		ar >> HEIGHTREF;
		ar >> MIX;
		ar >> PA;
		ar >> Q1;
		ar >> Q2;
		ar >> Q3;
		ar >> Q4;
		ar >> Q5;
		ar >> Q6;
		ar >> Q7;
		ar >> Q8;
		ar >> Q9;
		ar >> Q10;
		ar >> RURAL_URBAN;
		ar >> STABILITYCLASS;
		ar >> STACK1;
		ar >> STACK2;
		ar >> STACK3;
		ar >> STACK4;
		ar >> STACK5;
		ar >> STACK6;
		ar >> STACK7;
		ar >> STACK8;
		ar >> STACK9;
		ar >> STACK10;
		ar >> STACKX1;
		ar >> STACKX2;
		ar >> STACKX3;
		ar >> STACKX4;
		ar >> STACKX5;
		ar >> STACKX6;
		ar >> STACKX7;
		ar >> STACKX8;
		ar >> STACKX9;
		ar >> STACKX10;
		ar >> STACKY1;
		ar >> STACKY2;
		ar >> STACKY3;
		ar >> STACKY4;
		ar >> STACKY5;
		ar >> STACKY6;
		ar >> STACKY7;
		ar >> STACKY8;
		ar >> STACKY9;
		ar >> STACKY10;
		ar >> STACKZ1;
		ar >> STACKZ2;
		ar >> STACKZ3;
		ar >> STACKZ4;
		ar >> STACKZ5;
		ar >> STACKZ6;
		ar >> STACKZ7;
		ar >> STACKZ8;
		ar >> STACKZ9;
		ar >> STACKZ10;
		ar >> PLUMERISE1;
		ar >> PLUMERISE2;
		ar >> PLUMERISE3;
		ar >> PLUMERISE4;
		ar >> PLUMERISE5;
		ar >> PLUMERISE6;
		ar >> PLUMERISE7;
		ar >> PLUMERISE8;
		ar >> PLUMERISE9;
		ar >> PLUMERISE10;
		ar >> TA;
		ar >> TS1;
		ar >> TS2;
		ar >> TS3;
		ar >> TS4;
		ar >> TS5;
		ar >> TS6;
		ar >> TS7;
		ar >> TS8;
		ar >> TS9;
		ar >> TS10;
		ar >> U;
		ar >> VS1;
		ar >> VS2;
		ar >> VS3;
		ar >> VS4;
		ar >> VS5;
		ar >> VS6;
		ar >> VS7;
		ar >> VS8;
		ar << VS9;
		ar >> VS10;
		ar >> WD;
		ar >> X1;
		ar >> X2;
		ar >> X3;
		ar >> X4;
		ar >> X5;
		ar >> X6;
		ar >> X7;
		ar >> X8;
		ar >> X9;
		ar >> X10;
		ar >> Y1;
		ar >> Y2;
		ar >> Y3;
		ar >> Y4;
		ar >> Y5;
		ar >> Y6;
		ar >> Y7;
		ar >> Y8;
		ar >> Y9;
		ar >> Y10;
		ar >> Z1;
		ar >> Z2;
		ar >> Z3;
		ar >> Z4;
		ar >> Z5;
		ar >> Z6;
		ar >> Z7;
		ar >> Z8;
		ar >> Z9;
		ar >> Z10;
		ar >> TIME;
		ar >> RAMOUNT;
		ar >> RLENGTH;
		ar >> RRING;
		ar >> RELEVATION;
		ar >> DP1;
		ar >> DP2;
		ar >> DP3;
		ar >> DP4;
		ar >> DP5;
		ar >> DP6;
		ar >> DP7;
		ar >> DP8;
		ar >> DP9;
		ar >> DP10;
		ar >> PP1;
		ar >> PP2;
		ar >> PP3;
		ar >> PP4;
		ar >> PP5;
		ar >> PP6;
		ar >> PP7;
		ar >> PP8;
		ar >> PP9;
		ar >> PP10;
		ar >> DEPOSITION1;
		ar >> DEPOSITION2;
		ar >> DEPOSITION3;
		ar >> DEPOSITION4;
		ar >> DEPOSITION5;
		ar >> DEPOSITION6;
		ar >> DEPOSITION7;
		ar >> DEPOSITION8;
		ar >> DEPOSITION9;
		ar >> DEPOSITION10;
		ar >> PRATE;
		ar >> SCCOEF1;
		ar >> SCCOEF2;
		ar >> SCCOEF3;
		ar >> SCCOEF4;
		ar >> SCCOEF5;
		ar >> SCCOEF6;
		ar >> SCCOEF7;
		ar >> SCCOEF8;
		ar >> SCCOEF9;
		ar >> SCCOEF10;
	}
}

/////////////////////////////////////////////////////////////////////////////
// CAirDoc diagnostics

#ifdef _DEBUG
void CAirDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAirDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAirDoc commands

void CAirDoc::OnDataData() 
{
	Cdata dlg;
	dlg.m_downwash = DOWNWASH;
	dlg.m_ruralurban = RURAL_URBAN;
	dlg.m_pa = PA;
	dlg.m_ta = TA;
	dlg.m_u = U;
	dlg.m_direction = WD;
	dlg.m_mix = MIX;
	dlg.m_heightref = HEIGHTREF;
	dlg.m_stabilityclass = STABILITYCLASS;	
	dlg.m_time = TIME;
	dlg.m_prate = PRATE;
	if (dlg.DoModal()==IDOK)
 	{
		DOWNWASH = dlg.m_downwash;
		RURAL_URBAN = dlg.m_ruralurban;
		PA = dlg.m_pa;
		TA = dlg.m_ta;
		U = dlg.m_u;
		WD = dlg.m_direction;
		MIX = dlg.m_mix;
		HEIGHTREF = dlg.m_heightref;
		STABILITYCLASS = dlg.m_stabilityclass;
		TIME = dlg.m_time;
		PRATE = dlg.m_prate;
		SetModifiedFlag();
	}
}

void CAirDoc::OnReceptorReceptorlocation() 
{
	Creceptor dlg;
	dlg.m_x1 = X1;
	dlg.m_x2 = X2;
	dlg.m_x3 = X3;
	dlg.m_x4 = X4;
	dlg.m_x5 = X5;
	dlg.m_x6 = X6;
	dlg.m_x7 = X7;
	dlg.m_x8 = X8;
	dlg.m_x9 = X9;
	dlg.m_x10 = X10;
	dlg.m_y1 = Y1;
	dlg.m_y2 = Y2;
	dlg.m_y3 = Y3;
	dlg.m_y4 = Y4;
	dlg.m_y5 = Y5;
	dlg.m_y6 = Y6;
	dlg.m_y7 = Y7;
	dlg.m_y8 = Y8;
	dlg.m_y9 = Y9;
	dlg.m_y10 = Y10;
	dlg.m_z1 = Z1;
	dlg.m_z2 = Z2;
	dlg.m_z3 = Z3;
	dlg.m_z4 = Z4;
	dlg.m_z5 = Z5;
	dlg.m_z6 = Z6;
	dlg.m_z7 = Z7;
	dlg.m_z8 = Z8;
	dlg.m_z9 = Z9;
	dlg.m_z10 = Z10;
	if (dlg.DoModal()==IDOK)
 	{
		X1 = dlg.m_x1;
		X2 = dlg.m_x2;
		X3 = dlg.m_x3;
		X4 = dlg.m_x4;
		X5 = dlg.m_x5;
		X6 = dlg.m_x6;
		X7 = dlg.m_x7;
		X8 = dlg.m_x8;
		X9 = dlg.m_x9;
		X10 = dlg.m_x10;
		Y1 = dlg.m_y1;
		Y2 = dlg.m_y2;
		Y3 = dlg.m_y3;
		Y4 = dlg.m_y4;
		Y5 = dlg.m_y5;
		Y6 = dlg.m_y6;
		Y7 = dlg.m_y7;
		Y8 = dlg.m_y8;
		Y9 = dlg.m_y9;
		Y10 = dlg.m_y10;
		Z1 = dlg.m_z1;
		Z2 = dlg.m_z2;
		Z3 = dlg.m_z3;
		Z4 = dlg.m_z4;
		Z5 = dlg.m_z5;
		Z6 = dlg.m_z6;
		Z7 = dlg.m_z7;
		Z8 = dlg.m_z8;
		Z9 = dlg.m_z9;
		Z10 = dlg.m_z10;
		SetModifiedFlag();
	}	
}

void CAirDoc::OnStack1Stack1data() 
{
	Cstack1 dlg;
	dlg.m_ts1 = TS1;
	dlg.m_vs1 = VS1;
	dlg.m_ds1 = DS1;
	dlg.m_q1 = Q1;
	dlg.m_stack1 = STACK1;
	dlg.m_buildingdownwash1 = BUILDINGDOWNWASH1;
	dlg.m_buoyancy1 = BUOYANCY1;
	dlg.m_buildinglocation1 = BUILDINGLOCATION1;
	dlg.m_stackx1 = STACKX1;
	dlg.m_stacky1 = STACKY1;
	dlg.m_stackz1 = STACKZ1;
	dlg.m_buildingheight1 = BUILDINGHEIGHT1;
	dlg.m_buildingwidth1 = BUILDINGWIDTH1;
	dlg.m_plumerise1 = PLUMERISE1;
	dlg.m_decay1 = DECAY1;
	dlg.m_deposition1 = DEPOSITION1;
	dlg.m_dp1 = DP1;
	dlg.m_pp1 = PP1;
	dlg.m_sccoef1 = SCCOEF1;
	if (dlg.DoModal()==IDOK)
 	{
		TS1 = dlg.m_ts1;
		VS1 = dlg.m_vs1;
		DS1 = dlg.m_ds1;
		Q1 = dlg.m_q1;
		STACK1 = dlg.m_stack1;
		BUILDINGDOWNWASH1 = dlg.m_buildingdownwash1;
		BUOYANCY1 = dlg.m_buoyancy1;
		BUILDINGLOCATION1 = dlg.m_buildinglocation1;
		STACKX1 = dlg.m_stackx1;
		STACKY1 = dlg.m_stacky1;
		STACKZ1 = dlg.m_stackz1;
		BUILDINGHEIGHT1 = dlg.m_buildingheight1;
		BUILDINGWIDTH1 = dlg.m_buildingwidth1;
		PLUMERISE1 = dlg.m_plumerise1;
		DECAY1 = dlg.m_decay1;
		DEPOSITION1 = dlg.m_deposition1;
		DP1 = dlg.m_dp1;
		PP1 = dlg.m_pp1;
		SCCOEF1 = dlg.m_sccoef1;

		SetModifiedFlag();
	}	
}

void CAirDoc::OnStack2Stack2data() 
{
	Cstack2 dlg;
	dlg.m_ts2 = TS2;
	dlg.m_vs2 = VS2;
	dlg.m_ds2 = DS2;
	dlg.m_q2 = Q2;
	dlg.m_stack2 = STACK2;
	dlg.m_buildingdownwash2 = BUILDINGDOWNWASH2;
	dlg.m_buoyancy2 = BUOYANCY2;
	dlg.m_buildinglocation2 = BUILDINGLOCATION2;
	dlg.m_stackx2 = STACKX2;
	dlg.m_stacky2 = STACKY2;
	dlg.m_stackz2 = STACKZ2;
	dlg.m_buildingheight2 = BUILDINGHEIGHT2;
	dlg.m_buildingwidth2 = BUILDINGWIDTH2;
	dlg.m_plumerise2 = PLUMERISE2;
	dlg.m_decay2 = DECAY2;
	dlg.m_deposition2 = DEPOSITION2;
	dlg.m_dp2 = DP2;
	dlg.m_pp2 = PP2;
	dlg.m_sccoef2 = SCCOEF2;
	if (dlg.DoModal()==IDOK)
 	{
		TS2 = dlg.m_ts2;
		VS2 = dlg.m_vs2;
		DS2 = dlg.m_ds2;
		Q2 = dlg.m_q2;
		STACK2 = dlg.m_stack2;
		BUILDINGDOWNWASH2 = dlg.m_buildingdownwash2;
		BUOYANCY2 = dlg.m_buoyancy2;
		BUILDINGLOCATION2 = dlg.m_buildinglocation2;
		STACKX2 = dlg.m_stackx2;
		STACKY2 = dlg.m_stacky2;
		STACKZ2 = dlg.m_stackz2;
		BUILDINGHEIGHT2 = dlg.m_buildingheight2;
		BUILDINGWIDTH2 = dlg.m_buildingwidth2;
		PLUMERISE2 = dlg.m_plumerise2;
		DECAY2 = dlg.m_decay2;
		DEPOSITION2 = dlg.m_deposition2;
		DP2 = dlg.m_dp2;
		PP2 = dlg.m_pp2;
		SCCOEF2 = dlg.m_sccoef2;
		SetModifiedFlag();		
	}	
}

void CAirDoc::OnStack3Stack3data() 
{
	Cstack3 dlg;
	dlg.m_ts3 = TS3;
	dlg.m_vs3 = VS3;
	dlg.m_ds3 = DS3;
	dlg.m_q3 = Q3;
	dlg.m_stack3 = STACK3;
	dlg.m_buildingdownwash3 = BUILDINGDOWNWASH3;
	dlg.m_buoyancy3 = BUOYANCY3;
	dlg.m_buildinglocation3 = BUILDINGLOCATION3;
	dlg.m_stackx3 = STACKX3;
	dlg.m_stacky3 = STACKY3;
	dlg.m_stackz3 = STACKZ3;
	dlg.m_buildingheight3 = BUILDINGHEIGHT3;
	dlg.m_buildingwidth3 = BUILDINGWIDTH3;
	dlg.m_plumerise3 = PLUMERISE3;
	dlg.m_decay3 = DECAY3;
	dlg.m_deposition3 = DEPOSITION3;
	dlg.m_dp3 = DP3;
	dlg.m_pp3 = PP3;
	dlg.m_sccoef3 = SCCOEF3;
	if (dlg.DoModal()==IDOK)
 	{
		TS3 = dlg.m_ts3;
		VS3 = dlg.m_vs3;
		DS3 = dlg.m_ds3;
		Q3 = dlg.m_q3;
		STACK3 = dlg.m_stack3;
		BUILDINGDOWNWASH3 = dlg.m_buildingdownwash3;
		BUOYANCY3 = dlg.m_buoyancy3;
		BUILDINGLOCATION3 = dlg.m_buildinglocation3;
		STACKX3 = dlg.m_stackx3;
		STACKY3 = dlg.m_stacky3;
		STACKZ3 = dlg.m_stackz3;
		BUILDINGHEIGHT3 = dlg.m_buildingheight3;
		BUILDINGWIDTH3 = dlg.m_buildingwidth3;
		PLUMERISE3 = dlg.m_plumerise3;
		DECAY3 = dlg.m_decay3;
		DEPOSITION3 = dlg.m_deposition3;
		DP3 = dlg.m_dp3;
		PP3 = dlg.m_pp3;
		SCCOEF3 = dlg.m_sccoef3;
		SetModifiedFlag();
	}
	
}

double CAirDoc::SigmaY(double x)
{
	//Pasquill-Gifford sigmay for rural areas
 	double c, d;
 	double coorx = x;
	double ysigma;
	double sigmay;
	double TH;

switch (GetRURAL_URBAN())
{
case TRUE:					//urban sigma y
	switch (GetSTABILITYCLASS())
	{
	case 0:
		ysigma = 0.32 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	case 1:
		ysigma = 0.32 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	case 2:
		ysigma = 0.22 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	case 3:
		ysigma = 0.16 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	case 4:
		ysigma = 0.11 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	case 5:
		ysigma = 0.11 * (x * 1000) * pow((1.0 + (0.0004 * (x * 1000))),-0.5);
		break;
	}
	break;
case FALSE:					//rural sigma y
 	switch (GetSTABILITYCLASS())
 	{
	case 0:
 		c = 24.1670;
		d = 2.5334;
		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);	
 		break;	
	case 1:
 		c = 18.3330;
		d = 1.8096;
		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);	
 		break;	
	case 2:
 		c = 12.5000;
		d = 1.0857;
 		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);	
		break;
 	case 3:
 		c = 8.3330;
		d = 0.72382;
 		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);	
		break;
 	case 4:
 		c = 6.2500;
		d = 0.54287;
 		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);	
		break;
 	case 5:
 		c = 4.1667;
		d = 0.36191;
		TH = 0.017453293 * (c - (d * log(x)));
		ysigma = 465.11628 * x * tan(TH);		
		break;
 	}	
	break;
}
	sigmay = ysigma;
	return sigmay;
}

double CAirDoc::SigmaZ(double x)
{
double a, b;
double coorx = x;
double zsigma, sigmaz;

switch (GetRURAL_URBAN())
{
case TRUE:				//sigma z for urban

	switch (GetSTABILITYCLASS())
	{
	case 0:
		sigmaz = 0.24 * (x * 1000) * pow((1.0 + (0.001 * (x * 1000))),0.5);
		break;
	case 1:
		sigmaz = 0.24 * (x * 1000) * pow((1.0 + (0.001 * (x * 1000))),0.5);
		break;
	case 2:
		sigmaz = 0.20 * (x * 1000);
		break;
	case 3:
		sigmaz = 0.14 * (x * 1000) * pow((1.0 + (0.0003 * (x * 1000))),-0.5);
		break;
	case 4:
		sigmaz = 0.08 * (x * 1000) * pow((1.0 + (0.0015 * (x * 1000))),-0.5);
		break;
	case 5:
		sigmaz = 0.08 * (x * 1000) * pow((1.0 + (0.0015 * (x * 1000))),-0.5);
		break;
	}
	break;
case FALSE:						//sigma z for rural
	switch (GetSTABILITYCLASS())
	{
	case 0:
 		if (coorx <= 0.1)
		{
 			a = 122.800;
 			b = 0.94470;
		}
 		else if (0.1 < coorx && coorx <= 0.15)
		{
 			a = 158.080;
 			b = 1.05420;
		}
		else if (0.15 < coorx && coorx <= 0.20)
		{
 			a = 170.220;
 			b = 1.09320;
		}
		else if (0.20 < coorx && coorx <= 0.25)
		{
 			a = 179.520;
 			b = 1.12620;
		}
		else if (0.25 < coorx && coorx <= 0.30)
		{
 			a = 217.410;
 			b = 1.26440;
		}
		else if (0.30 < coorx && coorx <= 0.40)
		{
 			a = 258.890;
 			b = 1.40940;
		}
		else if (0.40 < coorx && coorx <= 0.50)
		{
 			a = 346.750;
 			b = 1.72830;
		}
		else if (0.50 < coorx && coorx <= 3.11)
		{
 			a = 453.850;
 			b = 2.11660;
		}
		else if (coorx > 3.11)
		{
			a = 1000;			//add any value to exceed 5000 m for sigmay
			b = 1;
		}
 		break;
	case 1:
 		if (coorx <= 0.20)
		{
 			a = 90.673;
 			b = 0.93198;
		}
 		else if (0.20 < coorx && coorx <= 0.40)
		{
 			a = 98.483;
 			b = 0.98332;
		}
		else if (coorx > 0.40)
		{
			a = 109.300;
			b = 1.09710;
		}
 		break; 
	case 2:	
 			a = 61.141;
 			b = 0.91465;
 		break;
	case 3:
 		if (coorx <= 0.30)
		{
 			a = 34.459;
 			b = 0.86974;
		}
 		else if (0.30 < coorx && coorx <= 1.00)
		{
 			a = 32.093;
 			b = 0.81066;
		}
		else if (1.00 < coorx && coorx <= 3.00)
		{
 			a = 32.093;
 			b = 0.64403;
		}
		else if (3.00 < coorx && coorx <= 10.00)
		{
 			a = 33.504;
 			b = 0.60486;
		}
		else if (10.00 < coorx && coorx <= 30.00)
		{
 			a = 36.650;
 			b = 0.56589;
		}
		else if (coorx > 30.00)
		{
 			a = 44.053;
 			b = 0.51179;
		}
 		break;
	case 4:
 		if (coorx <= 0.1)
		{
 			a = 24.260;
 			b = 0.83660;
		}
		else if (0.1 < coorx && coorx <= 0.30)
		{
 			a = 23.331;
 			b = 0.81956;
		}
 		else if (0.30 < coorx && coorx <= 1.00)
		{
 			a = 21.628;
 			b = 0.75660;
		}
		else if (1.00 < coorx && coorx <= 2.00)
		{
 			a = 21.628;
 			b = 0.63077;
		}
		else if (2.00 < coorx && coorx <= 4.00)
		{
 			a = 22.534;
 			b = 0.57154;
		}
		else if (4.00 < coorx && coorx <= 10.00)
		{
 			a = 24.703;
 			b = 0.50527;
		}
		else if (10.00 < coorx && coorx <= 20.00)
		{
 			a = 26.970;
 			b = 0.46713;
		}
		else if (20.00 < coorx && coorx <= 40.00)
		{
 			a = 35.420;
 			b = 0.37615;
		}
		else if (coorx > 40.00)
		{
			a = 47.618;
			b = 0.29592;
		}
		break;
	case 5:
 		if (coorx <= 0.20)
 		{
 			a = 15.209;
 			b = 0.81558;
 		}
 		else if (0.20 < coorx && coorx <= 0.70)
 		{
 			a = 14.457;
			b = 0.78407;
 		}
		else if (0.70 < coorx && coorx <= 1.00)
 		{
 			a = 13.953;
			b = 0.68465;
 		}
		else if (1.00 < coorx && coorx <= 2.00)
 		{
 			a = 13.953;
			b = 0.63227;
 		}
		else if (2.00 < coorx && coorx <= 3.00)
 		{
 			a = 14.823;
			b = 0.54503;
 		}
		else if (3.00 < coorx && coorx <= 7.00)
 		{
 			a = 16.187;
			b = 0.46490;
 		}
		else if (7.00 < coorx && coorx <= 15.00)
 		{
 			a = 17.836;
			b = 0.41507;
 		}
		else if (15.00 < coorx && coorx <= 30.00)
 		{
 			a = 22.651;
			b = 0.32681;
 		}
		else if (30.00 < coorx && coorx <= 60.00)
 		{
 			a = 27.074;
			b = 0.27436;
 		}
		else if (coorx > 60.00)
		{
			a = 34.219;
			b = 0.21716;
		}
 		break;
	}
	zsigma = a * pow(x,b);	
	switch (GetSTABILITYCLASS())
	{
	case 0:
	case 1:
	case 2:
		if (zsigma < 5000)
			sigmaz = zsigma;
		else
			sigmaz = 5000;
		break;
	
	case 3:
	case 4:
	case 5:
		sigmaz = zsigma;
		break;
	}
	break;
}	
return sigmaz;
}

double CAirDoc::windchange1()
{
	double p;
 	double windheight = GetSTACK1()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange2()
{
	double p;
 	double windheight = GetSTACK2()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange3()
{
	double p;
 	double windheight = GetSTACK3()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:

	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::StackHeight1(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS1();
	double ds = GetDS1();
	double vs = GetVS1();
	double stack = GetSTACK1();
	double us = windchange1();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight2(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum
	double ts = GetTS2();
	double ds = GetDS2();
	double vs = GetVS2();
	double stack = GetSTACK2();
	double us = windchange2();
 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight3(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum
	double ts = GetTS3();
	double ds = GetDS3();
	double vs = GetVS3();
	double stack = GetSTACK3();
	double us = windchange3();
 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

void CAirDoc::Buoyancy1(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight1(x) - GetSTACK1())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight1(x) - GetSTACK1())/3.5,2),0.5);
}

void CAirDoc::Buoyancy2(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight2(x) - GetSTACK2())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight2(x) - GetSTACK2())/3.5,2),0.5);
}

void CAirDoc::Buoyancy3(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight3(x) - GetSTACK3())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight3(x) - GetSTACK3())/3.5,2),0.5);
}

void CAirDoc::VirtualDistanceZ(double x, double & a1, double & b1)
{
	double a, b;
	switch (GetSTABILITYCLASS())			//calculating virtual distance for sigma z
	{
	case 0:
 		if (x <= 0.1)
		{
 			a = 122.800;
 			b = 0.94470;
		}
 		else if (0.1 < x && x <= 0.15)
		{
 			a = 158.080;
 			b = 1.05420;
		}
		else if (0.15 < x && x <= 0.20)
		{
 			a = 170.220;
 			b = 1.09320;
		}
		else if (0.20 < x && x <= 0.25)
		{
 			a = 179.520;
 			b = 1.12620;
		}
		else if (0.25 < x && x <= 0.30)
		{
 			a = 217.410;
 			b = 1.26440;
		}
		else if (0.30 < x && x <= 0.40)
		{
 			a = 258.890;
 			b = 1.40940;
		}
		else if (0.40 < x && x <= 0.50)
		{
 			a = 346.750;
 			b = 1.72830;
		}
		else if (0.50 < x && x <= 3.11)
		{
 			a = 453.850;
 			b = 2.11660;
		}
		else if (x > 3.11)
		{
			a = 1000;			//add any value to exceed 5000 m for sigma z
			b = 1;
		}
 		break;
	case 1:
 		if (x <= 0.20)
		{
 			a = 90.673;
 			b = 0.93198;
		}
 		else if (0.20 < x && x <= 0.40)
		{
 			a = 98.483;
 			b = 0.98332;
		}
		else if (x > 0.40)
		{
			a = 109.300;
			b = 1.09710;
		}
 		break;
	case 2:	
 			a = 61.141;
 			b = 1.09710;
 		break;
	case 3:
 		if (x <= 0.30)
		{
 			a = 34.459;
 			b = 0.86974;
		}
 		else if (0.30 < x && x <= 1.00)
		{
 			a = 32.093;
 			b = 0.81066;
		}
		else if (1.00 < x && x <= 3.00)
		{
 			a = 32.093;
 			b = 0.64403;
		}
		else if (3.00 < x && x <= 10.00)
		{
 			a = 33.504;
 			b = 0.60486;
		}
		else if (10.00 < x && x <= 30.00)
		{
 			a = 36.650;
 			b = 0.56589;
		}
		else if (x > 30.00)
		{
 			a = 44.053;
 			b = 0.51179;
		}
 		break;
	case 4:
 		if (x <= 0.1)
		{
 			a = 24.260;
 			b = 0.83660;
		}
		else if (0.1 < x && x <= 0.30)
		{
 			a = 23.331;
 			b = 0.81956;
		}
 		else if (0.30 < x && x <= 1.00)
		{
 			a = 21.628;
 			b = 0.75660;
		}
		else if (1.00 < x && x <= 2.00)
		{
 			a = 21.628;
 			b = 0.63077;
		}
		else if (2.00 < x && x <= 4.00)
		{
 			a = 22.534;
 			b = 0.57154;
		}
		else if (4.00 < x && x <= 10.00)
		{
 			a = 24.703;
 			b = 0.50527;
		}
		else if (10.00 < x && x <= 20.00)
		{
 			a = 26.970;
 			b = 0.46713;
		}
		else if (20.00 < x && x <= 40.00)
		{
 			a = 35.420;
 			b = 0.37615;
		}
		else if (x > 40.00)
		{
			a = 47.618;
			b = 0.29592;
		}
		break;
	case 5:
 		if (x <= 0.20)
 		{
 			a = 15.209;
 			b = 0.81558;
 		}
 		else if (0.20 < x && x <= 0.70)
 		{
 			a = 14.457;
			b = 0.78407;
 		}
		else if (0.70 < x && x <= 1.00)
 		{
 			a = 13.953;
			b = 0.68465;
 		}
		else if (1.00 < x && x <= 2.00)
 		{
 			a = 13.953;
			b = 0.63227;
 		}
		else if (2.00 < x && x <= 3.00)
 		{
 			a = 14.823;
			b = 0.54503;
 		}
		else if (3.00 < x && x <= 7.00)
 		{
 			a = 16.187;
			b = 0.46490;
 		}
		else if (7.00 < x && x <= 15.00)
 		{
 			a = 17.836;
			b = 0.41507;
 		}
		else if (15.00 < x && x <= 30.00)
 		{
 			a = 22.651;
			b = 0.32681;
 		}
		else if (30.00 < x && x <= 60.00)
 		{
 			a = 27.074;
			b = 0.27436;
 		}
		else if (x > 60.00)
		{
			a = 34.219;
			b = 0.21716;
		}
 		break;
	}
	a1 = a;
	b1 = b;
}

void CAirDoc::VirtualDistanceY(double & p1, double & q1)
{
	double p, q;						//calculating virtual distance for sigma y
	switch (GetSTABILITYCLASS())
	{
	case 0:
		p = 209.14;
		q = 0.890;
		break;
	case 1:
		p = 154.14;
		q = 0.902;
		break;
	case 2:
		p = 103.26;
		q = 0.917;
		break;
	case 3:
		p = 68.26;
		q = 0.919;
		break;
	case 4:
		p = 51.06;
		q = 0.921;
		break;
	case 5:
		p = 33.92;
		q = 0.919;
		break;
	}
	p1 = p;
	q1 = q;
}

void CAirDoc::HuberSnyder1(double x, double & ysigma1, double & zsigma1)
{
	
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double vs = GetVS1();
	double ds = GetDS1();
	double ts = GetTS1();
	double stack = GetSTACK1();
	double us = windchange1();
	BOOL buildinglocation = GetBUILDINGLOCATION1();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;

}

void CAirDoc::HuberSnyder2(double x, double & ysigma1, double & zsigma1)
{
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	double vs = GetVS2();
	double ds = GetDS2();
	double ts = GetTS2();
	double stack = GetSTACK2();
	double us = windchange2();
	BOOL buildinglocation = GetBUILDINGLOCATION2();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder3(double x, double & ysigma1, double & zsigma1)
{
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	double vs = GetVS3();
	double ds = GetDS3();
	double ts = GetTS3();
	double stack = GetSTACK3();
	double us = windchange3();
	BOOL buildinglocation = GetBUILDINGLOCATION3();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}
ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::SchulmanScire1(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double vs = GetVS1();
	double ds = GetDS1();
	double ts = GetTS1();
	double stack = GetSTACK1();
	double us = windchange1();	
	BOOL buildinglocation = GetBUILDINGLOCATION1();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction1(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire2(double x, double & ysigma2, double & zsigma2)
{
//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	double vs = GetVS2();
	double ds = GetDS2();
	double ts = GetTS2();
	double stack = GetSTACK2();
	double us = windchange2();	
	BOOL buildinglocation = GetBUILDINGLOCATION2();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction2(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire3(double x, double & ysigma2, double & zsigma2)
{
//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	double vs = GetVS3();
	double ds = GetDS3();
	double ts = GetTS3();
	double stack = GetSTACK3();
	double us = windchange3();	
	BOOL buildinglocation = GetBUILDINGLOCATION3();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}	
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction3(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

double CAirDoc::Vertical1(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK1();
	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH1();
	int plumerise = GetPLUMERISE1();
	double mix = GetMIX() + (z * 1000);
	double us = windchange1();
	double dp = GetDP1();
	double pp = GetPP1();
	BOOL deposition = GetDEPOSITION1();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire1(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder1(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}

	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight1(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise1(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ1() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ1()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical2(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK2();
	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH2();
	int plumerise = GetPLUMERISE2();
	double mix = GetMIX() + (z * 1000);
	double us = windchange2();
	double dp = GetDP2();
	double pp = GetPP2();
	BOOL deposition = GetDEPOSITION2();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire2(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder2(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight2(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise2(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ2() * 1000) - (z * 1000);
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ2()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical3(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK3();
	double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH3();
	int plumerise = GetPLUMERISE3();
	double mix = GetMIX() + (z * 1000);
	double us = windchange3();
	double dp = GetDP3();
	double pp = GetPP3();
	BOOL deposition = GetDEPOSITION3();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire3(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;			
		}
		else
		{
			HuberSnyder3(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;			
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);		
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight3(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise3(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ3() * 1000) - (z * 1000);
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ3()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;
	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::SchulmanPlumeRise1(double x)
{
	
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double ds = GetDS1();
	double vs = GetVS1();
	double ts = GetTS1();
	double us = windchange1();
	double stack = GetSTACK1();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire1(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	

}

double CAirDoc::SchulmanFunction(long double y, long double z, long double w)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - fSchulmanFunction(xN,y,z,w) / primeSchulmanFunction(xN,y,z);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}
		while (absDiff >= 0.00001 && iter < MaxIter);			
		
	return xN;
}

double CAirDoc::fSchulmanFunction(double x, long double y, long double z, long double w)
{
	return ((x*x*x) + (y*x*x) + (z*x) - w);
}

double CAirDoc::primeSchulmanFunction(double x, long double y, long double z)
{
	return ((3*x*x) + (2*y*x) + z);
}

double CAirDoc::SchulmanPlumeRise2(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	double ds = GetDS2();
	double vs = GetVS2();
	double ts = GetTS2();
	double us = windchange2();
	double stack = GetSTACK2();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire1(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise3(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	double ds = GetDS3();
	double vs = GetVS3();
	double ts = GetTS3();
	double us = windchange3();
	double stack = GetSTACK3();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire1(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::fPrime(double x)
{
return ((0.0001728 * x * x) + (0.1152 * x));
}

double CAirDoc::RootFunction1(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function1(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction2(double x)
{
const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function2(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction3(double x)
{
const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function3(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}
double CAirDoc::function1(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double vs = GetVS1();
	double ds = GetDS1();
	double ts = GetTS1();
	double us = windchange1();
	double stack = GetSTACK1();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function2(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	double vs = GetVS2();
	double ds = GetDS2();
	double ts = GetTS2();
	double us = windchange2();
	double stack = GetSTACK2();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function3(double x, double distance1)
{
double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	double vs = GetVS3();
	double ds = GetDS3();
	double ts = GetTS3();
	double us = windchange3();
	double stack = GetSTACK3();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::concentration1(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire1(x, sigmay1, sigmaz1);
	HuberSnyder1(x, sigmay2, sigmaz2);
	Buoyancy1(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH1();
	BOOL buoyancy = GetBUOYANCY1();
	
	double stack = GetSTACK1();
	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double sccoeff = GetSc1();
	double prate = GetPrate();
	double us = windchange1();
	double sc = sccoeff * prate;
	double Q = GetQ1() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical1(x,z);

	double d;
	if (decay1(x) > 0)
		d = decay1(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange1())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration2(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire2(x, sigmay1, sigmaz1);
	HuberSnyder2(x, sigmay2, sigmaz2);
	Buoyancy2(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH2();
	BOOL buoyancy = GetBUOYANCY2();
	double stack = GetSTACK2();
	double buildingheight = GetBUILDINGHEIGHT2();
	double buildingwidth = GetBUILDINGWIDTH2();
	double sccoeff = GetSc2();
	double prate = GetPrate();
	double us = windchange2();
	double sc = sccoeff * prate;
	double Q = GetQ2() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:
			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y  * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical2(x,z);
	
	double d;
	if (decay2(x) > 0)
		d = decay2(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange2())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration3(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire3(x, sigmay1, sigmaz1);
	HuberSnyder3(x, sigmay2, sigmaz2);
	Buoyancy3(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH3();
	BOOL buoyancy = GetBUOYANCY3();
	double stack = GetSTACK3();
	double buildingheight = GetBUILDINGHEIGHT3();
	double buildingwidth = GetBUILDINGWIDTH3();
	double sccoeff = GetSc3();
	double prate = GetPrate();
	double us = windchange3();
	double sc = sccoeff * prate;
	double Q = GetQ3() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:
			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y  * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical3(x,z);

	double d;
	if (decay3(x) > 0)
		d = decay3(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange3())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::DistanceX1(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX1();
	


		stacky1 = GetSTACKY1();
	

	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX2(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX2();
	

	
		stacky1 = GetSTACKY2();
	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX3(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX3();
	

	
		stacky1 = GetSTACKY3();
	

	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY1(double x, double y)
{
	double distance1, stackx1, stacky1;


		stackx1 = GetSTACKX1();



		stacky1 = GetSTACKY1();

	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY2(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX2();
	
		stacky1 = GetSTACKY2();

	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY3(double x, double y)
{
	double distance1, stackx1, stacky1;


		stackx1 = GetSTACKX3();
	
		stacky1 = GetSTACKY3();


	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::Receptor1()
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}

double CAirDoc::Receptor2()
{
	double x = GetX2();
	double y = GetY2();
	double z = GetZ2();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}


double CAirDoc::Receptor3()
{
	double x = GetX3();
	double y = GetY3();
	double z = GetZ3();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}

double CAirDoc::Receptor4()
{
	double x = GetX4();
	double y = GetY4();
	double z = GetZ4();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}


double CAirDoc::Receptor5()
{
	double x = GetX5();
	double y = GetY5();
	double z = GetZ5();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}



double CAirDoc::Receptor6()
{
	double x = GetX6();
	double y = GetY6();
	double z = GetZ6();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}

double CAirDoc::Receptor7()
{
	double x = GetX7();
	double y = GetY7();
	double z = GetZ7();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}



double CAirDoc::Receptor8()
{
	double x = GetX8();
	double y = GetY8();
	double z = GetZ8();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}



double CAirDoc::Receptor9()
{
	double x = GetX9();
	double y = GetY9();
	double z = GetZ9();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}

double CAirDoc::time(double concentration)
{
	double concentration1;
	if (GetTIME() >= 10)
		concentration1 = concentration * pow(10/GetTIME(),0.5);
	else
		concentration1 = concentration * pow(10/GetTIME(),0.2);
	return concentration1;
}

double CAirDoc::Receptor10()
{
	double x = GetX10();
	double y = GetY10();
	double z = GetZ10();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	return sumtotal;
	
}

void CAirDoc::OnStack4Stack4data() 
{
	Cstack4 dlg;
	dlg.m_ts4 = TS4;
	dlg.m_vs4 = VS4;
	dlg.m_ds4 = DS4;
	dlg.m_q4 = Q4;
	dlg.m_stack4 = STACK4;
	dlg.m_buildingdownwash4 = BUILDINGDOWNWASH4;
	dlg.m_buoyancy4 = BUOYANCY4;
	dlg.m_buildinglocation4 = BUILDINGLOCATION4;
	dlg.m_stackx4 = STACKX4;
	dlg.m_stacky4 = STACKY4;
	dlg.m_stackz4 = STACKZ4;
	dlg.m_buildingheight4 = BUILDINGHEIGHT4;
	dlg.m_buildingwidth4 = BUILDINGWIDTH4;
	dlg.m_plumerise4 = PLUMERISE4;
	dlg.m_decay4 = DECAY4;
	dlg.m_deposition4 = DEPOSITION4;
	dlg.m_dp4 = DP4;
	dlg.m_pp4 = PP4;
	dlg.m_sccoef4 = SCCOEF4;
	if (dlg.DoModal()==IDOK)
 	{
		TS4 = dlg.m_ts4;
		VS4 = dlg.m_vs4;
		DS4 = dlg.m_ds4;
		Q4 = dlg.m_q4;
		STACK4 = dlg.m_stack4;
		BUILDINGDOWNWASH4 = dlg.m_buildingdownwash4;
		BUOYANCY4 = dlg.m_buoyancy4;
		BUILDINGLOCATION4 = dlg.m_buildinglocation4;
		STACKX4 = dlg.m_stackx4;
		STACKY4 = dlg.m_stacky4;
		STACKZ4 = dlg.m_stackz4;
		BUILDINGHEIGHT4 = dlg.m_buildingheight4;
		BUILDINGWIDTH4 = dlg.m_buildingwidth4;
		PLUMERISE4 = dlg.m_plumerise4;
		DECAY4 = dlg.m_decay4;
		DEPOSITION4 = dlg.m_deposition4;
		DP4 = dlg.m_dp4;
		PP4 = dlg.m_pp4;
		SCCOEF4 = dlg.m_sccoef4;
		SetModifiedFlag();
 		
	}	
	
}

void CAirDoc::OnStack5Stack5data() 
{
	Cstack5 dlg;
	dlg.m_ts5 = TS5;
	dlg.m_vs5 = VS5;
	dlg.m_ds5 = DS5;
	dlg.m_q5 = Q5;
	dlg.m_stack5 = STACK5;
	dlg.m_buildingdownwash5 = BUILDINGDOWNWASH5;
	dlg.m_buoyancy5 = BUOYANCY5;
	dlg.m_buildinglocation5 = BUILDINGLOCATION5;
	dlg.m_stackx5 = STACKX5;
	dlg.m_stacky5 = STACKY5;
	dlg.m_stackz5 = STACKZ5;
	dlg.m_buildingheight5 = BUILDINGHEIGHT5;
	dlg.m_buildingwidth5 = BUILDINGWIDTH5;
	dlg.m_plumerise5 = PLUMERISE5;
	dlg.m_decay5 = DECAY5;
	dlg.m_deposition5 = DEPOSITION5;
	dlg.m_dp5 = DP5;
	dlg.m_pp5 = PP5;
	dlg.m_sccoef5 = SCCOEF5;
	if (dlg.DoModal()==IDOK)
 	{
		TS5 = dlg.m_ts5;
		VS5 = dlg.m_vs5;
		DS5 = dlg.m_ds5;
		Q5 = dlg.m_q5;
		STACK5 = dlg.m_stack5;
		BUILDINGDOWNWASH5 = dlg.m_buildingdownwash5;
		BUOYANCY5 = dlg.m_buoyancy5;
		BUILDINGLOCATION5 = dlg.m_buildinglocation5;
		STACKX5 = dlg.m_stackx5;
		STACKY5 = dlg.m_stacky5;
		STACKZ5 = dlg.m_stackz5;
		BUILDINGHEIGHT5 = dlg.m_buildingheight5;
		BUILDINGWIDTH5 = dlg.m_buildingwidth5;
		PLUMERISE5 = dlg.m_plumerise5;
		DECAY5 = dlg.m_decay5;
		DEPOSITION5 = dlg.m_deposition5;
		DP5 = dlg.m_dp5;
		PP5 = dlg.m_pp5;
		SCCOEF5 = dlg.m_sccoef5;
		SetModifiedFlag(); 		
	}
}

void CAirDoc::OnStack6Stack6data() 
{
	Cstack6 dlg;
	dlg.m_ts6 = TS6;
	dlg.m_vs6 = VS6;
	dlg.m_ds6 = DS6;
	dlg.m_q6 = Q6;
	dlg.m_stack6 = STACK6;
	dlg.m_buildingdownwash6 = BUILDINGDOWNWASH6;
	dlg.m_buoyancy6 = BUOYANCY6;
	dlg.m_buildinglocation6 = BUILDINGLOCATION6;
	dlg.m_stackx6 = STACKX6;
	dlg.m_stacky6 = STACKY6;
	dlg.m_stackz6 = STACKZ6;
	dlg.m_buildingheight6 = BUILDINGHEIGHT6;
	dlg.m_buildingwidth6 = BUILDINGWIDTH6;
	dlg.m_plumerise6 = PLUMERISE6;
	dlg.m_decay6 = DECAY6;
	dlg.m_deposition6 = DEPOSITION6;
	dlg.m_dp6 = DP6;
	dlg.m_pp6 = PP6;
	dlg.m_sccoef6 = SCCOEF6;
	if (dlg.DoModal()==IDOK)
 	{
		TS6 = dlg.m_ts6;
		VS6 = dlg.m_vs6;
		DS6 = dlg.m_ds6;
		Q6 = dlg.m_q6;
		STACK6 = dlg.m_stack6;
		BUILDINGDOWNWASH6 = dlg.m_buildingdownwash6;
		BUOYANCY6 = dlg.m_buoyancy6;
		BUILDINGLOCATION6 = dlg.m_buildinglocation6;
		STACKX6 = dlg.m_stackx6;
		STACKY6 = dlg.m_stacky6;
		STACKZ6 = dlg.m_stackz6;
		BUILDINGHEIGHT6 = dlg.m_buildingheight6;
		BUILDINGWIDTH6 = dlg.m_buildingwidth6;
		PLUMERISE6 = dlg.m_plumerise6;
		DECAY6 = dlg.m_decay6;
		DEPOSITION6 = dlg.m_deposition6;
		DP6 = dlg.m_dp6;
		PP6 = dlg.m_pp6;
		SCCOEF6 = dlg.m_sccoef6;
		SetModifiedFlag();		
	}	
}

void CAirDoc::OnStack7Stack7data() 
{
	Cstack7 dlg;
	dlg.m_ts7 = TS7;
	dlg.m_vs7 = VS7;
	dlg.m_ds7 = DS7;
	dlg.m_q7 = Q7;
	dlg.m_stack7 = STACK7;
	dlg.m_buildingdownwash7 = BUILDINGDOWNWASH7;
	dlg.m_buoyancy7 = BUOYANCY7;
	dlg.m_buildinglocation7 = BUILDINGLOCATION7;
	dlg.m_stackx7 = STACKX7;
	dlg.m_stacky7 = STACKY7;
	dlg.m_stackz7 = STACKZ7;
	dlg.m_buildingheight7 = BUILDINGHEIGHT7;
	dlg.m_buildingwidth7 = BUILDINGWIDTH7;
	dlg.m_plumerise7 = PLUMERISE7;
	dlg.m_decay7 = DECAY7;
	dlg.m_deposition7 = DEPOSITION7;
	dlg.m_dp7 = DP7;
	dlg.m_pp7 = PP7;
	dlg.m_sccoef7 = SCCOEF7;
	if (dlg.DoModal()==IDOK)
 	{
		TS7 = dlg.m_ts7;
		VS7 = dlg.m_vs7;
		DS7 = dlg.m_ds7;
		Q7 = dlg.m_q7;
		STACK7 = dlg.m_stack7;
		BUILDINGDOWNWASH7 = dlg.m_buildingdownwash7;
		BUOYANCY7 = dlg.m_buoyancy7;
		BUILDINGLOCATION7 = dlg.m_buildinglocation7;
		STACKX7 = dlg.m_stackx7;
		STACKY7 = dlg.m_stacky7;
		STACKZ7 = dlg.m_stackz7;
		BUILDINGHEIGHT7 = dlg.m_buildingheight7;
		BUILDINGWIDTH7 = dlg.m_buildingwidth7;
		PLUMERISE7 = dlg.m_plumerise7;
		DECAY7 = dlg.m_decay7;
		DEPOSITION7 = dlg.m_deposition7;
		DP7 = dlg.m_dp7;
		PP7 = dlg.m_pp7;
		SCCOEF7 = dlg.m_sccoef7;
		SetModifiedFlag();		
	}
}

void CAirDoc::OnStack8Stack8data() 
{
	Cstack8 dlg;
	dlg.m_ts8 = TS8;
	dlg.m_vs8 = VS8;
	dlg.m_ds8 = DS8;
	dlg.m_q8 = Q8;
	dlg.m_stack8 = STACK8;
	dlg.m_buildingdownwash8 = BUILDINGDOWNWASH8;
	dlg.m_buoyancy8 = BUOYANCY8;
	dlg.m_buildinglocation8 = BUILDINGLOCATION8;
	dlg.m_stackx8 = STACKX8;
	dlg.m_stacky8 = STACKY8;
	dlg.m_stackz8 = STACKZ8;
	dlg.m_buildingheight8 = BUILDINGHEIGHT8;
	dlg.m_buildingwidth8 = BUILDINGWIDTH8;
	dlg.m_plumerise8 = PLUMERISE8;
	dlg.m_decay8 = DECAY8;
	dlg.m_deposition8 = DEPOSITION8;
	dlg.m_dp8 = DP8;
	dlg.m_pp8 = PP8;
	dlg.m_sccoef8 = SCCOEF8;
	if (dlg.DoModal()==IDOK)
 	{
		TS8 = dlg.m_ts8;
		VS8 = dlg.m_vs8;
		DS8 = dlg.m_ds8;
		Q8 = dlg.m_q8;
		STACK8 = dlg.m_stack8;
		BUILDINGDOWNWASH8 = dlg.m_buildingdownwash8;
		BUOYANCY8 = dlg.m_buoyancy8;
		BUILDINGLOCATION8 = dlg.m_buildinglocation8;
		STACKX8 = dlg.m_stackx8;
		STACKY8 = dlg.m_stacky8;
		STACKZ8 = dlg.m_stackz8;
		BUILDINGHEIGHT8 = dlg.m_buildingheight8;
		BUILDINGWIDTH8 = dlg.m_buildingwidth8;
		PLUMERISE8 = dlg.m_plumerise8;
		DECAY8 = dlg.m_decay8;
		DEPOSITION8 = dlg.m_deposition8;
		DP8 = dlg.m_dp8;
		PP8 = dlg.m_pp8;
		SCCOEF8 = dlg.m_sccoef8;
		SetModifiedFlag();		
	}	
}

void CAirDoc::OnStack9Stack9data() 
{
	Cstack9 dlg;
	dlg.m_ts9 = TS9;
	dlg.m_vs9 = VS9;
	dlg.m_ds9 = DS9;
	dlg.m_q9 = Q9;
	dlg.m_stack9 = STACK9;
	dlg.m_buildingdownwash9 = BUILDINGDOWNWASH9;
	dlg.m_buoyancy9 = BUOYANCY9;
	dlg.m_buildinglocation9 = BUILDINGLOCATION9;
	dlg.m_stackx9 = STACKX9;
	dlg.m_stacky9 = STACKY9;
	dlg.m_stackz9 = STACKZ9;
	dlg.m_buildingheight9 = BUILDINGHEIGHT9;
	dlg.m_buildingwidth9 = BUILDINGWIDTH9;
	dlg.m_plumerise9 = PLUMERISE9;
	dlg.m_decay9 = DECAY9;
	dlg.m_deposition9 = DEPOSITION9;
	dlg.m_dp9 = DP9;
	dlg.m_pp9 = PP9;
	dlg.m_sccoef9 = SCCOEF9;
	if (dlg.DoModal()==IDOK)
 	{
		TS9 = dlg.m_ts9;
		VS9 = dlg.m_vs9;
		DS9 = dlg.m_ds9;
		Q9 = dlg.m_q9;
		STACK9 = dlg.m_stack9;
		BUILDINGDOWNWASH9 = dlg.m_buildingdownwash9;
		BUOYANCY9 = dlg.m_buoyancy9;
		BUILDINGLOCATION9 = dlg.m_buildinglocation9;
		STACKX9 = dlg.m_stackx9;
		STACKY9 = dlg.m_stacky9;
		STACKZ9 = dlg.m_stackz9;
		BUILDINGHEIGHT9 = dlg.m_buildingheight9;
		BUILDINGWIDTH9 = dlg.m_buildingwidth9;
		PLUMERISE9 = dlg.m_plumerise9;
		DECAY9 = dlg.m_decay9;
		DEPOSITION9 = dlg.m_deposition9;
		DP9 = dlg.m_dp9;
		PP9 = dlg.m_pp9;
		SCCOEF9 = dlg.m_sccoef9;
		SetModifiedFlag();		
	}	
}

void CAirDoc::OnStack10Stack10data() 
{
	Cstack10 dlg;
	dlg.m_ts10 = TS10;
	dlg.m_vs10 = VS10;
	dlg.m_ds10 = DS10;
	dlg.m_q10 = Q10;
	dlg.m_stack10 = STACK10;
	dlg.m_buildingdownwash10 = BUILDINGDOWNWASH10;
	dlg.m_buoyancy10 = BUOYANCY10;
	dlg.m_buildinglocation10 = BUILDINGLOCATION10;
	dlg.m_stackx10 = STACKX10;
	dlg.m_stacky10 = STACKY10;
	dlg.m_stackz10 = STACKZ10;
	dlg.m_buildingheight10 = BUILDINGHEIGHT10;
	dlg.m_buildingwidth10 = BUILDINGWIDTH10;
	dlg.m_plumerise10 = PLUMERISE10;
	dlg.m_decay10 = DECAY10;
	dlg.m_deposition10 = DEPOSITION10;
	dlg.m_dp10 = DP10;
	dlg.m_pp10 = PP10;
	dlg.m_sccoef10 = SCCOEF10;
	if (dlg.DoModal()==IDOK)
 	{
		TS10 = dlg.m_ts10;
		VS10 = dlg.m_vs10;
		DS10 = dlg.m_ds10;
		Q10 = dlg.m_q10;		
		STACK10 = dlg.m_stack10;
		BUILDINGDOWNWASH10 = dlg.m_buildingdownwash10;
		BUOYANCY10 = dlg.m_buoyancy10;
		BUILDINGLOCATION10 = dlg.m_buildinglocation10;
		STACKX10 = dlg.m_stackx10;
		STACKY10 = dlg.m_stacky10;
		STACKZ10 = dlg.m_stackz10;
		BUILDINGHEIGHT10 = dlg.m_buildingheight10;
		BUILDINGWIDTH10 = dlg.m_buildingwidth10;
		PLUMERISE10 = dlg.m_plumerise10;
		DECAY10 = dlg.m_decay10;
		DEPOSITION10 = dlg.m_deposition10;
		DP10 = dlg.m_dp10;
		PP10 = dlg.m_pp10;
		SCCOEF10 = dlg.m_sccoef10;
		SetModifiedFlag();
	}	
}

void CAirDoc::Buoyancy4(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight4(x) - GetSTACK4())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight4(x) - GetSTACK4())/3.5,2),0.5);
}

void CAirDoc::Buoyancy5(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight5(x) - GetSTACK5())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight5(x) - GetSTACK5())/3.5,2),0.5);
}

void CAirDoc::Buoyancy6(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight6(x) - GetSTACK6())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight6(x) - GetSTACK6())/3.5,2),0.5);
}

void CAirDoc::Buoyancy7(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight7(x) - GetSTACK7())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight7(x) - GetSTACK7())/3.5,2),0.5);
}

void CAirDoc::Buoyancy8(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight8(x) - GetSTACK8())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight8(x) - GetSTACK8())/3.5,2),0.5);
}

void CAirDoc::Buoyancy9(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight9(x) - GetSTACK9())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight9(x) - GetSTACK9())/3.5,2),0.5);
}

void CAirDoc::Buoyancy10(double x, double & sigmaye, double & sigmaze)
{
	sigmaze = pow(SigmaZ(x) * SigmaZ(x) + pow((StackHeight10(x) - GetSTACK10())/3.5,2),0.5);
	sigmaye = pow(SigmaY(x) * SigmaY(x) + pow((StackHeight10(x) - GetSTACK10())/3.5,2),0.5);
}

double CAirDoc::concentration4(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire4(x, sigmay1, sigmaz1);
	HuberSnyder4(x, sigmay2, sigmaz2);
	Buoyancy4(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH4();
	BOOL buoyancy = GetBUOYANCY4();
	
	double stack = GetSTACK4();
	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	double sccoeff = GetSc4();
	double prate = GetPrate();
	double us = windchange4();
	double sc = sccoeff * prate;
	double Q = GetQ4() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical4(x,z);

	double d;
	if (decay4(x) > 0)
		d = decay4(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange4())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration5(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire5(x, sigmay1, sigmaz1);
	HuberSnyder5(x, sigmay2, sigmaz2);
	Buoyancy5(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH5();
	BOOL buoyancy = GetBUOYANCY5();
	
	double stack = GetSTACK5();
	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	double sccoeff = GetSc5();
	double prate = GetPrate();
	double us = windchange5();
	double sc = sccoeff * prate;
	double Q = GetQ5() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical5(x,z);

	double d;
	if (decay5(x) > 0)
		d = decay5(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange5())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration6(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire6(x, sigmay1, sigmaz1);
	HuberSnyder6(x, sigmay2, sigmaz2);
	Buoyancy6(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH6();
	BOOL buoyancy = GetBUOYANCY6();
	
	double stack = GetSTACK6();
	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	double sccoeff = GetSc6();
	double prate = GetPrate();
	double us = windchange6();
	double sc = sccoeff * prate;
	double Q = GetQ6() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical6(x,z);

	double d;
	if (decay6(x) > 0)
		d = decay6(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange6())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration7(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire7(x, sigmay1, sigmaz1);
	HuberSnyder7(x, sigmay2, sigmaz2);
	Buoyancy7(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH7();
	BOOL buoyancy = GetBUOYANCY7();
	
	double stack = GetSTACK7();
	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	double sccoeff = GetSc7();
	double prate = GetPrate();
	double us = windchange7();
	double sc = sccoeff * prate;
	double Q = GetQ7() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical7(x,z);

	double d;
	if (decay7(x) > 0)
		d = decay7(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange7())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration8(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire8(x, sigmay1, sigmaz1);
	HuberSnyder8(x, sigmay2, sigmaz2);
	Buoyancy8(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH8();
	BOOL buoyancy = GetBUOYANCY8();
	
	double stack = GetSTACK8();
	double buildingheight = GetBUILDINGHEIGHT8();
	double buildingwidth = GetBUILDINGWIDTH8();
	double sccoeff = GetSc8();
	double prate = GetPrate();
	double us = windchange8();
	double sc = sccoeff * prate;
	double Q = GetQ8() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical8(x,z);

	double d;
	if (decay8(x) > 0)
		d = decay8(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange8())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration9(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire9(x, sigmay1, sigmaz1);
	HuberSnyder9(x, sigmay2, sigmaz2);
	Buoyancy9(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH9();
	BOOL buoyancy = GetBUOYANCY9();
	
	double stack = GetSTACK9();
	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	double sccoeff = GetSc9();
	double prate = GetPrate();
	double us = windchange9();
	double sc = sccoeff * prate;
	double Q = GetQ9() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical9(x,z);

	double d;
	if (decay9(x) > 0)
		d = decay9(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange9())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::concentration10(double distance, double y, double z)
{
	double x = distance;
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmay2, sigmaz2, sigmay3, sigmaz3;
	SchulmanScire10(x, sigmay1, sigmaz1);
	HuberSnyder10(x, sigmay2, sigmaz2);
	Buoyancy10(x, sigmay3, sigmaz3);

	BOOL buildingdownwash = GetBUILDINGDOWNWASH10();
	BOOL buoyancy = GetBUOYANCY10();
	
	double stack = GetSTACK10();
	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	double sccoeff = GetSc10();
	double prate = GetPrate();
	double us = windchange10();
	double sc = sccoeff * prate;
	double Q = GetQ10() * exp(-1 * sc * (x * 1000) / us);

	switch (buildingdownwash)
	{
	case TRUE:
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{		
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{		
			sigmay0 = sigmay2;
			sigmaz0 = sigmaz2;
		}
		break;
	case FALSE:	
		switch (buoyancy)
		{
		case TRUE:			
			sigmay0 = sigmay3;
			sigmaz0 = sigmaz3;
		break;		
		case FALSE:			
			sigmay0 = SigmaY(x);
			sigmaz0 = SigmaZ(x);			
			break;
		}
		break;
	}
	//y calculation

 	double party = -0.5 * (y * 1000 * y * 1000)/(sigmay0 * sigmay0);
 	double expparty = exp(party);
 
 	//z calculation
 	
 	double exppartz = Vertical10(x,z);

	double d;
	if (decay10(x) > 0)
		d = decay10(x);
	else
		d = 1;
 
 	//concentration calculation
 	double concentration = (Q/(2 * 3.142 * sigmay0 * sigmaz0 * windchange10())) * exppartz * expparty * d;
 	return concentration;
}

double CAirDoc::DistanceX4(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX4();
	

	
		stacky1 = GetSTACKY4();
	
	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX5(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX5();
	


		stacky1 = GetSTACKY5();
	
	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX6(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX6();


	
		stacky1 = GetSTACKY6();

	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX7(double x, double y)
{
	double distance1, stackx1, stacky1;
	
		stackx1 = GetSTACKX7();
	

	
		stacky1 = GetSTACKY7();

	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX8(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX8();


	
		stacky1 = GetSTACKY8();

	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX9(double x, double y)
{
	double distance1, stackx1, stacky1;

	
		stackx1 = GetSTACKX9();
	

	
		stacky1 = GetSTACKY9();
	
	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceX10(double x, double y)
{
	double distance1, stackx1, stacky1;	
		stackx1 = GetSTACKX10();
		stacky1 = GetSTACKY10();	
	distance1 = (-1 * (x - stackx1) * sin(GetWD())) - ((y - stacky1) * cos(GetWD()));	
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}
double CAirDoc::DistanceY4(double x, double y)
{
	double distance1, stackx1, stacky1;

		stackx1 = GetSTACKX4();
	

	
		stacky1 = GetSTACKY4();

	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY5(double x, double y)
{
	double distance1, stackx1, stacky1;

		stackx1 = GetSTACKX5();

		stacky1 = GetSTACKY5();

	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY6(double x, double y)
{
	double distance1, stackx1, stacky1;

		stackx1 = GetSTACKX6();
	

	
		stacky1 = GetSTACKY6();
	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY7(double x, double y)
{
	double distance1, stackx1, stacky1;
	
		stackx1 = GetSTACKX7();

		stacky1 = GetSTACKY7();
	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY8(double x, double y)
{
	double distance1, stackx1, stacky1;
	
		stackx1 = GetSTACKX8();

	
		stacky1 = GetSTACKY8();
	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY9(double x, double y)
{
	double distance1, stackx1, stacky1; 
	
		stackx1 = GetSTACKX9();
	
		stacky1 = GetSTACKY9();


	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::DistanceY10(double x, double y)
{
	double distance1, stackx1, stacky1;
	
		stackx1 = GetSTACKX10();
	

	
		stacky1 = GetSTACKY10();
	
	
	distance1 = (1 * (x - stackx1) * cos(GetWD())) - ((y - stacky1) * sin(GetWD()));
	//if (distance1 > 0)
	//	distance = distance1;
	//else
	//	distance = 0;
	return distance1;
}

double CAirDoc::function4(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	double vs = GetVS4();
	double ds = GetDS4();
	double ts = GetTS4();
	double us = windchange4();
	double stack = GetSTACK4();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));	
}

double CAirDoc::function5(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	double vs = GetVS5();
	double ds = GetDS5();
	double ts = GetTS5();
	double us = windchange5();
	double stack = GetSTACK5();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function6(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	double vs = GetVS6();
	double ds = GetDS6();
	double ts = GetTS6();
	double us = windchange6();
	double stack = GetSTACK6();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function7(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	double vs = GetVS7();
	double ds = GetDS7();
	double ts = GetTS7();
	double us = windchange7();
	double stack = GetSTACK7();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function8(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT8();
	double buildingwidth = GetBUILDINGWIDTH8();
	double vs = GetVS8();
	double ds = GetDS8();
	double ts = GetTS8();
	double us = windchange8();
	double stack = GetSTACK8();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function9(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	double vs = GetVS9();
	double ds = GetDS9();
	double ts = GetTS9();
	double us = windchange9();
	double stack = GetSTACK9();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

double CAirDoc::function10(double x, double distance1)
{
	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	double vs = GetVS10();
	double ds = GetDS10();
	double ts = GetTS10();
	double us = windchange10();
	double stack = GetSTACK10();
	double he;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment

	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable	
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;
	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;
	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}
return ((0.0000576 * x * x * x) + (0.0576 * x * x) - (SigmaZ(distance1) * SigmaZ(distance1) * A * A));
}

void CAirDoc::HuberSnyder4(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	double vs = GetVS4();
	double ds = GetDS4();
	double ts = GetTS4();
	double stack = GetSTACK4();
	double us = windchange4();
	BOOL buildinglocation = GetBUILDINGLOCATION4();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder5(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	double vs = GetVS5();
	double ds = GetDS5();
	double ts = GetTS5();
	double stack = GetSTACK5();
	double us = windchange5();
	BOOL buildinglocation = GetBUILDINGLOCATION5();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder6(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	double vs = GetVS6();
	double ds = GetDS6();
	double ts = GetTS6();
	double stack = GetSTACK6();
	double us = windchange6();
	BOOL buildinglocation = GetBUILDINGLOCATION6();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder7(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	double vs = GetVS7();
	double ds = GetDS7();
	double ts = GetTS7();
	double stack = GetSTACK7();
	double us = windchange7();
	BOOL buildinglocation = GetBUILDINGLOCATION7();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder8(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT8();
	double buildingwidth = GetBUILDINGWIDTH8();
	double vs = GetVS8();
	double ds = GetDS8();
	double ts = GetTS8();
	double stack = GetSTACK8();
	double us = windchange8();
	BOOL buildinglocation = GetBUILDINGLOCATION8();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder9(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	double vs = GetVS9();
	double ds = GetDS9();
	double ts = GetTS9();
	double stack = GetSTACK9();
	double us = windchange9();
	BOOL buildinglocation = GetBUILDINGLOCATION9();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

void CAirDoc::HuberSnyder10(double x, double & ysigma1, double & zsigma1)
{
	double xz,xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma;
	double he;

	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	double vs = GetVS10();
	double ds = GetDS10();
	double ts = GetTS10();
	double stack = GetSTACK10();
	double us = windchange10();
	BOOL buildinglocation = GetBUILDINGLOCATION10();
	
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);				//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}	
	

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);			//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{

	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;				//3hb
	double distanceH2 = 10 * buildingheight;			//10hb
	double distanceW = 3 * buildingwidth;				//3hw
	double distanceW2 = 10 * buildingwidth;				//10hw
		
	if (ratio1 <= 1.2)									//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)			//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);				
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
				if (xz > 0)
					xz1 = xz;
				else
					xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					double xy1;
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
				
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
					
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						
						msigmaz = SigmaZ(addxz);
				
						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
				
					if (xz > 0)
						xz1 = xz;
					else
						xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
					
					if (xy > 0)
						xy1 = xy;
					else
						xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						
						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
					
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)			//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingheight) / a),1/b) - (10 * buildingheight);
						
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * buildingwidth) / a),1/b) - (10 * buildingwidth);
						double xz1;
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

ysigma1 = ysigma;
zsigma1 = zsigma;
}

double CAirDoc::RootFunction4(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function4(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction5(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function5(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction6(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function6(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction7(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function7(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction8(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function8(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction9(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function9(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::RootFunction10(double x)
{
	const  int MaxIter = 25;
	double xN, xNplus1, absDiff;
	int iter = 0;
	xN = 1;
	do {
		++iter;
		xNplus1 = xN - function10(xN,x) / fPrime(xN);
		absDiff = fabs(xN - xNplus1);
		xN = xNplus1;
		}

		while (absDiff >= 0.00001 && iter < MaxIter);
		
		return xN;
}

double CAirDoc::SchulmanPlumeRise4(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	double ds = GetDS4();
	double vs = GetVS4();
	double ts = GetTS4();
	double us = windchange4();
	double stack = GetSTACK4();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire4(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise5(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	double ds = GetDS5();
	double vs = GetVS5();
	double ts = GetTS5();
	double us = windchange5();
	double stack = GetSTACK5();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire5(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise6(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	double ds = GetDS6();
	double vs = GetVS6();
	double ts = GetTS6();
	double us = windchange6();
	double stack = GetSTACK6();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire6(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise7(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	double ds = GetDS7();
	double vs = GetVS7();
	double ts = GetTS7();
	double us = windchange7();
	double stack = GetSTACK7();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire7(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise8(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT1();
	double buildingwidth = GetBUILDINGWIDTH1();
	double ds = GetDS8();
	double vs = GetVS8();
	double ts = GetTS8();
	double us = windchange8();
	double stack = GetSTACK8();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire8(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise9(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	double ds = GetDS9();
	double vs = GetVS9();
	double ts = GetTS9();
	double us = windchange9();
	double stack = GetSTACK9();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire9(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

double CAirDoc::SchulmanPlumeRise10(double x)
{
	double he, he1, he2, he3, hefinal1, hefinal;

	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	double ds = GetDS10();
	double vs = GetVS10();
	double ts = GetTS10();
	double us = windchange10();
	double stack = GetSTACK10();

	double distance = 2 * buildingheight;	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);			//momentum	
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/(4 * ts));	//buoyancy
	double stabilityE = 9.81 * 0.020 / GetTA();					//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();					//class F	
	double jet = (1/3) + (us/vs);								//jet entrainment
		
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}
	
		double A;	//linear decay factor
	
		if (he <= buildingheight)
			A = 1;

		if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
			A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

		if (he > (buildingheight + (2 * buildingwidth)))
			A = 0;	
	
	double lb;								//takes the lesser of height or width
	if (buildingheight >= buildingwidth)
		lb = (3 * buildingwidth)/1000;		//must be in km
	else
		lb = (3 * buildingheight)/1000;
	
	double sigmay0, sigmaz0, sigmay1, sigmaz1, sigmayf, sigmazf;

	SchulmanScire10(lb, sigmay1, sigmaz1);	//linear decay factor is already included
	sigmay0 = sigmay1;
	sigmaz0 = sigmaz1;

	if (sigmay0 >= SigmaY(lb))				//takes the larger of the sigmas
		sigmayf = sigmay0;
	else
		sigmayf = SigmaY(lb);

	if (sigmaz0 >= SigmaZ(lb))
		sigmazf = sigmaz0;
	else
		sigmazf = SigmaZ(lb);


	double r = sqrt(2) * A * sigmazf;
	
	double ly;
	if (sigmayf >= sigmazf)
		ly = sqrt(2 * 3.142) * (sigmayf - sigmazf);
	else
		ly = 0;

	long double factor1 = (3 * ly) / (3.142 * 0.6);
	long double factor2 = ((6 * r * ly)/(3.142 * 0.36)) + ((3 * pow(r,2))/0.36);
	long double factor3 = (3 * FB * (x * 1000) * (x * 1000))/(2 * 0.36 * pow(us,3));
	long double factor4 = (3 * FM * (x * 1000))/(jet * jet * pow(us,3));
	
	long double E = ((x * 1000) * sqrt(stabilityE))/us;
	long double F = ((x * 1000) * sqrt(stabilityF))/us;
	
	long double factor5 = (3 * FM * sin(E))/(jet * jet * us * sqrt(stabilityE));
	long double factor6 = (3 * FM * sin(F))/(jet * jet * us * sqrt(stabilityF));
	long double factor7 = (6 * FB)/(0.36 * us * stabilityE);
	long double factor8 = (6 * FB)/(0.36 * us * stabilityF);
	
	//when momentum dominates fb = 0
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable or stable
		case 1:
		case 2:
		case 3:

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor4);

			if (he1 >= he2)
				hefinal = he1;
			else 
				hefinal = he2;			
			break;

		case 4:				//stable
		
			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor5);
			he3 = SchulmanFunction(factor1, factor2, factor7);
			
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;

		case 5:				//stable

			he1 = SchulmanFunction(factor1, factor2, factor3);
			he2 = SchulmanFunction(factor1, factor2, factor6);
			he3 = SchulmanFunction(factor1, factor2, factor8);
					
			if (he1 >= he3)
				hefinal1 = he3;
			else
				hefinal1 = he1;

			if (hefinal1 >= he2)
				hefinal = hefinal1;
			else
				hefinal = he2;
			break;
	}

return hefinal;	
}

void CAirDoc::SchulmanScire4(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	double vs = GetVS4();
	double ds = GetDS4();
	double ts = GetTS4();
	double stack = GetSTACK4();
	double us = windchange4();	
	BOOL buildinglocation = GetBUILDINGLOCATION4();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction4(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire5(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	double vs = GetVS5();
	double ds = GetDS5();
	double ts = GetTS5();
	double stack = GetSTACK5();
	double us = windchange5();	
	BOOL buildinglocation = GetBUILDINGLOCATION5();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction5(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;	
}

void CAirDoc::SchulmanScire6(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	double vs = GetVS6();
	double ds = GetDS6();
	double ts = GetTS6();
	double stack = GetSTACK6();
	double us = windchange6();	
	BOOL buildinglocation = GetBUILDINGLOCATION6();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction6(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire7(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	double vs = GetVS7();
	double ds = GetDS7();
	double ts = GetTS7();
	double stack = GetSTACK7();
	double us = windchange7();	
	BOOL buildinglocation = GetBUILDINGLOCATION7();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction7(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire8(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT8();
	double buildingwidth = GetBUILDINGWIDTH8();
	double vs = GetVS8();
	double ds = GetDS8();
	double ts = GetTS8();
	double stack = GetSTACK8();
	double us = windchange8();	
	BOOL buildinglocation = GetBUILDINGLOCATION8();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction8(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire9(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	double vs = GetVS9();
	double ds = GetDS9();
	double ts = GetTS9();
	double stack = GetSTACK9();
	double us = windchange9();	
	BOOL buildinglocation = GetBUILDINGLOCATION9();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction9(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

void CAirDoc::SchulmanScire10(double x, double & ysigma2, double & zsigma2)
{
	//Schulman and Scire modification of sigma y and sigma z for building downwash
	//calculate the gradual plume rise to momentum alone of 2 building heights	
	double xz, xz1, addxz, xy, xy1, addxy;
	double msigmaz, msigmay, ysigma, zsigma, ysigma1, zsigma1;
	double he;
	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	double vs = GetVS10();
	double ds = GetDS10();
	double ts = GetTS10();
	double stack = GetSTACK10();
	double us = windchange10();	
	BOOL buildinglocation = GetBUILDINGLOCATION10();
	
	double distance = 2 * buildingheight;
	double p, p1, q, q1, a, a1, b, b1;

	VirtualDistanceY(p1,q1);
	VirtualDistanceZ(x, a1, b1);

	p = p1;
	q = q1;
	a = a1; 
	b = b1;

	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);	//momentum	
	double stabilityE = 9.81 * 0.020 / GetTA();			//class E
 	double stabilityF = 9.81 * 0.035 / GetTA();			//class F	
	double jet = (1/3) + (us/vs);						//jet entrainment
	
	switch (GetSTABILITYCLASS())
	{
		case 0:				//unstable
		case 1:
		case 2:
		case 3:
			he = stack + pow((3 * FM * distance / (jet * jet * us * us)),1/3);
			break;
		case 4:				//stable		
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
		case 5:				//stable
			he = stack + pow((3 * FM * sin((distance * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
			break;
	}

	//Schulman and Scire building downwash
	
	double A;
	if (stack < (buildingheight + (0.5 * buildingwidth)))
	{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;
	}
	else 
	{
		A = 1;
	}

if (he > (2.5 * buildingheight) || he > (buildingheight + (1.5 * buildingwidth)))
{
	ysigma = SigmaY(x);					//no modification of sigma y and sigma z
	zsigma = SigmaZ(x);
}
else 
{
	double ratio1 = buildingheight/buildingwidth;
	double ratio2 = buildingwidth/buildingheight;
	double distanceH = 3 * buildingheight;			//3hb
	double distanceH2 = 10 * buildingheight;		//10hb
	double distanceW = 3 * buildingwidth;			//3hw
	double distanceW2 = 10 * buildingwidth;			//10hw		
	if (ratio1 <= 1.2)								//modify sigma y and sigma z
	{	
		if (buildingwidth >= buildingheight)		//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

			if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
				
				if (ratio2 <= 5)
				{
					msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				else //ratio2 > 5
				{				
					if (buildinglocation==TRUE)
						msigmay = 1.75 * buildingheight + (0.067 * ((x * 1000) - 3 * buildingheight));
					else
						msigmay = (0.35 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				}
				
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);				
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}	if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
					
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingheight) / p),1/q) - (10 * buildingheight);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
				msigmay = (0.35 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

					switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.4096))) / 0.2048;
						break;
					case 2:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1936))) / 0.0968;
						break;
					case 3:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.1024))) / 0.0512;
						break;
					case 4:
					case 5:
						xy = ((0.0004 * msigmay * msigmay) + sqrt((msigmay * msigmay) * ((0.00000016 * msigmay * msigmay) + 0.0484))) / 0.0242;
						break;
					}
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = (xy1 + (x * 1000))/1000;
						msigmay = SigmaY(addxy);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						xy = pow(((800 * buildingwidth) / p),1/q) - (10 * buildingwidth);
						if (xy > 0)
							xy1 = xy;
						else
							xy1 = 0;
						addxy = ((x * 1000) + xy1)/1000;
						msigmay = SigmaY(addxy);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				if (msigmay >= SigmaY(x))
					ysigma = SigmaY(x);
				else
					ysigma = msigmay;

			}				
		}		
	}

	if (1.2 < ratio1 && ratio1 <= 2.5)					//modify only sigma z
	{	
		if (buildingwidth >= buildingheight)	//squat
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;

				ysigma = SigmaY(x);			
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingheight) + (0.067 * ((x * 1000) - (3 * buildingheight)));				
								
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
					
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingheight) / a),1/b) - (10 * buildingheight);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	
		if (buildingwidth < buildingheight)	//tall
		{	
			if ((x * 1000) < distanceH)
			{
				ysigma = SigmaY(x);
				zsigma = SigmaZ(x);
			}
			else if (distanceH <= (x * 1000) && (x * 1000) < distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));
				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
				
				ysigma = SigmaY(x);
							
			}
			else if ((x * 1000) >= distanceH2)
			{
				msigmaz = (0.7 * buildingwidth) + (0.067 * ((x * 1000) - (3 * buildingwidth)));				
					
				if (GetRURAL_URBAN() == TRUE)
				{	switch (GetSTABILITYCLASS())
					{
					case 0:
					case 1:
						xz = RootFunction10(x);
						break; 
					case 2:
						xz = A * msigmaz / 0.20;
						break;
					case 3:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 4:
						xz = ((0.0015 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.0000022 * msigmaz * msigmaz) + 0.0256))) / 0.0128;
						break;
					case 5:
						xz = ((0.0003 * msigmaz * msigmaz) + sqrt((msigmaz * msigmaz * A * A) * ((0.00000009 * msigmaz * msigmaz) + 0.0784))) / 0.0392;
						break;
					}
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}
				else
				{
						xz = pow(((1200 * A * buildingwidth) / a),1/b) - (10 * buildingwidth);
						if (xz > 0)
							xz1 = xz;
						else
							xz1 = 0;
						addxz = ((x * 1000) + xz1)/1000;
						msigmaz = SigmaZ(addxz);

						ysigma = SigmaY(x);
				}

				if (msigmaz >= SigmaZ(x))
					zsigma = SigmaZ(x);
				else
					zsigma = msigmaz;
			}				
		}		
	}
}

//Schulman and Scire refined building downwash procedures
if (stack < (buildingheight + (0.5 * buildingwidth)))
{	
	if (he <= buildingheight)
		A = 1;

	if (buildingheight < he && he <= (buildingheight + (2 * buildingwidth)))
		A = ((buildingheight - he) / (2 * buildingwidth)) + 1;

	if (he > (buildingheight + (2 * buildingwidth)))
		A = 0;

	zsigma1 = A * zsigma;	
	ysigma1 = ysigma;
}
else 
{
	zsigma1 = zsigma;
	ysigma1 = ysigma;
}
zsigma2 = zsigma1;
ysigma2 = ysigma1;
}

double CAirDoc::StackHeight4(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS4();
	double ds = GetDS4();
	double vs = GetVS4();
	double stack = GetSTACK4();
	double us = windchange4();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight5(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS5();
	double ds = GetDS5();
	double vs = GetVS5();
	double stack = GetSTACK5();
	double us = windchange5();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight6(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS6();
	double ds = GetDS6();
	double vs = GetVS6();
	double stack = GetSTACK6();
	double us = windchange6();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight7(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS7();
	double ds = GetDS7();
	double vs = GetVS7();
	double stack = GetSTACK7();
	double us = windchange7();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight8(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS8();
	double ds = GetDS8();
	double vs = GetVS8();
	double stack = GetSTACK8();
	double us = windchange8();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight9(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS9();
	double ds = GetDS9();
	double vs = GetVS9();
	double stack = GetSTACK9();
	double us = windchange9();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::StackHeight10(double x)
{
	double hs;							//stack height	
 	double deltac;						//temperature	
  	double xf;							//distance to final rise
 	double he, heA, heB, heC, hefinal;	//effective stack height	
 	double xmax;						//max x for momentum

	double ts = GetTS10();
	double ds = GetDS10();
	double vs = GetVS10();
	double stack = GetSTACK10();
	double us = windchange10();

 	double deltat = ts - GetTA();		//temperature difference
 
	switch (GetDOWNWASH())				//stack tip downwash
 	{
	case TRUE:
 		if (vs < (1.5 * us))
 			hs = stack +(2 * ds * (vs/us));
 		else
 			hs = stack;
 		break;
 
	case FALSE:
 			hs = stack;
 		break;
 	}
 
	//calculate  FB
 
	double FB = 9.81 * vs * ds * ds * ((ts - GetTA())/4 * ts);
 	
 	//calculate FM
 	
	double FM = vs * vs * ds * ds * GetTA() / (4 * ts);

	//calculate jet entrainment
 
 	double jet = (1/3) + (us/vs);
 
	//calculate s, class E = 0.020 K/m, clase F = 0.035 K/m
	double stabilityE = 9.81 * 0.020 / GetTA();
 	double stabilityF = 9.81 * 0.035 / GetTA();
 
switch (GetSTABILITYCLASS())
{
case 0:
case 1:
case 2:
case 3:
  	 		
if (FB < 55)
{ 
 	deltac = 0.0297*ts*(pow(vs,1/3)/pow(ds,2/3));
									
 	if (deltat >= deltac)			//buoyancy dominated
	{
		xf = 49 * pow(FB,5/8);
 					
 		if (xf > x)
		{
 			he = hs + (21.425 * pow(FB,3/4) / us);
			heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
		}
 		if (xf <= (x * 1000)) 								
			return hefinal = hs + (21.425 * pow(FB,3/4) / us);
 		
	}
  	else 								//momentum dominated
	{	
 		if (FB = 0)
 			xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
 		else if (0 < FB && FB <= 55)
 			xmax = 49 * pow(FB,5/8);
 		else if (FB > 55)
 			xmax = 119 * pow(FB,2/5);

 	
 		if (x < xmax)
			he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 		else
 			heA = hs + (3 * ds * vs / us);

		if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
	}
}
if (FB >= 55)
{
 	deltac = 0.00575*ts*(pow(vs,1/3)/pow(ds,2/3));
		
		if (deltat >= deltac)				//buoyancy dominated
		{
 				xf = 119 * pow(FB,2/5);
			if (xf > (x * 1000))
			{
				he = hs + (38.7 * pow(FB,3/5) / us);
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				
				if (he > heA)
					hefinal = heA;
 				else
					hefinal = he;
			}
 			
			if (xf <= (x * 1000))								
 			
				hefinal = hs + (38.7 * pow(FB,3/5) / us);
		}
		else							//momentum dominated
		{
 			if (FB = 0)
				xmax = 4 * ds * pow((vs + (3 * us)),2) / (vs * us);
			else if (0 < FB && FB <= 55)
				xmax = 49 * pow(FB,5/8);
 			else if (FB > 55)
				xmax = 119 * pow(FB,2/5);
 
 			if ((x * 1000) < xmax)
 				he = hs + pow((3 * FM * (x * 1000) / (jet * jet * us * us)),1/3);
 			else
 				heA = hs + (3 * ds * vs / us);

			if (he > heA)
				hefinal = heA;
			else
				hefinal = he;
		}
}
	break;

case 4:
 
 	deltac = 0.019582 * ts * vs * sqrt(stabilityE);
	
 	if (deltac >= deltat)			//buoyancy dominated
	{
 			xf = 2.0715 * us / sqrt(stabilityE);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityE)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
					hefinal = he;
			}
			if (xf <= (x * 1000))								
 				hefinal = hs + (2.6 * pow((FB / (us * stabilityE)),1/3));
	}
	else							//momentum dominated
	{	
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityE))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityE);
 		if ((x * 1000) < xmax)
		{	heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityE))/us)/(jet * jet * us * sqrt(stabilityE))),1/3);
 			
 			if (he > heA)
 				heB = heA;
 			else
 				heB = he;
		}
		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
			
	break;
 
case 5:
 	deltac = 0.019582 * ts * vs * sqrt(stabilityF);
 	
 	if (deltac >= deltat)
	{		xf = 2.0715 * us / sqrt(stabilityF);
 			
 			if (xf > (x * 1000))
			{	he = hs + (2.6 * pow((FB / (us * stabilityF)), 1/3));
 				heA = hs + (1.60 * (pow(FB,1/3) * pow((x * 1000),2/3) / us));
 				if (he > heA)
 					hefinal = heA;
 				else
 					hefinal = he;
			}
 			if (xf <= (x * 1000))								
 				hefinal = hs + (21.425 * pow(FB,3/4) / us);
	}
 	else 
	{
 		he = hs + (1.5 * pow((FM/(us * sqrt(stabilityF))),1/3));
		heC = hs + (3 * ds * vs / us);
 		xmax = 0.5 * 3.142 * us / sqrt(stabilityF);
 		if ((x * 1000) < xmax)
		{
 			heA = hs + pow((3 * FM * sin(((x * 1000) * sqrt(stabilityF))/us)/(jet * jet * us * sqrt(stabilityF))),1/3);
 			
			if (he > heA)
 				heB = heA;
			else
 				heB = he;
		}
 		else
		{
 			heB = he;
		}
		if (heC >= heB)
			hefinal = heC;
		else
			hefinal = heB;
	}
	
	break;
} 	
return hefinal;
}

double CAirDoc::Vertical4(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK4();
	double buildingheight = GetBUILDINGHEIGHT4();
	double buildingwidth = GetBUILDINGWIDTH4();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH4();
	int plumerise = GetPLUMERISE4();
	double mix = GetMIX() + (z * 1000);
	double us = windchange4();
	double dp = GetDP4();
	double pp = GetPP4();
	BOOL deposition = GetDEPOSITION4();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire4(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder4(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight4(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise4(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ4() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ4()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical5(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK5();
	double buildingheight = GetBUILDINGHEIGHT5();
	double buildingwidth = GetBUILDINGWIDTH5();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH5();
	int plumerise = GetPLUMERISE5();
	double mix = GetMIX() + (z * 1000);
	double us = windchange5();
	double dp = GetDP5();
	double pp = GetPP5();
	BOOL deposition = GetDEPOSITION5();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire5(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder5(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight5(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise5(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ5() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ5()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;	
}

double CAirDoc::Vertical6(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK6();
	double buildingheight = GetBUILDINGHEIGHT6();
	double buildingwidth = GetBUILDINGWIDTH6();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH6();
	int plumerise = GetPLUMERISE6();
	double mix = GetMIX() + (z * 1000);
	double us = windchange6();
	double dp = GetDP6();
	double pp = GetPP6();
	BOOL deposition = GetDEPOSITION6();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire6(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder6(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight6(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise6(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ6() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ6()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical7(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK7();
	double buildingheight = GetBUILDINGHEIGHT7();
	double buildingwidth = GetBUILDINGWIDTH7();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH7();
	int plumerise = GetPLUMERISE7();
	double mix = GetMIX() + (z * 1000);
	double us = windchange7();
	double dp = GetDP7();
	double pp = GetPP7();
	BOOL deposition = GetDEPOSITION7();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire7(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder7(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight7(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise7(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ7() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ7()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical8(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK8();
	double buildingheight = GetBUILDINGHEIGHT8();
	double buildingwidth = GetBUILDINGWIDTH8();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH8();
	int plumerise = GetPLUMERISE8();
	double mix = GetMIX() + (z * 1000);
	double us = windchange8();
	double dp = GetDP8();
	double pp = GetPP8();
	BOOL deposition = GetDEPOSITION8();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire8(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder8(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight8(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise8(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ8() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ8()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical9(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK9();
	double buildingheight = GetBUILDINGHEIGHT9();
	double buildingwidth = GetBUILDINGWIDTH9();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH9();
	int plumerise = GetPLUMERISE9();
	double mix = GetMIX() + (z * 1000);
	double us = windchange9();
	double dp = GetDP9();
	double pp = GetPP9();
	BOOL deposition = GetDEPOSITION9();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire9(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder9(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight9(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise9(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ9() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ9()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::Vertical10(double x, double z)
{
	double stackheight, stackheight1;
	double sigmay0, sigmaz0, sigmay1, sigmaz1;
	double stack = GetSTACK10();
	double buildingheight = GetBUILDINGHEIGHT10();
	double buildingwidth = GetBUILDINGWIDTH10();
	BOOL buildingdownwash = GetBUILDINGDOWNWASH10();
	int plumerise = GetPLUMERISE10();
	double mix = GetMIX() + (z * 1000);
	double us = windchange10();
	double dp = GetDP10();
	double pp = GetPP10();
	BOOL deposition = GetDEPOSITION10();

	if (buildingdownwash == TRUE)
	{
		if (stack < (buildingheight + (0.5 * buildingwidth)))
		{
			SchulmanScire10(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}
		else
		{
			HuberSnyder10(x, sigmay1, sigmaz1);
			sigmay0 = sigmay1;
			sigmaz0 = sigmaz1;
		}		
	}
	else
	{
		sigmaz0 = SigmaZ(x);
	}	
	double ratio = sigmaz0 / mix;	
	double v;
	if (ratio >= 1.6)
	{
		v = 2.506 * sigmaz0 / mix;
	}
	else
	{
		double scf, vg;
		if (deposition == TRUE)
		{
			scf = (0.16341 + (0.052 * exp(-8.461 * dp))) / dp;	
			vg = ((0.003 * dp * dp * pp) - (0.000003613 * dp * dp)) * scf / 100;
		}
		else
		{
			scf = 0;
			vg = 0;
		}
	double stackheight2;
	switch (plumerise)
	{
	case 0:
		stackheight = StackHeight10(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	case 1:
		stackheight = stack + SchulmanPlumeRise10(x) - ((x * 1000) * vg / us);
		if (stackheight < 0)
			stackheight2 = 0;
		else
			stackheight2 = stackheight;
		break;
	}

	stackheight1 = stackheight2 + (GetSTACKZ10() * 1000) - (z * 1000);
	
	int a;					//mixing height must not be lower than physical stack height
	if (mix > stackheight1)
		a = 1;
	else 
		a = 0;
	double elevation = (z - GetSTACKZ10()) * 1000;
	int b;					//terrain must not be higher than stack height
	if (elevation > stackheight1)
		b = 0;
	else
		b = 1;

	double total = 0;
	double H1 = ((z * 1000) - stackheight1) / sigmaz0;
	double H2 = ((z * 1000) + stackheight1) / sigmaz0;

	for (int i = 1; i <= 100; i = i + 1)
	{	double Ha = ((z * 1000) - ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hb = ((z * 1000) + ((2 * i * mix) - stackheight1)) / sigmaz0;
		double Hc = ((z * 1000) - ((2 * i * mix) + stackheight1)) / sigmaz0;
		double Hd = ((z * 1000) + ((2 * i * mix) + stackheight1)) / sigmaz0;
		double summation = exp(-0.5 * pow(Ha,2)) + exp(-0.5 * pow(Hb,2)) + exp(-0.5 * pow(Hc,2)) + exp(-0.5 * pow(Hd,2));
		total += summation; 
	}	
	v = (exp(-0.5 * pow(H1,2)) + exp(-0.5 * pow(H2,2)) + total) * a / b;
	}
	return v;
}

double CAirDoc::windchange4()
{
	double p;
 	double windheight = GetSTACK4()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange5()
{
	double p;
 	double windheight = GetSTACK5()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange6()
{
	double p;
 	double windheight = GetSTACK6()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange7()
{
	double p;
 	double windheight = GetSTACK7()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange8()
{
	double p;
 	double windheight = GetSTACK8()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange9()
{
	double p;
 	double windheight = GetSTACK9()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::windchange10()
{
	double p;
 	double windheight = GetSTACK10()/GetHEIGHTREF();
switch (GetRURAL_URBAN())
{
case TRUE:
	if (GetSTABILITYCLASS() == 0)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.20;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.25;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.30;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.30;
	break;
case FALSE:
 	if (GetSTABILITYCLASS() == 0)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 1)
 		p = 0.07;
 	if (GetSTABILITYCLASS() == 2)
 		p = 0.10;
 	if (GetSTABILITYCLASS() == 3)
 		p = 0.15;
 	if (GetSTABILITYCLASS() == 4)
 		p = 0.35;
 	if (GetSTABILITYCLASS() == 5)
 		p = 0.55;
	break;
}
 	double Us = GetU() * pow(windheight,p);
 	return Us;
}

double CAirDoc::decay1(double x)
{
	double D;
	double D1 = GetDECAY1();
	double u = windchange1();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay2(double x)
{
	double D;
	double D1 = GetDECAY2();
	double u = windchange2();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay3(double x)
{
	double D;
	double D1 = GetDECAY3();
	double u = windchange3();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay4(double x)
{
	double D;
	double D1 = GetDECAY4();
	double u = windchange4();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay5(double x)
{
	double D;
	double D1 = GetDECAY5();
	double u = windchange5();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay6(double x)
{
	double D;
	double D1 = GetDECAY6();
	double u = windchange6();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay7(double x)
{
	double D;
	double D1 = GetDECAY7();
	double u = windchange7();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay8(double x)
{
	double D;
	double D1 = GetDECAY8();
	double u = windchange8();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay9(double x)
{
	double D;
	double D1 = GetDECAY9();
	double u = windchange9();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

double CAirDoc::decay10(double x)
{
	double D;
	double D1 = GetDECAY10();
	double u = windchange10();
	double decay = 0.693 / D1;
	if (decay <= 0)
		D = 1;
	else
		D = exp(-1 * (decay  * ((x * 1000)/u)));	
	return D;
}

void CAirDoc::OnReceptorgridGrid() 
{
	Cgrid dlg;
	dlg.m_ramount = RAMOUNT;
	dlg.m_relevation = RELEVATION;
	dlg.m_rlength = RLENGTH;
	dlg.m_rring = RRING;
	dlg.m_between = BETWEEN;
	dlg.m_minx = MINX;
	dlg.m_maxx = MAXX;
	dlg.m_miny = MINY;
	dlg.m_maxy = MAXY;
	if (dlg.DoModal()==IDOK)
	{
		RAMOUNT = dlg.m_ramount;
		RELEVATION = dlg.m_relevation;
		RLENGTH = dlg.m_rlength;
		RRING = dlg.m_rring;
		BETWEEN = dlg.m_between;
		MINX = dlg.m_minx;
		MAXX = dlg.m_maxx;
		MINY = dlg.m_miny;
		MAXY = dlg.m_maxy;
		SetModifiedFlag();
	}	
}

double CAirDoc::radius(int i)
{
	double r1 = GetRLENGTH();
	double r = r1 + (i * r1);
	return r;	
}

double CAirDoc::tita(int j)
{
	double amount = GetRAMOUNT();
	double tita1 = 6.284 / amount;
	double tita2 = j* tita1;
	return tita2;
}

void CAirDoc::changeradius(int i1, int j1, double& xr, double& yr)
{
	int i = i1;
	int j = j1;
	double xr1 = radius(i) * sin(tita(j));
	double yr1 = radius(i) * cos(tita(j));
	xr = xr1;
	yr = yr1;
}

double CAirDoc::concentrationgrid(int i1, int j1)
{
	double xr1, yr1;
	
	int i = i1;
	int j = j1;
	
	double z = GetRELEVATION();

	changeradius(i,j,xr1,yr1);
	
	double x = xr1;
	double y = yr1;
	
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	
	return sumtotal;

}

double CAirDoc::concentrationstack1(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	
	double finalconcentration = concentration1(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack2(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX2(x,y);
	double distancey1 = DistanceY2(x,y);
	
	double finalconcentration = concentration2(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack3(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX3(x,y);
	double distancey1 = DistanceY3(x,y);
	
	double finalconcentration = concentration3(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack4(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX4(x,y);
	double distancey1 = DistanceY4(x,y);
	
	double finalconcentration = concentration4(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack5(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX5(x,y);
	double distancey1 = DistanceY5(x,y);
	
	double finalconcentration = concentration5(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack6(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX6(x,y);
	double distancey1 = DistanceY6(x,y);
	
	double finalconcentration = concentration6(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack7(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX7(x,y);
	double distancey1 = DistanceY7(x,y);
	
	double finalconcentration = concentration7(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack8(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX8(x,y);
	double distancey1 = DistanceY8(x,y);
	
	double finalconcentration = concentration8(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack9(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX9(x,y);
	double distancey1 = DistanceY9(x,y);
	
	double finalconcentration = concentration9(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationstack10(void)
{
	double x = GetX1();
	double y = GetY1();
	double z = GetZ1();
	double distancex1 = DistanceX10(x,y);
	double distancey1 = DistanceY10(x,y);
	
	double finalconcentration = concentration10(distancex1, distancey1,z);
	double finalconcentration1;
	if (finalconcentration > 0)
		finalconcentration1 = finalconcentration;
	else
		finalconcentration1 = 0;
	return finalconcentration1;
}

double CAirDoc::concentrationmatlab(float x1, float y1)
{
		
	double z = GetRELEVATION();
	
	double x = x1;
	double y = y1;
	
	double distancex1 = DistanceX1(x,y);
	double distancey1 = DistanceY1(x,y);
	double distancex2 = DistanceX2(x,y);
	double distancey2 = DistanceY2(x,y);
	double distancex3 = DistanceX3(x,y);
	double distancey3 = DistanceY3(x,y);
	double distancex4 = DistanceX4(x,y);
	double distancey4 = DistanceY4(x,y);
	double distancex5 = DistanceX5(x,y);
	double distancey5 = DistanceY5(x,y);
	double distancex6 = DistanceX6(x,y);
	double distancey6 = DistanceY6(x,y);
	double distancex7 = DistanceX7(x,y);
	double distancey7 = DistanceY7(x,y);
	double distancex8 = DistanceX8(x,y);
	double distancey8 = DistanceY8(x,y);
	double distancex9 = DistanceX9(x,y);
	double distancey9 = DistanceY9(x,y);
	double distancex10 = DistanceX10(x,y);
	double distancey10 = DistanceY10(x,y);

	double finalconcentration1, finalconcentration2, finalconcentration3;
	double finalconcentration4, finalconcentration5, finalconcentration6;
	double finalconcentration7, finalconcentration8, finalconcentration9;
	double finalconcentration10;
	
	double concentrationr1 = concentration1(distancex1,distancey1,z);
	if (concentrationr1 > 0)
		finalconcentration1 = concentrationr1;
	else
		finalconcentration1 = 0;
	
	double concentrationr2 = concentration2(distancex2,distancey2,z);
	if (concentrationr2 > 0)
		finalconcentration2 = concentrationr2;
	else
		finalconcentration2 = 0;

	double concentrationr3 = concentration3(distancex3,distancey3,z);
	if (concentrationr3 > 0)
		finalconcentration3 = concentrationr3;
	else
		finalconcentration3 = 0;
	double concentrationr4 = concentration4(distancex4,distancey4,z);
	if (concentrationr4 > 0)
		finalconcentration4 = concentrationr4;
	else
		finalconcentration4 = 0;
	double concentrationr5 = concentration5(distancex5,distancey5,z);
	if (concentrationr5 > 0)
		finalconcentration5 = concentrationr5;
	else
		finalconcentration5 = 0;
	double concentrationr6 = concentration6(distancex6,distancey6,z);
	if (concentrationr6 > 0)
		finalconcentration6 = concentrationr6;
	else
		finalconcentration6 = 0;
	double concentrationr7 = concentration7(distancex7,distancey7,z);
	if (concentrationr7 > 0)
		finalconcentration7 = concentrationr7;
	else
		finalconcentration7 = 0;
	double concentrationr8 = concentration8(distancex8,distancey8,z);
	if (concentrationr8 > 0)
		finalconcentration8 = concentrationr8;
	else
		finalconcentration8 = 0;
	double concentrationr9 = concentration9(distancex9,distancey9,z);
	if (concentrationr9 > 0)
		finalconcentration9 = concentrationr9;
	else
		finalconcentration9 = 0;
	double concentrationr10 = concentration10(distancex10,distancey10,z);
	if (concentrationr10 > 0)
		finalconcentration10 = concentrationr10;
	else
		finalconcentration10 = 0;

	double sum = finalconcentration1 + finalconcentration2 + finalconcentration3;
	double sum1 = finalconcentration4 + finalconcentration5 + finalconcentration6;
	double sum2 = finalconcentration7 + finalconcentration8 + finalconcentration9;
	double sum3 = sum + sum1 + sum2 + finalconcentration10;
	double sumtotal = time(sum3);
	
	return sumtotal;
}

// airView.cpp : implementation of the CAirView class
//

#include "stdafx.h"
#include "air.h"
#include "Graph.h"
#include "GraphSeries.h"
#include "airDoc.h"
#include "airView.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAirView

IMPLEMENT_DYNCREATE(CAirView, CScrollView)

BEGIN_MESSAGE_MAP(CAirView, CScrollView)
	//{{AFX_MSG_MAP(CAirView)
	ON_COMMAND(ID_CALCULATE_CALCULATE, OnCalculateCalculate)
	ON_COMMAND(ID_DRAWTIMEDEPENDENTGRAPH_DRAWTIMEDEPENDENTGRAPH, OnDrawtimedependentgraphDrawtimedependentgraph)
	ON_COMMAND(ID_SAVEASTEXTFILE_SAVEASTEXTFILE, OnSaveastextfileSaveastextfile)
	ON_COMMAND(ID_SAVEASTEXTFILE_SAVEASMFILE, OnSaveastextfileSaveasmfile)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAWGRAPH_DRAWGRAPH, OnDrawgraphDrawgraph)
	ON_COMMAND(ID_DRAWPIEGRAPH_DRAWPIEGRAPH, OnDrawpiegraphDrawpiegraph)
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
    ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
    ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAirView construction/destruction

CAirView::CAirView()
{
	m_display = FALSE;

}

CAirView::~CAirView()
{
}

BOOL CAirView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAirView drawing

void CAirView::OnDraw(CDC* pDC)
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (m_display)	
		Calculate(pDC);	

	if(graphComplete)
		testGraph->DrawGraph(pDC);
    UpdateWindow(); 
}

void CAirView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CAirView printing

BOOL CAirView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// TODO: call DoPreparePrinting to invoke the Print dialog box
    pInfo->SetMaxPage(1);
    return DoPreparePrinting(pInfo);
    //return CView::OnPreparePrinting(pInfo);
}

void CAirView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAirView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CAirView::OnPrint(CDC *pDC, CPrintInfo *pInfo)
{
	 // TODO: Add your specialized code here and/or call the base class
     int nPos;
     nPos = -720;  // 1/2 inch top margin
     if(graphComplete)
	 {
		 testGraph->SetMargins(-720, -15120, 720, 10800, nPos);  //portrait page
         nPos = testGraph->PrintGraph(pDC, pInfo);
     }
     //CView::OnPrint(pDC, pInfo);
}


/////////////////////////////////////////////////////////////////////////////
// CAirView diagnostics

#ifdef _DEBUG
void CAirView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CAirView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CAirDoc* CAirView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAirDoc)));
	return (CAirDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAirView message handlers



void CAirView::OnCalculateCalculate() 
{
	m_display = TRUE;
	graphComplete = FALSE;
	Invalidate();
}

void CAirView::Calculate(CDC *pDC)
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	//Initialize a LOGFONT structure for the fonts
	LOGFONT logFont;
	logFont.lfHeight = 16;
	logFont.lfWidth = 0;
	logFont.lfEscapement = 0;
	logFont.lfOrientation = 0;
	logFont.lfWeight = FW_NORMAL;
	logFont.lfItalic = 0;
	logFont.lfUnderline = 0;
	logFont.lfStrikeOut = 0;
	logFont.lfCharSet = ANSI_CHARSET;
	logFont.lfOutPrecision = OUT_DEFAULT_PRECIS;
	logFont.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	logFont.lfQuality = PROOF_QUALITY;
	logFont.lfPitchAndFamily = VARIABLE_PITCH | FF_ROMAN;
	strcpy(logFont.lfFaceName, "Arial");
	CFont font;
	font.CreateFontIndirect(&logFont);
	CFont* oldFont = pDC->SelectObject(&font);
	pDC->SetMapMode(MM_TEXT);
	//display
	pDC->TextOut(50, (60 + 0 * logFont.lfHeight), "Receptor 1");
	pDC->TextOut(50, (60 + 3 * logFont.lfHeight), "Receptor 2");
	pDC->TextOut(50, (60 + 6 * logFont.lfHeight), "Receptor 3");
	pDC->TextOut(50, (60 + 9 * logFont.lfHeight), "Receptor 4");
	pDC->TextOut(50, (60 + 12 * logFont.lfHeight), "Receptor 5");
	pDC->TextOut(50, (60 + 15 * logFont.lfHeight), "Receptor 6");
	pDC->TextOut(50, (60 + 18 * logFont.lfHeight), "Receptor 7");
	pDC->TextOut(50, (60 + 21 * logFont.lfHeight), "Receptor 8");
	pDC->TextOut(50, (60 + 24 * logFont.lfHeight), "Receptor 9");
	pDC->TextOut(50, (60 + 27 * logFont.lfHeight), "Receptor 10");	
	pDC->TextOut(160, 15, "Concentration, g/m3 * 10 ^6");
	pDC->TextOut(510, 15, "Concentration, g/m3 * 10 ^6");
	pDC->TextOut(350, 15, "x (km)");
	pDC->TextOut(450, 15, "y (km)");
	
	//line
	CPen pen(PS_SOLID, 2, RGB(0,0,100));
	CPen* oldPen = pDC->SelectObject(&pen);
	pDC->MoveTo(20, 50);
	pDC->LineTo(750, 50);
	pDC->SelectObject(oldPen);

	int rings = pDoc->GetRRING();
	int amount = pDoc->GetRAMOUNT();
	int total = rings * amount;

	//calculate the document size
	int a = 50 + 30 * logFont.lfHeight;
	int b = (total * 15) + (logFont.lfHeight * total) + 45;
	int a1, b1;
	if (a > b)
	{
		a1 = a;
		b1 = 0;
	}
	else
	{
		a1 = 0;
		b1 = b;
	}
	CSize docSize(100,  a1 + b1);
	//calculate the page size
	CRect rect;
	GetClientRect(&rect);
	CSize pageSize(rect.right, rect.bottom);
	//calculate the linesize
	CSize lineSize(0, logFont.lfHeight);
	//Adjust the scrollers
	SetScrollSizes(MM_TEXT, docSize, pageSize, lineSize);

	double conc1,conc2,conc3,conc4,conc5,conc6,conc7,conc8,conc9,conc10;
	char buf1[100];
	char buf2[100];
	char buf3[100];
	char buf4[100];
	char buf5[100];
	char buf6[100];
	char buf7[100];
	char buf8[100];
	char buf9[100];
	char buf10[100];
	//receptors
	conc1 = pDoc->Receptor1() * pow(10,6);
	conc2 = pDoc->Receptor2() * pow(10,6);
	conc3 = pDoc->Receptor3() * pow(10,6);
	conc4 = pDoc->Receptor4() * pow(10,6);
	conc5 = pDoc->Receptor5() * pow(10,6);
	conc6 = pDoc->Receptor6() * pow(10,6);
	conc7 = pDoc->Receptor7() * pow(10,6);
	conc8 = pDoc->Receptor8() * pow(10,6);
	conc9 = pDoc->Receptor9() * pow(10,6);
	conc10 = pDoc->Receptor10() * pow(10,6);
	
	
	//x, y coordinate
	double coorx, coory;
	double xr, yr;
	int position1 = 30;
	char bufcoorx[100];
	char bufcoory[100];
	
		for (int i1 = 0; i1 < rings; i1 = i1 + 1)
		{
			for (int j1 = 1; j1 <= amount; j1 = j1 + 1)
			{
				pDoc->changeradius(i1, j1, xr, yr);
				coorx = xr;
				coory = yr;
				sprintf(bufcoorx,"%f",coorx);
 				printf("&s", bufcoorx);
				sprintf(bufcoory,"%f",coory);
 				printf("&s", bufcoory);
				
				position1 = position1 + logFont.lfHeight + 15;
 				pDC->TextOut(350, position1, bufcoorx);
				pDC->TextOut(450, position1, bufcoory);
			}
		}
	
	//receptor grid
	double conc;
	int position = 30;
	char buf[100];
	
		for (int i = 0; i < rings; i = i + 1)
		{
			for (int j = 1; j <= amount; j = j + 1)
			{
				conc = pDoc->concentrationgrid(i,j) * pow(10,6);
				sprintf(buf,"%f",conc);
 				printf("&s", buf);
				
				position = position + logFont.lfHeight + 15;
 				pDC->TextOut(550, position, buf);
			}
		}
	
	//display results	
 	sprintf(buf1,"%f",conc1);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 0 * logFont.lfHeight), buf1);
	
	sprintf(buf2,"%f",conc2);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 3 * logFont.lfHeight), buf2);
	
	sprintf(buf3,"%f",conc3);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 6 * logFont.lfHeight), buf3);
	
	sprintf(buf4,"%f",conc4);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 9 * logFont.lfHeight), buf4);
	

	sprintf(buf5,"%f",conc5);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 12 * logFont.lfHeight), buf5);
	

	sprintf(buf6,"%f",conc6);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 15 * logFont.lfHeight), buf6);
	

	sprintf(buf7,"%f",conc7);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 18 * logFont.lfHeight), buf7);
	

	sprintf(buf8,"%f",conc8);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 21 * logFont.lfHeight), buf8);
	

	sprintf(buf9,"%f",conc9);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 24 * logFont.lfHeight), buf9);
	

	sprintf(buf10,"%f",conc10);
 	printf("&s", buf1);
 	pDC->TextOut(200, (60 + 27 * logFont.lfHeight), buf10);
	m_display = TRUE;
	pDC->SelectObject(oldFont);
	
		
}

void CAirView::OnDrawgraphDrawgraph()
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	m_display = FALSE;
	
	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);

	double conc1,conc2,conc3,conc4,conc5,conc6,conc7,conc8,conc9,conc10;
	conc1 = pDoc->Receptor1();
	conc2 = pDoc->Receptor2();
	conc3 = pDoc->Receptor3();
	conc4 = pDoc->Receptor4();
	conc5 = pDoc->Receptor5();
	conc6 = pDoc->Receptor6();
	conc7 = pDoc->Receptor7();
	conc8 = pDoc->Receptor8();
	conc9 = pDoc->Receptor9();
	conc10 = pDoc->Receptor10();

	int conc1a, conc2a, conc3a, conc4a, conc5a, conc6a, conc7a, conc8a, conc9a, conc10a;

	conc1a = conc1 * pow(10,8);
	conc2a = conc2 * pow(10,8);
	conc3a = conc3 * pow(10,8);
	conc4a = conc4 * pow(10,8);
	conc5a = conc5 * pow(10,8);
	conc6a = conc6 * pow(10,8);
	conc7a = conc7 * pow(10,8);
	conc8a = conc8 * pow(10,8);
	conc9a = conc9 * pow(10,8);
	conc10a = conc10 * pow(10,8);
	
	// TODO: Add your command handler code here
	testGraph = new CGraph(BAR_GRAPH);
	testGraph->SetGraphTitle("Concentration of pollutants at different receptor points");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);
	testGraph->SetGridLines(TRUE);
	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Receptor");
	testGraph->SetYAxisLabel("Concentration, g/m^3 * 10^8");
//	testGraph->SetGraphQuadType(2);
	testGraph->SetTickLimits(0, 10000, 1000);
//	testGraph->SetGraphQuadType(3);
//	testGraph->SetGraphQuadType(4);
//	testGraph->SetTickLimits(-300, 300, 100);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	CGraphSeries* series4 = new CGraphSeries();
	CGraphSeries* series5 = new CGraphSeries();
	CGraphSeries* series6 = new CGraphSeries();
	CGraphSeries* series7 = new CGraphSeries();
	CGraphSeries* series8 = new CGraphSeries();
	CGraphSeries* series9 = new CGraphSeries();
	CGraphSeries* series10 = new CGraphSeries();
	
	series1->SetLabel("Receptor 1");
	series2->SetLabel("Receptor 2");
	series3->SetLabel("Receptor 3");
	series4->SetLabel("Receptor 4");
	series5->SetLabel("Receptor 5");
	series6->SetLabel("Receptor 6");
	series7->SetLabel("Receptor 7");
	series8->SetLabel("Receptor 8");
	series9->SetLabel("Receptor 9");
	series10->SetLabel("Receptor 10");
	series1->SetData(0, conc1a);
	series2->SetData(0, conc2a);
	series3->SetData(0, conc3a);
	series4->SetData(0, conc4a);
	series5->SetData(0, conc5a);
	series6->SetData(0, conc6a);
	series7->SetData(0, conc7a);
	series8->SetData(0, conc8a);
	series9->SetData(0, conc9a);
	series10->SetData(0, conc10a);
	
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);
	testGraph->AddSeries(series4);
	testGraph->AddSeries(series5);
	testGraph->AddSeries(series6);
	testGraph->AddSeries(series7);
	testGraph->AddSeries(series8);
	testGraph->AddSeries(series9);
	testGraph->AddSeries(series10);

	//set the colors of my bars
	testGraph->SetColor(0, SKY_BLUE);

	graphComplete = TRUE;
	Invalidate();
}

void CAirView::OnDrawpiegraphDrawpiegraph()
{
	// TODO: Add your command handler code here
	m_display = FALSE;
	
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);

	double Receptor1 = pDoc->Receptor1();
	double concentrationstack1 = pDoc->concentrationstack1();
	double concentrationstack2 = pDoc->concentrationstack2();
	double concentrationstack3 = pDoc->concentrationstack3();
	double concentrationstack4 = pDoc->concentrationstack4();
	double concentrationstack5 = pDoc->concentrationstack5();
	double concentrationstack6 = pDoc->concentrationstack6();
	double concentrationstack7 = pDoc->concentrationstack7();
	double concentrationstack8 = pDoc->concentrationstack8();
	double concentrationstack9 = pDoc->concentrationstack9();
	double concentrationstack10 = pDoc->concentrationstack10();

	int stack1 = (concentrationstack1 / Receptor1) * 100;
	int stack2 = (concentrationstack2 / Receptor1) * 100;
	int stack3 = (concentrationstack3 / Receptor1) * 100;
	int stack4 = (concentrationstack4 / Receptor1) * 100;
	int stack5 = (concentrationstack5 / Receptor1) * 100;
	int stack6 = (concentrationstack6 / Receptor1) * 100;
	int stack7 = (concentrationstack7 / Receptor1) * 100;
	int stack8 = (concentrationstack8 / Receptor1) * 100;
	int stack9 = (concentrationstack9 / Receptor1) * 100;
	int stack10 = (concentrationstack10 / Receptor1) * 100;
	

	testGraph = new CGraph(PIE_GRAPH);
	testGraph->SetGraphTitle("Emitted pollutant by each stack at receptor 1");
	
	//set up legend
	testGraph->SetLegend(0, "Stack 1");
	testGraph->SetLegend(1, "Stack 2");
	testGraph->SetLegend(2, "Stack 3");
	testGraph->SetLegend(3, "Stack 4");
	testGraph->SetLegend(4, "Stack 5");
	testGraph->SetLegend(5, "Stack 6");
	testGraph->SetLegend(6, "Stack 7");
	testGraph->SetLegend(7, "Stack 8");
	testGraph->SetLegend(8, "Stack 9");
	testGraph->SetLegend(9, "Stack 10");

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
//	CGraphSeries* series2 = new CGraphSeries();
//	CGraphSeries* series3 = new CGraphSeries();
//	series1->SetLabel("day 1");
//	series2->SetLabel("day 2");
//	series3->SetLabel("day 3");
	series1->SetData(0, stack1);
	series1->SetData(1, stack2);
	series1->SetData(2, stack3);
	series1->SetData(3, stack4);
	series1->SetData(4, stack5);
	series1->SetData(5, stack6);
	series1->SetData(6, stack7);
	series1->SetData(7, stack8);
	series1->SetData(8, stack9);
	series1->SetData(9, stack10);
//	series2->SetData(0, 15);
//	series2->SetData(1, 15);
//	series2->SetData(2, 15);
//	series3->SetData(0, 10);
//	series3->SetData(1, 20);
//	series3->SetData(2, 30);
//	series3->SetData(3, 40);
//	series3->SetData(4, 50);

	testGraph->AddSeries(series1);
//	testGraph->AddSeries(series2);
//	testGraph->AddSeries(series3);

	//set the colors of my bars
	testGraph->SetColor(0, FOREST_GREEN);
	testGraph->SetColor(1, SKY_BLUE);
	testGraph->SetColor(2, DUSK);
	testGraph->SetColor(3, HOT_PINK);
	testGraph->SetColor(4, LAVENDER);
	testGraph->SetColor(5, ROYAL_BLUE);
	testGraph->SetColor(6, BROWN);
	testGraph->SetColor(7, MAROON);
	testGraph->SetColor(8, GREY);
	testGraph->SetColor(9, TAN);

	graphComplete = TRUE;
	Invalidate(TRUE);
}

void CAirView::OnDrawtimedependentgraphDrawtimedependentgraph() 
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	m_display = FALSE;
	
	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
	
	long double conc1, conc2, conc3, conc4, conc5, conc6, conc7, conc8, conc9, conc10, conc11, conc12, conc13, conc14, conc15, conc16, conc17, conc18, conc19, conc20;
	conc1 = pDoc->Receptor1() * pow(10,8);
	conc2 = pDoc->Receptor1() * pow(10,8);
	conc3 = pDoc->Receptor1() * pow(10,8);
	conc4 = pDoc->Receptor1() * pow(10,8);
	conc5 = pDoc->Receptor1() * pow(10,8);
	conc6 = pDoc->Receptor1() * pow(10,8);
	conc7 = pDoc->Receptor1() * pow(10,8);
	conc8 = pDoc->Receptor1() * pow(10,8);
	conc9 = pDoc->Receptor1() * pow(10,8);
	conc10 = pDoc->Receptor1() * pow(10,8);
	conc11 = pDoc->Receptor1() * pow(10,8);
	conc12 = pDoc->Receptor1() * pow(10,8);
	conc13 = pDoc->Receptor1() * pow(10,8);
	conc14 = pDoc->Receptor1() * pow(10,8);
	conc15 = pDoc->Receptor1() * pow(10,8);
	conc16 = pDoc->Receptor1() * pow(10,8);
	conc17 = pDoc->Receptor1() * pow(10,8);
	conc18 = pDoc->Receptor1() * pow(10,8);
	conc19 = pDoc->Receptor1() * pow(10,8);
	conc20 = pDoc->Receptor1() * pow(10,8);

	long double concentration1, concentration2, concentration3, concentration4, concentration5, concentration6, concentration7, concentration8, concentration9, concentration10, concentration11, concentration12, concentration13, concentration14, concentration15, concentration16, concentration17, concentration18, concentration19, concentration20; 
	concentration1 = conc1 * pow(0.667,0.5);
	concentration2 = conc2 * pow(0.333,0.5);
	concentration3 = conc3 * pow(0.222,0.5);
	concentration4 = conc4 * pow(0.167,0.5);
	concentration5 = conc5 * pow(0.133,0.5);
	concentration6 = conc6 * pow(0.111,0.5);
	concentration7 = conc7 * pow(0.095,0.5);
	concentration8 = conc8 * pow(0.083,0.5);
	concentration9 = conc9 * pow(0.074,0.5);
	concentration10 = conc10 * pow(0.067,0.5);
	concentration11 = conc11 * pow(0.061,0.5);
	concentration12 = conc12 * pow(0.056,0.5);
	concentration13 = conc13 * pow(0.051,0.5);
	concentration14 = conc14 * pow(0.048,0.5);
	concentration15 = conc15 * pow(0.044,0.5);
	concentration16 = conc16 * pow(0.042,0.5);
	concentration17 = conc17 * pow(0.039,0.5);
	concentration18 = conc18 * pow(0.037,0.5);
	concentration19 = conc19 * pow(0.035,0.5);
	concentration20 = conc20 * pow(0.033,0.5);
	
	long int conc1a, conc2a, conc3a, conc4a, conc5a, conc6a, conc7a, conc8a, conc9a, conc10a, conc11a, conc12a, conc13a, conc14a, conc15a, conc16a, conc17a, conc18a, conc19a, conc20a;
	conc1a = concentration1;
	conc2a = concentration2;
	conc3a = concentration3;
	conc4a = concentration4;
	conc5a = concentration5;
	conc6a = concentration6;
	conc7a = concentration7;
	conc8a = concentration8;
	conc9a = concentration9;
	conc10a = concentration10;
	conc11a = concentration11;
	conc12a = concentration12;
	conc13a = concentration13;
	conc14a = concentration14;
	conc15a = concentration15;
	conc16a = concentration16;
	conc17a = concentration17;
	conc18a = concentration18;
	conc19a = concentration19;
	conc20a = concentration20;

	// TODO: Add your command handler code here
	testGraph = new CGraph(BAR_GRAPH);
	testGraph->SetGraphTitle("Concentration of pollutants with time at receptor 1");
//	testGraph->SetGraphAlignment(HORIZONTAL_ALIGN);
	testGraph->SetGridLines(TRUE);
	testGraph->SetXAxisAlignment(0);
//	testGraph->SetXAxisAlignment(90);
//	testGraph->SetXAxisAlignment(270);
//	testGraph->SetXAxisAlignment(45);
//	testGraph->SetXAxisAlignment(315);
	testGraph->SetXAxisLabel("Time, min");
	testGraph->SetYAxisLabel("Concentration, g/m^3 * 10^8");
//	testGraph->SetGraphQuadType(2);
	testGraph->SetTickLimits(0, 10000, 1000);
//	testGraph->SetGraphQuadType(3);
//	testGraph->SetGraphQuadType(4);
//	testGraph->SetTickLimits(-300, 300, 100);

	//set up some series
	CGraphSeries* series1 = new CGraphSeries();
	CGraphSeries* series2 = new CGraphSeries();
	CGraphSeries* series3 = new CGraphSeries();
	CGraphSeries* series4 = new CGraphSeries();
	CGraphSeries* series5 = new CGraphSeries();
	CGraphSeries* series6 = new CGraphSeries();
	CGraphSeries* series7 = new CGraphSeries();
	CGraphSeries* series8 = new CGraphSeries();
	CGraphSeries* series9 = new CGraphSeries();
	CGraphSeries* series10 = new CGraphSeries();
	CGraphSeries* series11 = new CGraphSeries();
	CGraphSeries* series12 = new CGraphSeries();
	CGraphSeries* series13 = new CGraphSeries();
	CGraphSeries* series14 = new CGraphSeries();
	CGraphSeries* series15 = new CGraphSeries();
	CGraphSeries* series16 = new CGraphSeries();
	CGraphSeries* series17 = new CGraphSeries();
	CGraphSeries* series18 = new CGraphSeries();
	CGraphSeries* series19 = new CGraphSeries();
	CGraphSeries* series20 = new CGraphSeries();
	
	series1->SetLabel("15");
	series2->SetLabel("30");
	series3->SetLabel("45");
	series4->SetLabel("60");
	series5->SetLabel("75");
	series6->SetLabel("90");
	series7->SetLabel("105");
	series8->SetLabel("120");
	series9->SetLabel("135");
	series10->SetLabel("150");
	series11->SetLabel("165");
	series12->SetLabel("180");
	series13->SetLabel("195");
	series14->SetLabel("210");
	series15->SetLabel("225");
	series16->SetLabel("240");
	series17->SetLabel("255");
	series18->SetLabel("270");
	series19->SetLabel("285");
	series20->SetLabel("300");

	series1->SetData(0, conc1a);
	series2->SetData(0, conc2a);
	series3->SetData(0, conc3a);
	series4->SetData(0, conc4a);
	series5->SetData(0, conc5a);
	series6->SetData(0, conc6a);
	series7->SetData(0, conc7a);
	series8->SetData(0, conc8a);
	series9->SetData(0, conc9a);
	series10->SetData(0, conc10a);
	series11->SetData(0, conc11a);
	series12->SetData(0, conc12a);
	series13->SetData(0, conc13a);
	series14->SetData(0, conc14a);
	series15->SetData(0, conc15a);
	series16->SetData(0, conc16a);
	series17->SetData(0, conc17a);
	series18->SetData(0, conc18a);
	series19->SetData(0, conc19a);
	series20->SetData(0, conc20a);
	
	testGraph->AddSeries(series1);
	testGraph->AddSeries(series2);
	testGraph->AddSeries(series3);
	testGraph->AddSeries(series4);
	testGraph->AddSeries(series5);
	testGraph->AddSeries(series6);
	testGraph->AddSeries(series7);
	testGraph->AddSeries(series8);
	testGraph->AddSeries(series9);
	testGraph->AddSeries(series10);
	testGraph->AddSeries(series11);
	testGraph->AddSeries(series12);
	testGraph->AddSeries(series13);
	testGraph->AddSeries(series14);
	testGraph->AddSeries(series15);
	testGraph->AddSeries(series16);
	testGraph->AddSeries(series17);
	testGraph->AddSeries(series18);
	testGraph->AddSeries(series19);
	testGraph->AddSeries(series20);

	//set the colors of my bars
	testGraph->SetColor(0, SKY_BLUE);

	graphComplete = TRUE;
	Invalidate();
	
}

void CAirView::OnSaveastextfileSaveastextfile() 
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	
	FILE *stream;
	
	stream = fopen("HAWAtext.txt","w");
	
	double conc1 = pDoc->Receptor1() * pow(10,6);
	double conc2 = pDoc->Receptor2() * pow(10,6);
	double conc3 = pDoc->Receptor3() * pow(10,6);
	double conc4 = pDoc->Receptor4() * pow(10,6);
	double conc5 = pDoc->Receptor5() * pow(10,6);
	double conc6 = pDoc->Receptor6() * pow(10,6);
	double conc7 = pDoc->Receptor7() * pow(10,6);
	double conc8 = pDoc->Receptor8() * pow(10,6);
	double conc9 = pDoc->Receptor9() * pow(10,6);
	double conc10 = pDoc->Receptor10() * pow(10,6);

	float x1 = pDoc->GetX1();
	float x2 = pDoc->GetX2();
	float x3 = pDoc->GetX3();
	float x4 = pDoc->GetX4();
	float x5 = pDoc->GetX5();
	float x6 = pDoc->GetX6();
	float x7 = pDoc->GetX7();
	float x8 = pDoc->GetX8();
	float x9 = pDoc->GetX9();
	float x10 = pDoc->GetX10();
	float y1 = pDoc->GetY1();
	float y2 = pDoc->GetY2();
	float y3 = pDoc->GetY3();
	float y4 = pDoc->GetY4();
	float y5 = pDoc->GetY5();
	float y6 = pDoc->GetY6();
	float y7 = pDoc->GetY7();
	float y8 = pDoc->GetY8();
	float y9 = pDoc->GetY9();
	float y10 = pDoc->GetY10();
	float z1 = pDoc->GetZ1();
	float z2 = pDoc->GetZ2();
	float z3 = pDoc->GetZ3();
	float z4 = pDoc->GetZ4();
	float z5 = pDoc->GetZ5();
	float z6 = pDoc->GetZ6();
	float z7 = pDoc->GetZ7();
	float z8 = pDoc->GetZ8();
	float z9 = pDoc->GetZ9();
	float z10 = pDoc->GetZ10();
	float stackx1 = pDoc->GetSTACKX1();
	float stackx2 = pDoc->GetSTACKX2();
	float stackx3 = pDoc->GetSTACKX3();
	float stackx4 = pDoc->GetSTACKX4();
	float stackx5 = pDoc->GetSTACKX5();
	float stackx6 = pDoc->GetSTACKX6();
	float stackx7 = pDoc->GetSTACKX7();
	float stackx8 = pDoc->GetSTACKX8();
	float stackx9 = pDoc->GetSTACKX9();
	float stackx10 = pDoc->GetSTACKX10();
	
	float stacky1 = pDoc->GetSTACKY1();
	float stacky2 = pDoc->GetSTACKY2();
	float stacky3 = pDoc->GetSTACKY3();
	float stacky4 = pDoc->GetSTACKY4();
	float stacky5 = pDoc->GetSTACKY5();
	float stacky6 = pDoc->GetSTACKY6();
	float stacky7 = pDoc->GetSTACKY7();
	float stacky8 = pDoc->GetSTACKY8();
	float stacky9 = pDoc->GetSTACKY9();
	float stacky10 = pDoc->GetSTACKY10();
	
	float stackz1 = pDoc->GetSTACKZ1();
	float stackz2 = pDoc->GetSTACKZ2();
	float stackz3 = pDoc->GetSTACKZ3();
	float stackz4 = pDoc->GetSTACKZ4();
	float stackz5 = pDoc->GetSTACKZ5();
	float stackz6 = pDoc->GetSTACKZ6();
	float stackz7 = pDoc->GetSTACKZ7();
	float stackz8 = pDoc->GetSTACKZ8();
	float stackz9 = pDoc->GetSTACKZ9();
	float stackz10 = pDoc->GetSTACKZ10();
	
	fprintf(stream, "\t\tx(km)\t\ty(km)\t\tz(km)\t\tconcentration * 10^6, g/m3\n");
	fprintf(stream, "\nReceptor 1");
	fprintf(stream, "\t%f", x1);
	fprintf(stream, "\t%f", y1);
	fprintf(stream, "\t%f", z1);
	fprintf(stream, "\t%f", conc1);
	
	fprintf(stream, "\nReceptor 2");
	fprintf(stream, "\t%f", x2);
	fprintf(stream, "\t%f", y2);
	fprintf(stream, "\t%f", z2);
	fprintf(stream, "\t%f", conc2);

	fprintf(stream, "\nReceptor 3");
	fprintf(stream, "\t%f", x3);
	fprintf(stream, "\t%f", y3);
	fprintf(stream, "\t%f", z3);
	fprintf(stream, "\t%f", conc3);

	fprintf(stream, "\nReceptor 4");
	fprintf(stream, "\t%f", x4);
	fprintf(stream, "\t%f", y4);
	fprintf(stream, "\t%f", z4);
	fprintf(stream, "\t%f", conc4);
	
	fprintf(stream, "\nReceptor 5");
	fprintf(stream, "\t%f", x5);
	fprintf(stream, "\t%f", y5);
	fprintf(stream, "\t%f", z5);
	fprintf(stream, "\t%f", conc5);

	fprintf(stream, "\nReceptor 6");
	fprintf(stream, "\t%f", x6);
	fprintf(stream, "\t%f", y6);
	fprintf(stream, "\t%f", z6);
	fprintf(stream, "\t%f", conc6);

	fprintf(stream, "\nReceptor 7");
	fprintf(stream, "\t%f", x7);
	fprintf(stream, "\t%f", y7);
	fprintf(stream, "\t%f", z7);
	fprintf(stream, "\t%f", conc7);

	fprintf(stream, "\nReceptor 8");
	fprintf(stream, "\t%f", x8);
	fprintf(stream, "\t%f", y8);
	fprintf(stream, "\t%f", z8);
	fprintf(stream, "\t%f", conc8);

	fprintf(stream, "\nReceptor 9");
	fprintf(stream, "\t%f", x9);
	fprintf(stream, "\t%f", y9);
	fprintf(stream, "\t%f", z9);
	fprintf(stream, "\t%f", conc9);

	fprintf(stream, "\nReceptor 10");
	fprintf(stream, "\t%f", x10);
	fprintf(stream, "\t%f", y10);
	fprintf(stream, "\t%f", z10);
	fprintf(stream, "\t%f", conc10);

	fprintf(stream, "\n\nStack 1");
	fprintf(stream, "\t\t%f", stackx1);
	fprintf(stream, "\t%f", stacky1);
	fprintf(stream, "\t%f", stackz1);
	
	fprintf(stream, "\nStack 2");
	fprintf(stream, "\t\t%f", stackx2);
	fprintf(stream, "\t%f", stacky2);
	fprintf(stream, "\t%f", stackz2);
	
	fprintf(stream, "\nStack 3");
	fprintf(stream, "\t\t%f", stackx3);
	fprintf(stream, "\t%f", stacky3);
	fprintf(stream, "\t%f", stackz3);

	fprintf(stream, "\nStack 4");
	fprintf(stream, "\t\t%f", stackx4);
	fprintf(stream, "\t%f", stacky4);
	fprintf(stream, "\t%f", stackz4);

	fprintf(stream, "\nStack 5");
	fprintf(stream, "\t\t%f", stackx5);
	fprintf(stream, "\t%f", stacky5);
	fprintf(stream, "\t%f", stackz5);
	
	fprintf(stream, "\nStack 6");
	fprintf(stream, "\t\t%f", stackx6);
	fprintf(stream, "\t%f", stacky6);
	fprintf(stream, "\t%f", stackz6);

	fprintf(stream, "\nStack 7");
	fprintf(stream, "\t\t%f", stackx7);
	fprintf(stream, "\t%f", stacky7);
	fprintf(stream, "\t%f", stackz7);

	fprintf(stream, "\nStack 8");
	fprintf(stream, "\t\t%f", stackx8);
	fprintf(stream, "\t%f", stacky8);
	fprintf(stream, "\t%f", stackz8);

	fprintf(stream, "\nStack 9");
	fprintf(stream, "\t\t%f", stackx9);
	fprintf(stream, "\t%f", stacky9);
	fprintf(stream, "\t%f", stackz9);

	fprintf(stream, "\nStack 10");
	fprintf(stream, "\t%f", stackx10);
	fprintf(stream, "\t%f", stacky10);
	fprintf(stream, "\t%f", stackz10);

	int rings = pDoc->GetRRING();
	int amount = pDoc->GetRAMOUNT();	
	int total = rings * amount;
	double elevation = pDoc->GetRELEVATION();
	//x, y coordinate
	double coorx, coory;
	double xr, yr;
	
	//concentration
	double conc;
	fprintf(stream, "\n\nx(km)\t\ty(km)\t\tz(km)\t\tconcentration * 10^6, g/m3\n");
		for (int i1 = 0; i1 < rings; i1 = i1 + 1)
		{
			for (int j1 = 1; j1 <= amount; j1 = j1 + 1)
			{
				pDoc->changeradius(i1, j1, xr, yr);
				conc = pDoc->concentrationgrid(i1,j1) * pow(10,6);
				coorx = xr;
				coory = yr;
				
				fprintf(stream, "%f", coorx);
				fprintf(stream, "\t%f", coory);
				fprintf(stream, "\t%f", elevation);
				fprintf(stream, "\t\t%f\n", conc);

				
			}
		}
	
	
	fclose(stream);
	
	
		
		
}

void CAirView::OnSaveastextfileSaveasmfile() 
{
	CAirDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	

	float minx = pDoc->GetMINX();
	float maxx = pDoc->GetMAXX();
	float miny = pDoc->GetMINY();
	float maxy = pDoc->GetMAXY();
	float between = pDoc->GetBETWEEN();

	FILE *stream1;
	
	stream1 = fopen("HAWA.m","w");
	fprintf(stream1, "x = [");
	
	for (float minx1 = minx; minx1 < maxx; minx1 = minx1 + between)
	{
		for (float minx1 = minx; minx1 < maxx; minx1 = minx1 + between)
		{
			fprintf(stream1, " %f", minx1);		
		}
		
		fprintf(stream1, ";\n");
	}
	fprintf(stream1, "];\n");
	
	float difference = (maxy - miny) / between;
	fprintf(stream1, "y = [");
	for (float miny1 = miny; miny1 < maxy; miny1 = miny1 + between)
	{
			for (float difference1 = 0; difference1 < difference; difference1 = difference1 + 1)
			{
				fprintf(stream1, " %f", miny1);
			}
			fprintf(stream1, ";\n");					
	}	
	fprintf(stream1, "];\n");


	fprintf(stream1, "z = [");
		
	for (float miny2 = miny; miny2 < maxy; miny2 = miny2 + between)
	{
		for (float minx2 = minx; minx2 < maxx; minx2 = minx2 + between)
		{
			double concm = pDoc->concentrationmatlab(minx2,miny2) * pow(10,6);			
			fprintf(stream1, " %f", concm);		
		}
		
		fprintf(stream1, ";\n");
	}

	fprintf(stream1, "];\n");
	fprintf(stream1, "v = [0:1:300];\n");
	fprintf(stream1, "kontor = contour(x,y,z);\n");
	fprintf(stream1, "clabel(kontor,v);\n");
	fprintf(stream1, "maksz = 0;\n");
	fprintf(stream1, "for i = 1:%f\n",difference);
	fprintf(stream1, "for j = 1:%f\n",difference);
	fprintf(stream1, "if maksz < z(i,j)\n");
	fprintf(stream1, "maksz = z(i,j); maksx = x(i,j); maksy = y(i,j);\n");
	fprintf(stream1, "end\nend\nend");
	fclose(stream1);
	
}

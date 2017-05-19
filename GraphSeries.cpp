//GraphSeries.cpp - Version 3.0 (Brian Convery, May, 2001)

#include "stdafx.h"
#include "GraphSeries.h"
#include "GraphDataSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphSeries

CGraphSeries::CGraphSeries()
{
	dataValues = new CObList();
}

CGraphSeries::~CGraphSeries()
{
	POSITION pos;
	CGraphDataSet *dataSet;
	pos = dataValues->GetHeadPosition();
	while(pos != NULL)
	{
		dataSet = (CGraphDataSet*)dataValues->GetAt(pos);
		dataValues->RemoveAt(pos);
		delete dataSet;
	}
	delete dataValues;
}


BEGIN_MESSAGE_MAP(CGraphSeries, CStatic)
	//{{AFX_MSG_MAP(CGraphSeries)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphSeries message handlers

void CGraphSeries::SetLabel(CString label)
{
	seriesLabel = label;
}

void CGraphSeries::SetData(int xValue, int yValue)
{
	CGraphDataSet *dataSet = new CGraphDataSet();
	dataSet->SetXPosition(xValue);
	dataSet->SetYValue(yValue);
	dataValues->AddTail(dataSet);
}

CString CGraphSeries::GetLabel()
{
	return seriesLabel;
}

int CGraphSeries::GetData(int xValue)
{
	POSITION pos;
	pos = dataValues->GetHeadPosition();
	int retVal = 0;
	while(pos != NULL)
	{
		CGraphDataSet *dataSet;
		dataSet = (CGraphDataSet*)dataValues->GetAt(pos);
		if(dataSet->GetXData() == xValue)
		{
			retVal = dataSet->GetYData();
			return retVal;
		}
		dataValues->GetNext(pos);
	}
	return 0;
}

int CGraphSeries::GetDataCount()
{
	return dataValues->GetCount();
}

int CGraphSeries::GetXDataValue()
{
	POSITION pos;
	pos = dataValues->GetHeadPosition();
	CGraphDataSet *retVal;
	retVal = (CGraphDataSet*)dataValues->GetAt(pos);

	return retVal->GetXData();
}

int CGraphSeries::GetYDataValue()
{
	POSITION pos;
	pos = dataValues->GetHeadPosition();
	CGraphDataSet *retVal;
	retVal = (CGraphDataSet*)dataValues->GetAt(pos);

	return retVal->GetYData();
}

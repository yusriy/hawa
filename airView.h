// airView.h : interface of the CAirView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_AIRVIEW_H__7A409581_17B9_4158_86E5_555D5DE98880__INCLUDED_)
#define AFX_AIRVIEW_H__7A409581_17B9_4158_86E5_555D5DE98880__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Graph.h"

class CAirView : public CScrollView
{
protected: // create from serialization only
	CAirView();
	DECLARE_DYNCREATE(CAirView)

// Attributes
public:
	CAirDoc* GetDocument();
	CGraph* testGraph;
    BOOL graphComplete; //used to determine if graph ready to draw
	BOOL m_display;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAirView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void Calculate(CDC* pDC);
	virtual ~CAirView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif



// Generated message map functions
protected:
	//{{AFX_MSG(CAirView)
	afx_msg void OnCalculateCalculate();
	afx_msg void OnDrawtimedependentgraphDrawtimedependentgraph();
	afx_msg void OnSaveastextfileSaveastextfile();
	afx_msg void OnSaveastextfileSaveasmfile();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	afx_msg void OnDrawgraphDrawgraph();
	afx_msg void OnDrawpiegraphDrawpiegraph();
};

#ifndef _DEBUG  // debug version in airView.cpp
inline CAirDoc* CAirView::GetDocument()
   { return (CAirDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AIRVIEW_H__7A409581_17B9_4158_86E5_555D5DE98880__INCLUDED_)

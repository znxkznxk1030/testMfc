
// gitTestView.cpp : CgitTestView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "gitTest.h"
#endif

#include "gitTestDoc.h"
#include "gitTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CgitTestView

IMPLEMENT_DYNCREATE(CgitTestView, CView)

BEGIN_MESSAGE_MAP(CgitTestView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CgitTestView ����/�Ҹ�

CgitTestView::CgitTestView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CgitTestView::~CgitTestView()
{
}

BOOL CgitTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CgitTestView �׸���

void CgitTestView::OnDraw(CDC* /*pDC*/)
{
	CgitTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CgitTestView ����

#ifdef _DEBUG
void CgitTestView::AssertValid() const
{
	CView::AssertValid();
}

void CgitTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CgitTestDoc* CgitTestView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CgitTestDoc)));
	return (CgitTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CgitTestView �޽��� ó����


void CgitTestView::OnLButtonDown(UINT nFlags, CPoint point)
{

	AfxMessageBox(L"BUTTON");
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	CView::OnLButtonDown(nFlags, point);
}

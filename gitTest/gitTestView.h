
// gitTestView.h : CgitTestView Ŭ������ �������̽�
//

#pragma once


class CgitTestView : public CView
{
protected: // serialization������ ��������ϴ�.
	CgitTestView();
	DECLARE_DYNCREATE(CgitTestView)

// Ư���Դϴ�.
public:
	CgitTestDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// �����Դϴ�.
public:
	virtual ~CgitTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // gitTestView.cpp�� ����� ����
inline CgitTestDoc* CgitTestView::GetDocument() const
   { return reinterpret_cast<CgitTestDoc*>(m_pDocument); }
#endif


// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__6C2D7081_2DC2_40BE_A9BC_060AB45E1BD0__INCLUDED_)
#define AFX_MAINFRM_H__6C2D7081_2DC2_40BE_A9BC_060AB45E1BD0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	LRESULT OnShellNotify(WPARAM wParam,LPARAM lParam);
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:
	CStatusBar  m_wndStatusBar;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
 
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnViewHide();
	afx_msg void OnViewStatusBar();
	afx_msg void OnViewToolbar();
	afx_msg void OnClose();
	afx_msg void OnDestroy();
	afx_msg BOOL OnQueryEndSession();
	afx_msg void OnEndSession(BOOL bEnding);
	afx_msg void OnShellClose();
	afx_msg void OnShellView();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__6C2D7081_2DC2_40BE_A9BC_060AB45E1BD0__INCLUDED_)

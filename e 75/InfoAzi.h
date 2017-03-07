#pragma once
#include "afxwin.h"


// InfoAzi dialog

class InfoAzi : public CDialog
{
	DECLARE_DYNAMIC(InfoAzi)

public:
	InfoAzi(CWnd* pParent = NULL);   // standard constructor
	virtual ~InfoAzi();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit mList;
	BOOL OnInitDialog(void);
};

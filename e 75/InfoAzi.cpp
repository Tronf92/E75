// InfoAzi.cpp : implementation file
//

#include "stdafx.h"
#include "e 75.h"
#include "InfoAzi.h"
#include "afxdialogex.h"
#include <Windows.h>
#include <string.h>

// InfoAzi dialog

IMPLEMENT_DYNAMIC(InfoAzi, CDialog)

InfoAzi::InfoAzi(CWnd* pParent /*=NULL*/)
	: CDialog(InfoAzi::IDD, pParent)
{

}

InfoAzi::~InfoAzi()
{
}


void InfoAzi::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, mList);
}


BEGIN_MESSAGE_MAP(InfoAzi, CDialog)
END_MESSAGE_MAP()


// InfoAzi message handlers


BOOL InfoAzi::OnInitDialog(void)
{
	CDialog::OnInitDialog();
	COleDateTime  data = COleDateTime::GetCurrentTime();
	
	char buf[100];
	CString mesaj;
	itoa(data.GetDay(), buf, 10);
	mList.AddString("Ziua" + (CString)buf);

	itoa(data.GetMonth(), buf, 10);
	mList.AddString("Luna" + (CString)buf);

	itoa(data.GetYear(), buf, 10);
	mList.AddString("Anul: " +(CString)buf);





	return 0;
}

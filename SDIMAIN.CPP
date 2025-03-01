//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "SDIMain.h"

//---------------------------------------------------------------------
#pragma resource "*.dfm"
TSDIAppForm *SDIAppForm;
//---------------------------------------------------------------------
__fastcall TSDIAppForm::TSDIAppForm(TComponent *AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TSDIAppForm::Exit1Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TSDIAppForm::AboutClick(TObject *Sender)
{
	AboutBox->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TSDIAppForm::ModeClick(TObject *Sender)
{
	OKRightDlg->Show();
}
//---------------------------------------------------------------------------

void __fastcall TSDIAppForm::InputDataClick(TObject *Sender)
{
	DataInput->Show();
}
//---------------------------------------------------------------------------


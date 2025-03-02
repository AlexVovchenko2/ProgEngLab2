//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitInput.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataInput *DataInput;
//---------------------------------------------------------------------------
__fastcall TDataInput::TDataInput(TComponent* Owner)
	: TForm(Owner)
{
	StringGrid->Hide();
}
//---------------------------------------------------------------------------

int n,m;
void __fastcall TDataInput::ButtonClick(TObject *Sender)
{
	AnsiString s1, s2;
	s1 = EditRows->Text;
	s2 = EditColumns->Text;
	n = StrToInt(s1);
	m = StrToInt(s2);
	StringGrid->RowCount = n;
	StringGrid->ColCount = m;
	if (n > 0 && m > 0){
		StringGrid->Show();
	}
}
//---------------------------------------------------------------------------
void __fastcall TDataInput::ButtonInputClick(TObject *Sender)
{
	DataInput->Close();
}
//---------------------------------------------------------------------------

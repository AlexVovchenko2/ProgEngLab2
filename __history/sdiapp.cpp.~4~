//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------
USEFORM("SDIMAIN.CPP", SDIAppForm);
USEFORM("ABOUT.CPP", AboutBox);
USEFORM("UnitInput.cpp", DataInput);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	Application->Initialize();
	Application->CreateForm(__classid(TSDIAppForm), &SDIAppForm);
		Application->CreateForm(__classid(TAboutBox), &AboutBox);
		Application->CreateForm(__classid(TDataInput), &DataInput);
		Application->Run();

	return 0;
}
//---------------------------------------------------------------------

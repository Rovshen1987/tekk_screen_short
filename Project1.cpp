//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("general.cpp", General_F);
USEFORM("Configuration.cpp", Configuration_F);
USEFORM("Select_dialog_dir.cpp", Select_dialog_dir_F);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Tablet Light");
		Application->CreateForm(__classid(TGeneral_F), &General_F);
		Application->CreateForm(__classid(TConfiguration_F), &Configuration_F);
		Application->CreateForm(__classid(TSelect_dialog_dir_F), &Select_dialog_dir_F);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------

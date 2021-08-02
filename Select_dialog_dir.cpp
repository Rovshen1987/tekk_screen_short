//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Select_dialog_dir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSelect_dialog_dir_F *Select_dialog_dir_F;
//---------------------------------------------------------------------------
__fastcall TSelect_dialog_dir_F::TSelect_dialog_dir_F(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSelect_dialog_dir_F::Directory_LBChange(TObject *Sender)
{
 Directory_E->Text = AnsiString(Directory_LB->Directory+"\\");
}
//---------------------------------------------------------------------------
void __fastcall TSelect_dialog_dir_F::Cancel_BUTTONClick(TObject *Sender)
{
Select_dialog_dir_F->Close();
}
//---------------------------------------------------------------------------

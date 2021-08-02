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

	if (AnsiString(Directory_LB->Directory).Length()<4)
	{
	 Directory_E->Text = Directory_LB->Directory;
	}
	else
	{
	 Directory_E->Text = AnsiString(Directory_LB->Directory+'\\');
	}

}
//---------------------------------------------------------------------------
void __fastcall TSelect_dialog_dir_F::Cancel_BUTTONClick(TObject *Sender)
{
this->object             = 0;
Select_dialog_dir_F->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSelect_dialog_dir_F::Select_BUTTONClick(TObject *Sender)
{
 object->Text = this->Directory_E->Text;
 object       = 0;
 Select_dialog_dir_F->Close();
}
//---------------------------------------------------------------------------
void TSelect_dialog_dir_F::check_directory(TEdit* object)
{
  this->object                  = object;
  this->Directory_E->Text       = object->Text;
  this->Directory_LB->Directory = object->Text;
};


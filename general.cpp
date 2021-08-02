//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "general.h"
#include "Configuration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGeneral_F *General_F;
//---------------------------------------------------------------------------
__fastcall TGeneral_F::TGeneral_F(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGeneral_F::ButtonClick(TObject *Sender)
{
//
Configuration_F->Show();
//////HotKey1->HotKey = 16481;
//Form1->Caption = 3645;
}
//---------------------------------------------------------------------------
void __fastcall TGeneral_F::Button1Click(TObject *Sender)
{
std::unique_ptr<TRegistry> reg = std::make_unique<TRegistry>();
 reg->RootKey   = HKEY_CURRENT_USER;
// reg->OpenKey("tekk\\Alpari",true);
// reg->Access = KEY_WRITE;
// reg->WriteInteger("Wiki", 36);
//
 if (reg->KeyExists("System\\CurrentControlSet"))

 {
   General_F->Caption = "Bar";
 }
 else
 {
   General_F->Caption = "Yok";
 };
//
//AnsiString s = reg->ReadString("Path");
//Form1->Caption = s;

 reg->CloseKey();
//if (IsUserAnAdmin())
//{
//  Form1->Caption = "Da";
//}
//else
//{
// Form1->Caption = "No";
//}
}
//---------------------------------------------------------------------------


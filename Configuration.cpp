//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Configuration.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
TConfig *Config;
//---------------------------------------------------------------------------
__fastcall TConfig::TConfig(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------void TConfig::initilization()
void TConfig::initilization()
{
  Option->ActivePage  = Screen_shot;
  this->config_object = std::make_unique<Config_init>();
};
//---------------------------------------------------------------------------

void __fastcall TConfig::FormCreate(TObject *Sender)
{
initilization();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Them_CMChange(TObject *Sender)
{
Config->StyleName = Them_CM->Text;
}
//---------------------------------------------------------------------------




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

  this->config_object->set_Screenshot_of_the_entire_screen_EHK(Screenshot_of_the_entire_screen_EHK);
  this->config_object->set_Screenshot_of_the_active_window_EHK(Screenshot_of_the_active_window_EHK);
  this->config_object->set_Screenshot_of_the_screen_area_EHK(Screenshot_of_the_screen_area_EHK);
  this->config_object->set_Two_mouse_buttons_at_the_same_time_CH(Two_mouse_buttons_at_the_same_time_CH);

//----------Save_parameters------------------------------------//
  this->config_object->set_Server_RB(Server_RB);
  this->config_object->set_Address_E(Address_E);
  this->config_object->set_Login_E(Login_E);
  this->config_object->set_Password_E(Password_E);
  this->config_object->set_Show_Password_CH(Show_Password_CH);
  this->config_object->set_Locally_RB(Locally_RB);
  this->config_object->set_Locally_E(Locally_E);

//----------Additional_options---------------------------------//
  this->config_object->set_Show_the_cursor_on_the_screenshot_CH(Show_the_cursor_on_the_screenshot_CH);
  this->config_object->set_Show_magnifying_glass_CH(Show_magnifying_glass_CH);
  this->config_object->set_Open_screenshot_in_the_browser_CH(Open_screenshot_in_the_browser_CH);

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->config_object->set_Recording_screen_area_CH(Recording_screen_area_CH);
  this->config_object->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(Two_mouse_buttons_at_the_same_time_CH_VIDEO);
  this->config_object->set_Recording_screen_area_EHK(Recording_screen_area_EHK);

//-----------Save_parameters_VIDEO-----------------------------//
  this->config_object->set_Server_RB_VIDEO(Server_RB_VIDEO);
  this->config_object->set_Address_E_VIDEO(Address_E_VIDEO);
  this->config_object->set_Login_E_VIDEO(Login_E_VIDEO);
  this->config_object->set_Password_E_VIDEO(Password_E_VIDEO);
  this->config_object->set_Show_Password_CH_VIDEO(Show_Password_CH_VIDEO);
  this->config_object->set_Locally_RB_VIDEO(Locally_RB_VIDEO);
  this->config_object->set_Locally_E_VIDEO(Locally_E_VIDEO);

//------------Additional_options_VIDEO-------------------------//
  this->config_object->set_Always_record_the_microphone_CH_VIDEO(Always_record_the_microphone_CH_VIDEO);
  this->config_object->set_Record_audio_CH_VIDEO(Record_audio_CH_VIDEO);
  this->config_object->set_Open_video_in_the_browser_CH_VIDEO(Open_video_in_the_browser_CH_VIDEO);
  this->config_object->set_Log_create_CH(Log_create_CH);

//-------------Control-----------------------------------------//
  this->config_object->set_Save_BUTTON(Save_BUTTON);
  this->config_object->set_Exit_BUTTON(Exit_BUTTON);
  this->config_object->set_By_default_BUTTON(By_default_BUTTON);

//-----------------------------------------------------------//
//-----------------------------------------------------------//
//-----------------------------------------------------------//
//-----------------------------------------------------------//
   this->config_object->Check_registry_key();
   this->config_object->Control_button_v();

//	if( this->config_object->Check_registry_key())
//	{
//	 ShowMessage("Dogry");
//	}
//	else
//	{
//	 ShowMessage("Yalnys");
//	}
};
//---------------------------------------------------------------------------

void __fastcall TConfig::FormCreate(TObject *Sender)
{
initilization();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Them_CMChange(TObject *Sender)
{


 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------



void __fastcall TConfig::Server_RBClick(TObject *Sender)
{
  if (Server_RB->Checked)
  {
  this->Address_E->Enabled        = true;
  this->Login_E->Enabled          = true;
  this->Password_E->Enabled       = true;
  this->Show_Password_CH->Enabled = true;

  this->Locally_RB->Checked       = false;
  this->Locally_E->Enabled        = false;



	if (Show_Password_CH->Checked)
	{
	 Password_E->PasswordChar = 0;
	}
	else
	{
	 Password_E->PasswordChar = '*';
	}
  };

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Locally_RBClick(TObject *Sender)
{
   if (Locally_RB->Checked)
   {
	Locally_E->Enabled        = true;

	Server_RB->Checked        = false;
	Address_E->Enabled        = false;
	Login_E->Enabled          = false;
	Password_E->Enabled       = false;
	Show_Password_CH->Enabled = false;
   };

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Server_RB_VIDEOClick(TObject *Sender)
{
  if (Server_RB_VIDEO->Checked)
  {
  Address_E_VIDEO->Enabled        = true;
  Login_E_VIDEO->Enabled          = true;
  Password_E_VIDEO->Enabled       = true;
  Show_Password_CH_VIDEO->Enabled = true;

  Locally_RB_VIDEO->Checked       = false;
  Locally_E_VIDEO->Enabled        = false;

	if (Show_Password_CH_VIDEO->Checked)
	{
	 Password_E_VIDEO->PasswordChar = 0;
	}
	else
	{
	 Password_E_VIDEO->PasswordChar = '*';
	}
  };

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Locally_RB_VIDEOClick(TObject *Sender)
{
   if (Locally_RB_VIDEO->Checked)
   {
	Locally_E_VIDEO->Enabled        = true;

	Server_RB_VIDEO->Checked        = false;
	Address_E_VIDEO->Enabled        = false;
	Login_E_VIDEO->Enabled          = false;
	Password_E_VIDEO->Enabled       = false;
	Show_Password_CH_VIDEO->Enabled = false;
   };

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Show_Password_CHClick(TObject *Sender)
{
	if (Show_Password_CH->Checked)
	{
	 Password_E->PasswordChar = 0;
	}
	else
	{
	 Password_E->PasswordChar = '*';
	}

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Show_Password_CH_VIDEOClick(TObject *Sender)
{
	if (Show_Password_CH_VIDEO->Checked)
	{
	 Password_E_VIDEO->PasswordChar = 0;
	}
	else
	{
	 Password_E_VIDEO->PasswordChar = '*';
	}

 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Screenshot_of_the_entire_screen_EHKChange(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Screenshot_of_the_active_window_EHKChange(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Screenshot_of_the_screen_area_EHKChange(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Two_mouse_buttons_at_the_same_time_CHClick(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Address_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Login_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Password_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Locally_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Show_the_cursor_on_the_screenshot_CHClick(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Show_magnifying_glass_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Open_screenshot_in_the_browser_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Recording_screen_area_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Two_mouse_buttons_at_the_same_time_CH_VIDEOClick(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Recording_screen_area_EHKChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------


void __fastcall TConfig::Address_E_VIDEOChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Login_E_VIDEOChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Password_E_VIDEOChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Locally_E_VIDEOChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Always_record_the_microphone_CH_VIDEOClick(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Record_audio_CH_VIDEOClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Open_video_in_the_browser_CH_VIDEOClick(TObject *Sender)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_size_EChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_BUTTONClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_size_UP_BUTTONChanging(TObject *Sender, bool &AllowChange)

{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_bold_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_italic_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Font_underlined_CHClick(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfig::Long_type_line_CMChange(TObject *Sender)
{
 this->config_object->set_do_editing(true);
 this->config_object->Control_button_v();
}
//---------------------------------------------------------------------------


















void __fastcall TConfig::Long_lines_color_BUTTONClick(TObject *Sender)
{

// int a = Config->Long_lines_color_BUTTON->Color;
// std::string s = std::to_string(a);
//  Save_BUTTON->Caption = s.c_str();
}
//---------------------------------------------------------------------------


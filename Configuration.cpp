//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Configuration.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
TConfiguration_F *Configuration_F;
//---------------------------------------------------------------------------
__fastcall TConfiguration_F::TConfiguration_F(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------void TConfig::initilization()
void TConfiguration_F::initilization()
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
  this->config_object->set_Them_CB(Them_CB);

//-------------Control-----------------------------------------//
  this->config_object->set_Save_BUTTON(Save_BUTTON);
  this->config_object->set_Exit_BUTTON(Exit_BUTTON);
  this->config_object->set_By_default_BUTTON(By_default_BUTTON);
  this->config_object->set_Configuration_F(this);
  this->config_object->set_General_F(General_F);

//-----------------------------------------------------------//
//-----------------------------------------------------------//
//-----------------------------------------------------------//
//-----------------------------------------------------------//
   this->config_object->Check_registry_key();
   this->config_object->Control_button_v();


};
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::FormCreate(TObject *Sender)
{
initilization();
}
//---------------------------------------------------------------------------





void __fastcall TConfiguration_F::Server_RBClick(TObject *Sender)
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

 if (!this->config_object->Check_date_to_editin_object(Server_RB->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }

}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Locally_RBClick(TObject *Sender)
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

 if (!this->config_object->Check_date_to_editin_object(Locally_RB->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Server_RB_VIDEOClick(TObject *Sender)
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

 if (!this->config_object->Check_date_to_editin_object(Server_RB_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Locally_RB_VIDEOClick(TObject *Sender)
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

 if (!this->config_object->Check_date_to_editin_object(Locally_RB_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------


void __fastcall TConfiguration_F::Show_Password_CHClick(TObject *Sender)
{
	if (Show_Password_CH->Checked)
	{
	 Password_E->PasswordChar = 0;
	}
	else
	{
	 Password_E->PasswordChar = '*';
	}

 if (!this->config_object->Check_date_to_editin_object(Show_Password_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Show_Password_CH_VIDEOClick(TObject *Sender)
{
	if (Show_Password_CH_VIDEO->Checked)
	{
	 Password_E_VIDEO->PasswordChar = 0;
	}
	else
	{
	 Password_E_VIDEO->PasswordChar = '*';
	}

 if (!this->config_object->Check_date_to_editin_object(Show_Password_CH_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------


void __fastcall TConfiguration_F::Exit_BUTTONClick(TObject *Sender)
{


 if (!this->config_object->get_do_editing())
 {
 Configuration_F->Close();

 }


 this->config_object->Exit_BUTTON_v();
}

//---------------------------------------------------------------------------
void __fastcall TConfiguration_F::Locally_EChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Locally_E->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }

}
//---------------------------------------------------------------------------


void __fastcall TConfiguration_F::Screenshot_of_the_entire_screen_EHKChange(TObject *Sender)

{


 if (!this->config_object->Check_date_to_editin_object(Screenshot_of_the_entire_screen_EHK->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Screenshot_of_the_active_window_EHKChange(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Screenshot_of_the_active_window_EHK->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Screenshot_of_the_screen_area_EHKChange(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Screenshot_of_the_screen_area_EHK->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Address_EChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Address_E->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Login_EChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Login_E->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Password_EChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Password_E->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Two_mouse_buttons_at_the_same_time_CHClick(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Two_mouse_buttons_at_the_same_time_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Show_the_cursor_on_the_screenshot_CHClick(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Show_the_cursor_on_the_screenshot_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Show_magnifying_glass_CHClick(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Show_magnifying_glass_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Open_screenshot_in_the_browser_CHClick(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Open_screenshot_in_the_browser_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Recording_screen_area_CHClick(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Recording_screen_area_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Two_mouse_buttons_at_the_same_time_CH_VIDEOClick(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Two_mouse_buttons_at_the_same_time_CH_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Recording_screen_area_EHKChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Recording_screen_area_EHK->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Address_E_VIDEOChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Address_E_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Login_E_VIDEOChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Login_E_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Password_E_VIDEOChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Password_E_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Locally_E_VIDEOChange(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Locally_E_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Always_record_the_microphone_CH_VIDEOClick(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Always_record_the_microphone_CH_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Record_audio_CH_VIDEOClick(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Record_audio_CH_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Open_video_in_the_browser_CH_VIDEOClick(TObject *Sender)

{
 if (!this->config_object->Check_date_to_editin_object(Open_video_in_the_browser_CH_VIDEO->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Log_create_CHClick(TObject *Sender)
{
 if (!this->config_object->Check_date_to_editin_object(Log_create_CH->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::Save_BUTTONClick(TObject *Sender)
{
 this->config_object->Save_BUTTON_v();
}
//---------------------------------------------------------------------------

void __fastcall TConfiguration_F::By_default_BUTTONClick(TObject *Sender)
{
this->config_object->By_default_BUTTON_v();
}
//---------------------------------------------------------------------------


void __fastcall TConfiguration_F::Them_CBSelect(TObject *Sender)
{
this->config_object->Them_form_all(Them_CB->Text);
 if (!this->config_object->Check_date_to_editin_object(Them_CB->GetNamePath()))
 {
   this->config_object->set_do_editing("true");
   this->config_object->Control_button_v();
 }
}
//---------------------------------------------------------------------------


void __fastcall TConfiguration_F::Locally_E_BTN_BUTTONClick(TObject *Sender)
{

//ShowMessage(this->set_Directory(this->Locally_E->Text));
//Select_dialog_dir_F->Directory_LB->Directory = this->Locally_E->Text;
//Select_dialog_dir_F->Directory_E->Text = this->Locally_E->Text;
Select_dialog_dir_F->check_directory(this->Locally_E);
Select_dialog_dir_F->ShowModal();

}
//---------------------------------------------------------------------------




void __fastcall TConfiguration_F::Locally_BTN_BUTTON_VIDEOClick(TObject *Sender)
{
Select_dialog_dir_F->check_directory(this->Locally_E_VIDEO);
Select_dialog_dir_F->ShowModal();
}
//---------------------------------------------------------------------------


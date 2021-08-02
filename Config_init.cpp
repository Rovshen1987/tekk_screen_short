#include "Config_init.h"
#include "direct_r.h"

							  //PUBLIC//
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
Config_init::Config_init()
{
   this->Registry_config = new Config_init_registry;
   this->Program_config  = new Config_init_registry;
   this->Default_config  = new Config_init_registry;
   this->directory       = new direct_r;
   this->do_editing      = false;
   this->Default_config_init();
};

//Config_init::Config_init(const Config_init& object)
//{
//
//};
//
//Config_init& Config_init::operator=(const Config_init& object)
//{
//
//};
//
//Config_init::Config_init(Config_init&& object)
//{
//
//};
//
//Config_init& Config_init::operator=(Config_init&& object)
//{
//
//};

Config_init::~Config_init()
{
  this->anihilation_varrible();

};

//****************************************************************************//
//****************************************************************************//
//*****************************SET Section Begin******************************//
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
void Config_init::set_Screenshot_of_the_entire_screen_EHK(THotKey* set)
{
  this->Screenshot_of_the_entire_screen_EHK = set;
};

//-------------------------------------------------------
void Config_init::set_Screenshot_of_the_active_window_EHK(THotKey* set)
{
  this->Screenshot_of_the_active_window_EHK = set;
};

//-------------------------------------------------------
void Config_init::set_Screenshot_of_the_screen_area_EHK(THotKey* set)
{
  this->Screenshot_of_the_screen_area_EHK = set;
};

//-------------------------------------------------------
void Config_init::set_Two_mouse_buttons_at_the_same_time_CH(TCheckBox* set)
{
  this->Two_mouse_buttons_at_the_same_time_CH = set;
};


//----------Save_parameters------------------------------------//
void Config_init::set_Server_RB(TRadioButton* set)
{
  this->Server_RB = set;
};

//-------------------------------------------------------
void Config_init::set_Address_E(TEdit* set)
{
  this->Address_E = set;
};

//-------------------------------------------------------
void Config_init::set_Login_E(TEdit* set)
{
  this->Login_E = set;
};

//-------------------------------------------------------
void Config_init::set_Password_E(TEdit* set)
{
  this->Password_E = set;
};

//-------------------------------------------------------
void Config_init::set_Show_Password_CH(TCheckBox* set)
{
  this->Show_Password_CH = set;
};

//-------------------------------------------------------
void Config_init::set_Locally_RB(TRadioButton* set)
{
  this->Locally_RB = set;
};

//-------------------------------------------------------
void Config_init::set_Locally_E(TEdit* set)
{
  this->Locally_E = set;
};


//----------Additional_options---------------------------------//
void Config_init::set_Show_the_cursor_on_the_screenshot_CH(TCheckBox* set)
{
  this->Show_the_cursor_on_the_screenshot_CH = set;
};

//-------------------------------------------------------
void Config_init::set_Show_magnifying_glass_CH(TCheckBox* set)
{
  this->Show_magnifying_glass_CH = set;
};

//-------------------------------------------------------
void Config_init::set_Open_screenshot_in_the_browser_CH(TCheckBox* set)
{
  this->Open_screenshot_in_the_browser_CH = set;
};


//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
void Config_init::set_Recording_screen_area_CH(TCheckBox* set)
{
  this->Recording_screen_area_CH = set;
};

//-------------------------------------------------------
void Config_init::set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(TCheckBox* set)
{
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Recording_screen_area_EHK(THotKey* set)
{
  this->Recording_screen_area_EHK = set;
};


//-----------Save_parameters_VIDEO-----------------------------//
void Config_init::set_Server_RB_VIDEO(TRadioButton* set)
{
  this->Server_RB_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Address_E_VIDEO(TEdit* set)
{
  this->Address_E_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Login_E_VIDEO(TEdit* set)
{
  this->Login_E_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Password_E_VIDEO(TEdit* set)
{
  this->Password_E_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Show_Password_CH_VIDEO(TCheckBox* set)
{
  this->Show_Password_CH_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Locally_RB_VIDEO(TRadioButton* set)
{
   this->Locally_RB_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Locally_E_VIDEO(TEdit* set)
{
   this->Locally_E_VIDEO = set;
};


//------------Additional_options_VIDEO-------------------------//
void Config_init::set_Always_record_the_microphone_CH_VIDEO(TCheckBox* set)
{
  this->Always_record_the_microphone_CH_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Record_audio_CH_VIDEO(TCheckBox* set)
{
  this->Record_audio_CH_VIDEO = set;
};

//-------------------------------------------------------
void Config_init::set_Open_video_in_the_browser_CH_VIDEO(TCheckBox* set)
{
  this->Open_video_in_the_browser_CH_VIDEO = set;
};


//-------------------------------------------------------
void Config_init::set_Log_create_CH(TCheckBox* set)
{
  this->Log_create_CH = set;
};

//-------------------------------------------------------
void Config_init::set_Them_CB(TComboBox* set)
{
  this->Them_CB = set;
};


//------------------------------Control-------------------------------//
  void Config_init::set_By_default_BUTTON(TButton* set)
  {
	this->By_default_BUTTON = set;
  };

//-------------------------------------------------------
  void Config_init::set_Exit_BUTTON(TButton* set)
  {
	this->Exit_BUTTON = set;
  };

//-------------------------------------------------------
  void Config_init::set_Save_BUTTON(TButton* set)
  {
	this->Save_BUTTON = set;
  };

//-------------------------------------------------------
void Config_init::set_Configuration_F(TForm* set)
{
  this->Configuration_F = set;
};

//-------------------------------------------------------
void Config_init::set_General_F(TForm* set)
{
  this->General_F = set;
};

//-------------------------------------------------------
void Config_init::set_do_editing(bool set)
{
 this->do_editing = set;
};

//------------------------------------------------------
void Config_init::set_do_default(bool set)
{
  this->do_default = set;
};
//****************************************************************************//
//****************************************************************************//
//*****************************SET Section End********************************//
 //-------------------------------------------------------

//-------------------------------------------------------
bool Config_init::get_do_editing()
{
   return this->do_editing;
};

//-------------------------------------------------------
bool Config_init::get_do_default()
{
   return this->do_default;
};

//-------------------------------------------------------
void Config_init::Exit_BUTTON_v()
{


	if (Check_registry_key_in_side())
	{
	 this->Registry_read();
	 this->Form_to_config(this->Registry_config);
	 this->Config_to_form(this->Program_config);
	 this->Exit_BUTTON->Caption       = this->CONFIG_CLOSE;
	 this->Save_BUTTON->Enabled       = false;
	 this->do_editing                 = false;
	 this->By_default_BUTTON->Enabled = true;
	 this->do_default                 = true;
	}
	else
	{
	 this->Form_to_config(this->Default_config);
	 this->Config_to_form(this->Program_config);
	 this->Exit_BUTTON->Caption = this->CONFIG_CLOSE;
	 this->Save_BUTTON->Enabled       = false;
	 this->By_default_BUTTON->Enabled = false;
	 this->do_editing                 = false;
	 this->do_default                 = false;
	}

   this->Control_button_v();

};

//-------------------------------------------------------
void Config_init::By_default_BUTTON_v()
{
	 this->Form_to_config(this->Default_config);
	 this->Config_to_form(this->Program_config);
	 this->Exit_BUTTON->Caption       = this->CONFIG_RETURN;
	 this->Save_BUTTON->Enabled       = true;
	 this->By_default_BUTTON->Enabled = false;
	 this->do_editing                 = true;
	 this->do_default                 = false;

};

//-----------------------------------------------------------
void Config_init::Control_button_v()
{
	if (this->do_editing)
	{
	  this->Save_BUTTON->Enabled = true;
	  this->Exit_BUTTON->Caption = this->CONFIG_RETURN;
	}
	else
	{
	  this->Save_BUTTON->Enabled = false;
	  this->Exit_BUTTON->Caption = this->CONFIG_CLOSE;
	}
};

bool Config_init::Check_date_to_editin_object(const AnsiString& object)
{
  int object_i = 0;

  object_i = this->get_ID_object(object);

switch (object_i)
{
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
case 1:	{
			if (this->Check_date_to_editin_inside<int>(this->Screenshot_of_the_entire_screen_EHK->HotKey,
				  this->Program_config->get_Screenshot_of_the_entire_screen_EHK()))
			{
			 return true;
			}
			else
			{
			 return false;
			}
			break;
		};

case 2:	{
			if (this->Check_date_to_editin_inside<int>(this->Screenshot_of_the_active_window_EHK->HotKey,
				  this->Program_config->get_Screenshot_of_the_active_window_EHK()))
			{
			 return true;
			}
			else
			{
			 return false;
			}
			break;
		};

case 3:	{
			if (this->Check_date_to_editin_inside<int>(this->Screenshot_of_the_screen_area_EHK->HotKey,
				  this->Program_config->get_Screenshot_of_the_screen_area_EHK()))
			{
			 return true;
			}
			else
			{
			 return false;
			}
			break;
		};

case 4:	{
			if (this->Check_date_to_editin_inside(this->Two_mouse_buttons_at_the_same_time_CH->Checked,
				  this->Program_config->get_Two_mouse_buttons_at_the_same_time_CH()))
			{
			 return true;
			}
			else
			{
			 return false;
			}
			break;
		};

//----------Save_parameters------------------------------------//
case 5:	{
			 if (this->Check_date_to_editin_inside(this->Server_RB->Checked,
				  this->Program_config->get_Server_RB()))
			 {
			  return true;
			 }
			 else
			 {
			  return false;
			 }
			 break;
		};

case 6:	{
		  if (this->Check_date_to_editin_inside<AnsiString>(this->Address_E->Text,
			  this->Program_config->get_Address_E()))
		  {
		   return true;
		  }
		  else
		  {
		   return false;
		  }
		  break;
		};

case 7:	{
			if (this->Check_date_to_editin_inside<AnsiString>(this->Login_E->Text,
				this->Program_config->get_Login_E()))
			{
			  return true;
			}
			else
			{
			return false;
			}
			break;
		};

case 8:	{
		  if (this->Check_date_to_editin_inside<AnsiString>(this->Password_E->Text,
			  this->Program_config->get_Password_E()))
		  {
		   return true;
		  }
		  else
		  {
		   return false;
		  }
		break;
		};

case 9:	{
			if (this->Check_date_to_editin_inside(this->Show_Password_CH->Checked,
				this->Program_config->get_Show_Password_CH()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		};

case 10: {
			if (this->Check_date_to_editin_inside(this->Locally_RB->Checked,
				this->Program_config->get_Locally_RB()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		 };

case 11: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Locally_E->Text,
				this->Program_config->get_Locally_E()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		 };

//----------Additional_options---------------------------------//
case 12:  {
			if (this->Check_date_to_editin_inside(this->Show_the_cursor_on_the_screenshot_CH->Checked,
				this->Program_config->get_Show_the_cursor_on_the_screenshot_CH()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		  };

case 13:  {
			if (this->Check_date_to_editin_inside(this->Show_magnifying_glass_CH->Checked,
				this->Program_config->get_Show_magnifying_glass_CH()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		  };

case 14: {
			if (this->Check_date_to_editin_inside(this->Open_screenshot_in_the_browser_CH->Checked,
				this->Program_config->get_Open_screenshot_in_the_browser_CH()))
			{
			return true;
			}
			else
			{
			return false;
			}
			break;
		 };

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
case 15: {
			if (this->Check_date_to_editin_inside(this->Recording_screen_area_CH->Checked,
				  this->Program_config->get_Recording_screen_area_CH()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 16: {
			if (this->Check_date_to_editin_inside(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->Checked,
				  this->Program_config->get_Two_mouse_buttons_at_the_same_time_CH_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 17: {
			if (this->Check_date_to_editin_inside<int>(this->Recording_screen_area_EHK->HotKey,
				  this->Program_config->get_Recording_screen_area_EHK()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

//-----------Save_parameters_VIDEO-----------------------------//
case 18: {
			if (this->Check_date_to_editin_inside(this->Server_RB_VIDEO->Checked,
				  this->Program_config->get_Server_RB_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 19: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Address_E_VIDEO->Text,
				  this->Program_config->get_Address_E_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 20: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Login_E_VIDEO->Text,
				  this->Program_config->get_Login_E_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 21: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Password_E_VIDEO->Text,
				  this->Program_config->get_Password_E_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 22: {
			if (this->Check_date_to_editin_inside(this->Show_Password_CH_VIDEO->Checked,
				  this->Program_config->get_Show_Password_CH_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 23: {
			if (this->Check_date_to_editin_inside(this->Locally_RB_VIDEO->Checked,
				  this->Program_config->get_Locally_RB_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 24: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Locally_E_VIDEO->Text,
				  this->Program_config->get_Locally_E_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

//------------Additional_options_VIDEO-------------------------//
case 25: {
			if (this->Check_date_to_editin_inside(this->Always_record_the_microphone_CH_VIDEO->Checked,
				  this->Program_config->get_Always_record_the_microphone_CH_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 26: {
			if (this->Check_date_to_editin_inside(this->Record_audio_CH_VIDEO->Checked,
				  this->Program_config->get_Record_audio_CH_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 27: {
			if (this->Check_date_to_editin_inside(this->Open_video_in_the_browser_CH_VIDEO->Checked,
				  this->Program_config->get_Open_video_in_the_browser_CH_VIDEO()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 28: {
			if (this->Check_date_to_editin_inside(this->Log_create_CH->Checked,
				  this->Program_config->get_Log_create_CH()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };

case 29: {
			if (this->Check_date_to_editin_inside<AnsiString>(this->Them_CB->Text,
				  this->Program_config->get_Them_CB()))
		 {
		  return true;
		 }
		 else
		 {
		  return false;
		 }
		 break;
		 };
default: {
		   ShowMessage("Yalnys Bar! 710");
		 };
	;
}

  return true;
};

void Config_init::Save_BUTTON_v()
{
   if (!this->Save_BUTTON_HotKey_check())
   {
	return ShowMessage("ќдинаковы назначенные гор€чые клав€щи!");
   }

   this->Config_to_form(this->Program_config);
   this->Registry_save();
   this->do_editing = false;
   this->Registry_config = this->Program_config;
   this->Control_button_v();
};

void Config_init::Them_form_all(const AnsiString& set)
{
  this->General_F->StyleName       = set;
  this->Configuration_F->StyleName = set;

};

						//PRIVATE//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void Config_init::anihilation_varrible()//-----------Destroy object
{
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  this->Screenshot_of_the_entire_screen_EHK   = 0;
  this->Screenshot_of_the_active_window_EHK   = 0;
  this->Screenshot_of_the_screen_area_EHK     = 0;
  this->Two_mouse_buttons_at_the_same_time_CH = 0;

//----------Save_parameters------------------------------------//
  this->Server_RB        = 0;
  this->Address_E        = 0;
  this->Login_E          = 0;
  this->Password_E       = 0;
  this->Show_Password_CH = 0;
  this->Locally_RB       = 0;
  this->Locally_E        = 0;

//----------Additional_options---------------------------------//
  this->Show_the_cursor_on_the_screenshot_CH = 0;
  this->Show_magnifying_glass_CH             = 0;
  this->Open_screenshot_in_the_browser_CH    = 0;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->Recording_screen_area_CH                    = 0;
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO = 0;
  this->Recording_screen_area_EHK                   = 0;

//-----------Save_parameters_VIDEO-----------------------------//
  this->Server_RB_VIDEO        = 0;
  this->Address_E_VIDEO        = 0;
  this->Login_E_VIDEO          = 0;
  this->Password_E_VIDEO       = 0;
  this->Show_Password_CH_VIDEO = 0;
  this->Locally_RB_VIDEO       = 0;
  this->Locally_E_VIDEO        = 0;

//------------Additional_options_VIDEO-------------------------//
  this->Always_record_the_microphone_CH_VIDEO = 0;
  this->Record_audio_CH_VIDEO                 = 0;
  this->Open_video_in_the_browser_CH_VIDEO    = 0;
  this->Log_create_CH     = 0;
  this->Them_CB           = 0;

  this->By_default_BUTTON = 0;
  this->Exit_BUTTON       = 0;
  this->Save_BUTTON       = 0;
  this->Configuration_F   = 0;
  this->General_F         = 0;

  //------------------DELETE OBJECT----------------------------//
  delete this->Screenshot_of_the_entire_screen_EHK;
  delete this->Screenshot_of_the_active_window_EHK;
  delete this->Screenshot_of_the_screen_area_EHK;
  delete this->Two_mouse_buttons_at_the_same_time_CH;

//----------Save_parameters------------------------------------//
  delete this->Server_RB;
  delete this->Address_E;
  delete this->Login_E;
  delete this->Password_E;
  delete this->Show_Password_CH;
  delete this->Locally_RB;
  delete this->Locally_E;

//----------Additional_options---------------------------------//
  delete this->Show_the_cursor_on_the_screenshot_CH;
  delete this->Show_magnifying_glass_CH;
  delete this->Open_screenshot_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  delete this->Recording_screen_area_CH;
  delete this->Two_mouse_buttons_at_the_same_time_CH_VIDEO;
  delete this->Recording_screen_area_EHK;

//-----------Save_parameters_VIDEO-----------------------------//
  delete this->Server_RB_VIDEO;
  delete this->Address_E_VIDEO;
  delete this->Login_E_VIDEO;
  delete this->Password_E_VIDEO;
  delete this->Show_Password_CH_VIDEO;
  delete this->Locally_RB_VIDEO;
  delete this->Locally_E_VIDEO;

//------------Additional_options_VIDEO-------------------------//
  delete this->Always_record_the_microphone_CH_VIDEO;
  delete this->Record_audio_CH_VIDEO;
  delete this->Open_video_in_the_browser_CH_VIDEO;


  delete this->Log_create_CH;
  delete this->Them_CB;

//------------Control------------------------------------------//

  delete this->By_default_BUTTON;
  delete this->Exit_BUTTON;
  delete this->Save_BUTTON;
  delete this->Configuration_F;
  delete this->General_F;

//-------------------------------------------------------------//
  delete this->Registry_config;
  delete this->Program_config;
  delete this->Default_config;
  delete this->directory;

};


//-------------------------------------------------------
void Config_init::Registry_destroy()
{

};

//-------------------------------------------------------
void Config_init::Registry_save(bool Default)
{
TRegistry* reg = new TRegistry();
reg->RootKey   = this->Root_key_C;
reg->OpenKey(this->Screen_shot_ASC,true);

//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
this->Registry_save_inside(___int,this->Program_config->get_Screenshot_of_the_entire_screen_EHK(),
						  this->Registry_config->get_Screenshot_of_the_entire_screen_EHK(),
						  this->Screenshot_of_the_entire_screen_EHK->GetNamePath(), reg, Default);

this->Registry_save_inside(___int,this->Program_config->get_Screenshot_of_the_active_window_EHK(),
						  this->Registry_config->get_Screenshot_of_the_active_window_EHK(),
						  this->Screenshot_of_the_active_window_EHK->GetNamePath(), reg, Default);

this->Registry_save_inside(___int,this->Program_config->get_Screenshot_of_the_screen_area_EHK(),
						  this->Registry_config->get_Screenshot_of_the_screen_area_EHK(),
						  this->Screenshot_of_the_screen_area_EHK->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Two_mouse_buttons_at_the_same_time_CH(),
						  this->Registry_config->get_Two_mouse_buttons_at_the_same_time_CH(),
						  this->Two_mouse_buttons_at_the_same_time_CH->GetNamePath(), reg, Default);


//----------Save_parameters------------------------------------//
this->Registry_save_inside(___bool,this->Program_config->get_Server_RB(),
						  this->Registry_config->get_Server_RB(),
						  this->Server_RB->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Address_E(),
						  this->Registry_config->get_Address_E(),
						  this->Address_E->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Login_E(),
						  this->Registry_config->get_Login_E(),
						  this->Login_E->GetNamePath(), reg, Default);
//
this->Registry_save_inside(___AnsiString,this->Program_config->get_Password_E(),
						  this->Registry_config->get_Password_E(),
						  this->Password_E->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Show_Password_CH(),
						  this->Registry_config->get_Show_Password_CH(),
						  this->Show_Password_CH->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Locally_RB(),
						  this->Registry_config->get_Locally_RB(),
						  this->Locally_RB->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Locally_E(),
						  this->Registry_config->get_Locally_E(),
						  this->Locally_E->GetNamePath(), reg, Default);


//----------Additional_options---------------------------------//
this->Registry_save_inside(___bool,this->Program_config->get_Show_the_cursor_on_the_screenshot_CH(),
						  this->Registry_config->get_Show_the_cursor_on_the_screenshot_CH(),
						  this->Show_the_cursor_on_the_screenshot_CH->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Show_magnifying_glass_CH(),
						  this->Registry_config->get_Show_magnifying_glass_CH(),
						  this->Show_magnifying_glass_CH->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Open_screenshot_in_the_browser_CH(),
						  this->Registry_config->get_Open_screenshot_in_the_browser_CH(),
						  this->Open_screenshot_in_the_browser_CH->GetNamePath(), reg, Default);

reg->CloseKey();




//--------------------------------------------------------------------------------PAGE__2----------
reg->OpenKey(this->Video_ASC,true);
//-----------Hot_keys_VIDEO------------------------------------//
this->Registry_save_inside(___bool,this->Program_config->get_Recording_screen_area_CH(),
						  this->Registry_config->get_Recording_screen_area_CH(),
						  this->Recording_screen_area_CH->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Two_mouse_buttons_at_the_same_time_CH_VIDEO(),
						  this->Registry_config->get_Two_mouse_buttons_at_the_same_time_CH_VIDEO(),
						  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___int,this->Program_config->get_Recording_screen_area_EHK(),
						  this->Registry_config->get_Recording_screen_area_EHK(),
						  this->Recording_screen_area_EHK->GetNamePath(), reg, Default);

//-----------Save_parameters_VIDEO-----------------------------//
this->Registry_save_inside(___bool,this->Program_config->get_Server_RB_VIDEO(),
						  this->Registry_config->get_Server_RB_VIDEO(),
						  this->Server_RB_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Address_E_VIDEO(),
						  this->Registry_config->get_Address_E_VIDEO(),
						  this->Address_E_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Login_E_VIDEO(),
						  this->Registry_config->get_Login_E_VIDEO(),
						  this->Login_E_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Password_E_VIDEO(),
						  this->Registry_config->get_Password_E_VIDEO(),
						  this->Password_E_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Show_Password_CH_VIDEO(),
						  this->Registry_config->get_Show_Password_CH_VIDEO(),
						  this->Show_Password_CH_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Locally_RB_VIDEO(),
						  this->Registry_config->get_Locally_RB_VIDEO(),
						  this->Locally_RB_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString,this->Program_config->get_Locally_E_VIDEO(),
						  this->Registry_config->get_Locally_E_VIDEO(),
						  this->Locally_E_VIDEO->GetNamePath(), reg, Default);


//------------Additional_options_VIDEO-------------------------//
this->Registry_save_inside(___bool,this->Program_config->get_Always_record_the_microphone_CH_VIDEO(),
						  this->Registry_config->get_Always_record_the_microphone_CH_VIDEO(),
						  this->Always_record_the_microphone_CH_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Record_audio_CH_VIDEO(),
						  this->Registry_config->get_Record_audio_CH_VIDEO(),
						  this->Record_audio_CH_VIDEO->GetNamePath(), reg, Default);

this->Registry_save_inside(___bool,this->Program_config->get_Open_video_in_the_browser_CH_VIDEO(),
						  this->Registry_config->get_Open_video_in_the_browser_CH_VIDEO(),
						  this->Open_video_in_the_browser_CH_VIDEO->GetNamePath(), reg, Default);


this->Registry_save_inside(___bool, this->Program_config->get_Log_create_CH(),
						  this->Registry_config->get_Log_create_CH(),
						  this->Log_create_CH->GetNamePath(), reg, Default);

this->Registry_save_inside(___AnsiString, this->Program_config->get_Them_CB(),
						  this->Registry_config->get_Them_CB(),
						  this->Them_CB->GetNamePath(), reg, Default);

reg->CloseKey();
delete reg;

this->do_editing = false;
};

//-------------------------------------------------------
void Config_init::Registry_read()
{
std::unique_ptr<TRegistry> reg = std::make_unique<TRegistry>();
reg->RootKey                   = this->Root_key_C;
reg->OpenKeyReadOnly(this->Screen_shot_ASC);
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
this->Registry_config->set_Screenshot_of_the_entire_screen_EHK(reg->ReadInteger(this->Screenshot_of_the_entire_screen_EHK->GetNamePath()));
this->Registry_config->set_Screenshot_of_the_active_window_EHK(reg->ReadInteger(this->Screenshot_of_the_active_window_EHK->GetNamePath()));
this->Registry_config->set_Screenshot_of_the_screen_area_EHK(reg->ReadInteger(this->Screenshot_of_the_screen_area_EHK->GetNamePath()));
this->Registry_config->set_Two_mouse_buttons_at_the_same_time_CH(reg->ReadBool(this->Two_mouse_buttons_at_the_same_time_CH->GetNamePath()));

//----------Save_parameters------------------------------------//
this->Registry_config->set_Server_RB(reg->ReadBool(this->Server_RB->GetNamePath()));
this->Registry_config->set_Address_E(reg->ReadString(this->Address_E->GetNamePath()));
this->Registry_config->set_Login_E(reg->ReadString(this->Login_E->GetNamePath()));
this->Registry_config->set_Password_E(reg->ReadString(this->Password_E->GetNamePath()));
this->Registry_config->set_Show_Password_CH(reg->ReadBool(this->Show_Password_CH->GetNamePath()));
this->Registry_config->set_Locally_RB(reg->ReadBool(this->Locally_RB->GetNamePath()));
this->Registry_config->set_Locally_E(reg->ReadString(this->Locally_E->GetNamePath()));

//----------Additional_options---------------------------------//
this->Registry_config->set_Show_the_cursor_on_the_screenshot_CH(reg->ReadBool(this->Show_the_cursor_on_the_screenshot_CH->GetNamePath()));
this->Registry_config->set_Show_magnifying_glass_CH(reg->ReadBool(this->Show_magnifying_glass_CH->GetNamePath()));
this->Registry_config->set_Open_screenshot_in_the_browser_CH(reg->ReadBool(this->Open_screenshot_in_the_browser_CH->GetNamePath()));

reg->CloseKey();


//--------------------------------------------------------------------------------PAGE__2----------
reg->OpenKeyReadOnly(this->Video_ASC);
//-----------Hot_keys_VIDEO------------------------------------//
this->Registry_config->set_Recording_screen_area_CH(reg->ReadBool(this->Recording_screen_area_CH->GetNamePath()));
this->Registry_config->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(reg->ReadBool(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->GetNamePath()));
this->Registry_config->set_Recording_screen_area_EHK(reg->ReadInteger(this->Recording_screen_area_EHK->GetNamePath()));

//-----------Save_parameters_VIDEO-----------------------------//
this->Registry_config->set_Server_RB_VIDEO(reg->ReadBool(this->Server_RB_VIDEO->GetNamePath()));
this->Registry_config->set_Address_E_VIDEO(reg->ReadString(this->Address_E_VIDEO->GetNamePath()));
this->Registry_config->set_Login_E_VIDEO(reg->ReadString(this->Login_E_VIDEO->GetNamePath()));
this->Registry_config->set_Password_E_VIDEO(reg->ReadString(this->Password_E_VIDEO->GetNamePath()));
this->Registry_config->set_Show_Password_CH_VIDEO(reg->ReadBool(this->Show_Password_CH_VIDEO->GetNamePath()));
this->Registry_config->set_Locally_RB_VIDEO(reg->ReadBool(this->Locally_RB_VIDEO->GetNamePath()));
this->Registry_config->set_Locally_E_VIDEO(reg->ReadString(this->Locally_E_VIDEO->GetNamePath()));

//------------Additional_options_VIDEO-------------------------//
this->Registry_config->set_Always_record_the_microphone_CH_VIDEO(reg->ReadBool(this->Always_record_the_microphone_CH_VIDEO->GetNamePath()));
this->Registry_config->set_Record_audio_CH_VIDEO(reg->ReadBool(this->Record_audio_CH_VIDEO->GetNamePath()));
this->Registry_config->set_Open_video_in_the_browser_CH_VIDEO(reg->ReadBool(this->Open_video_in_the_browser_CH_VIDEO->GetNamePath()));

this->Registry_config->set_Log_create_CH(reg->ReadBool(this->Log_create_CH->GetNamePath()));
this->Registry_config->set_Them_CB(reg->ReadString(this->Them_CB->GetNamePath()));

reg->CloseKey();

this->Control_button_v();

};

//-------------------------------------------------------
void Config_init::Program_config_init()
{
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
this->Program_config->set_Screenshot_of_the_entire_screen_EHK(this->Screenshot_of_the_entire_screen_EHK->HotKey);
this->Program_config->set_Screenshot_of_the_active_window_EHK(this->Screenshot_of_the_active_window_EHK->HotKey);
this->Program_config->set_Screenshot_of_the_screen_area_EHK(this->Screenshot_of_the_screen_area_EHK->HotKey);
this->Program_config->set_Two_mouse_buttons_at_the_same_time_CH(this->Checked(this->Two_mouse_buttons_at_the_same_time_CH));

//----------Save_parameters------------------------------------//
this->Program_config->set_Server_RB(this->Checked(this->Server_RB));
this->Program_config->set_Address_E(this->Address_E->Text);
this->Program_config->set_Login_E(this->Login_E->Text);
this->Program_config->set_Password_E(this->Password_E->Text);
this->Program_config->set_Show_Password_CH(this->Checked(this->Show_Password_CH));
this->Program_config->set_Locally_RB(this->Checked(this->Locally_RB));
this->Program_config->set_Locally_E(this->Locally_E->Text);

//----------Additional_options---------------------------------//
this->Program_config->set_Show_the_cursor_on_the_screenshot_CH(this->Checked(this->Show_the_cursor_on_the_screenshot_CH));
this->Program_config->set_Show_magnifying_glass_CH(this->Checked(this->Show_magnifying_glass_CH));
this->Program_config->set_Open_screenshot_in_the_browser_CH(this->Checked(this->Open_screenshot_in_the_browser_CH));

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
this->Program_config->set_Recording_screen_area_CH(this->Checked(this->Recording_screen_area_CH));
this->Program_config->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(this->Checked(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO));
this->Program_config->set_Recording_screen_area_EHK(this->Recording_screen_area_EHK->HotKey);

//-----------Save_parameters_VIDEO-----------------------------//
this->Program_config->set_Server_RB_VIDEO(this->Checked(this->Server_RB_VIDEO));
this->Program_config->set_Address_E_VIDEO(this->Address_E_VIDEO->Text);
this->Program_config->set_Login_E_VIDEO(this->Login_E_VIDEO->Text);
this->Program_config->set_Password_E_VIDEO(this->Password_E_VIDEO->Text);
this->Program_config->set_Show_Password_CH_VIDEO(this->Checked(this->Show_Password_CH_VIDEO));
this->Program_config->set_Locally_RB_VIDEO(this->Checked(this->Locally_RB_VIDEO));
this->Program_config->set_Locally_E_VIDEO(this->Locally_E_VIDEO->Text);

//------------Additional_options_VIDEO-------------------------//
this->Program_config->set_Always_record_the_microphone_CH_VIDEO(this->Checked(this->Always_record_the_microphone_CH_VIDEO));
this->Program_config->set_Record_audio_CH_VIDEO(this->Checked(this->Record_audio_CH_VIDEO));
this->Program_config->set_Open_video_in_the_browser_CH_VIDEO(this->Checked(this->Open_video_in_the_browser_CH_VIDEO));

this->Program_config->set_Log_create_CH(this->Checked(this->Log_create_CH));
this->Program_config->set_Them_CB(this->Them_CB->Text);
};

//-------------------------------------------------------
bool Config_init::Checked(TCheckBox* ch)
{
   if (ch->Checked)
   {
	return true;
   }
   else
   {
	return false;
   };

};

//-------------------------------------------------------
bool Config_init::Checked(TRadioButton* ch)
{
   if (ch->Checked)
   {
	return true;
   }
   else
   {
	return false;
   };

};

//-------------------------------------------------------
void Config_init::Default_config_init()
{

///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  this->Default_config->set_Screenshot_of_the_entire_screen_EHK(0);
  this->Default_config->set_Screenshot_of_the_active_window_EHK(0);
  this->Default_config->set_Screenshot_of_the_screen_area_EHK(0);
  this->Default_config->set_Two_mouse_buttons_at_the_same_time_CH(false);

//----------Save_parameters------------------------------------//
  this->Default_config->set_Server_RB(false);
  this->Default_config->set_Address_E("google.com/");
  this->Default_config->set_Login_E("Admin");
  this->Default_config->set_Password_E("Password");
  this->Default_config->set_Show_Password_CH(true);
  this->Default_config->set_Locally_RB(true);
  this->Default_config->set_Locally_E(this->fool_path(Config_init::FOLDER_NAME_PICTURE));

//----------Additional_options---------------------------------//
  this->Default_config->set_Show_the_cursor_on_the_screenshot_CH(false);
  this->Default_config->set_Show_magnifying_glass_CH(false);
  this->Default_config->set_Open_screenshot_in_the_browser_CH(false);

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->Default_config->set_Recording_screen_area_CH(false);
  this->Default_config->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(false);
  this->Default_config->set_Recording_screen_area_EHK(0);

//-----------Save_parameters_VIDEO-----------------------------//
  this->Default_config->set_Server_RB_VIDEO(false);
  this->Default_config->set_Address_E_VIDEO("google.com/");
  this->Default_config->set_Login_E_VIDEO("Login");
  this->Default_config->set_Password_E_VIDEO("Password");
  this->Default_config->set_Show_Password_CH_VIDEO(true);
  this->Default_config->set_Locally_RB_VIDEO(true);
  this->Default_config->set_Locally_E_VIDEO(this->fool_path(Config_init::FOLDER_NAME_VIDEO));

//------------Additional_options_VIDEO-------------------------//
  this->Default_config->set_Always_record_the_microphone_CH_VIDEO(false);
  this->Default_config->set_Record_audio_CH_VIDEO(false);
  this->Default_config->set_Open_video_in_the_browser_CH_VIDEO(false);



  this->Default_config->set_Log_create_CH(true);
  this->Default_config->set_Them_CB("Aqua Light State");

};

//-------------------------------------------------------
std::string Config_init::Conversion_AnsiString_to_string(const AnsiString& str)
{

  std:: string result = str.c_str();
  return result;
};

//-------------------------------------------------------
AnsiString Config_init::Conversion_string_to_AnsiString(std::string& str)
{
  AnsiString result = str.c_str();
  return result;
};

//-------------------------------------------------------
AnsiString Config_init::fool_path(const AnsiString& folder_name)
{
std::string str   = folder_name.c_str();
std::string temp  = this->directory->get_path(str);
AnsiString result = this->Conversion_string_to_AnsiString(temp);

return result;


};


//-------------------------------------------------------
void Config_init::Form_to_config(Config_init_registry* first)
{
///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  this->Screenshot_of_the_entire_screen_EHK->HotKey    = first->get_Screenshot_of_the_entire_screen_EHK();
  this->Screenshot_of_the_active_window_EHK->HotKey    = first->get_Screenshot_of_the_active_window_EHK();
  this->Screenshot_of_the_screen_area_EHK->HotKey      = first->get_Screenshot_of_the_screen_area_EHK();
  this->Two_mouse_buttons_at_the_same_time_CH->Checked = first->get_Two_mouse_buttons_at_the_same_time_CH();

//----------Save_parameters------------------------------------//
  this->Server_RB->Checked         = first->get_Server_RB();
  this->Address_E->Text            = first->get_Address_E();
  this->Login_E->Text              = first->get_Login_E();
  this->Password_E->Text           = first->get_Password_E();
  this->Show_Password_CH->Checked  = first->get_Show_Password_CH();
  this->Locally_RB->Checked        = first->get_Locally_RB();
  this->Locally_E->Text            = first->get_Locally_E();
  this->Locally_E_create_folder(first->get_Locally_E());

//----------Additional_options---------------------------------//
  this->Show_the_cursor_on_the_screenshot_CH->Checked = first->get_Show_the_cursor_on_the_screenshot_CH();
  this->Show_magnifying_glass_CH->Checked             = first->get_Show_magnifying_glass_CH();
  this->Open_screenshot_in_the_browser_CH->Checked    = first->get_Open_screenshot_in_the_browser_CH();


//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->Recording_screen_area_CH->Checked                    = first->get_Recording_screen_area_CH();
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->Checked = first->get_Two_mouse_buttons_at_the_same_time_CH_VIDEO();
  this->Recording_screen_area_EHK->HotKey                    = first->get_Recording_screen_area_EHK();

//-----------Save_parameters_VIDEO-----------------------------//
  this->Server_RB_VIDEO->Checked                   = first->get_Server_RB_VIDEO();
  this->Address_E_VIDEO->Text                      = first->get_Address_E_VIDEO();
  this->Login_E_VIDEO->Text                        = first->get_Login_E_VIDEO();
  this->Password_E_VIDEO->Text                     = first->get_Password_E_VIDEO();
  this->Show_Password_CH_VIDEO->Checked            = first->get_Show_Password_CH_VIDEO();
  this->Locally_RB_VIDEO->Checked                  = first->get_Locally_RB_VIDEO();
  this->Locally_E_VIDEO->Text                      = first->get_Locally_E_VIDEO();
  this->Locally_E_create_folder(first->get_Locally_E_VIDEO());

//------------Additional_options_VIDEO-------------------------//
  this->Always_record_the_microphone_CH_VIDEO->Checked   = first->get_Always_record_the_microphone_CH_VIDEO();
  this->Record_audio_CH_VIDEO->Checked                   = first->get_Record_audio_CH_VIDEO();
  this->Open_video_in_the_browser_CH_VIDEO->Checked      = first->get_Open_video_in_the_browser_CH_VIDEO();



  this->Log_create_CH->Checked        = first->get_Log_create_CH();
  this->Them_CB->Text                 = first->get_Them_CB();
  this->Them_form_all(first->get_Them_CB());

 this->Form_to_config_checked(first);

};

//-------------------------------------------------------
void Config_init::Config_to_form(Config_init_registry* first)
{
///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  first->set_Screenshot_of_the_entire_screen_EHK(this->Screenshot_of_the_entire_screen_EHK->HotKey);
  first->set_Screenshot_of_the_active_window_EHK(this->Screenshot_of_the_active_window_EHK->HotKey);
  first->set_Screenshot_of_the_screen_area_EHK(this->Screenshot_of_the_screen_area_EHK->HotKey);
  first->set_Two_mouse_buttons_at_the_same_time_CH(this->Two_mouse_buttons_at_the_same_time_CH->Checked);

//----------Save_parameters------------------------------------//
  first->set_Server_RB(this->Server_RB->Checked);
  first->set_Address_E(this->Address_E->Text);
  first->set_Login_E(this->Login_E->Text);
  first->set_Password_E(this->Password_E->Text);
  first->set_Show_Password_CH(this->Show_Password_CH->Checked);
  first->set_Locally_RB(this->Locally_RB->Checked);
  first->set_Locally_E(this->Locally_E->Text);

//----------Additional_options---------------------------------//
  first->set_Show_the_cursor_on_the_screenshot_CH(this->Show_the_cursor_on_the_screenshot_CH->Checked);
  first->set_Show_magnifying_glass_CH(this->Show_magnifying_glass_CH->Checked);
  first->set_Open_screenshot_in_the_browser_CH(this->Open_screenshot_in_the_browser_CH->Checked);


//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  first->set_Recording_screen_area_CH(this->Recording_screen_area_CH->Checked);
  first->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->Checked);
  first->set_Recording_screen_area_EHK(this->Recording_screen_area_EHK->HotKey);

//-----------Save_parameters_VIDEO-----------------------------//
  first->set_Server_RB_VIDEO(this->Server_RB_VIDEO->Checked);
  first->set_Address_E_VIDEO(this->Address_E_VIDEO->Text);
  first->set_Login_E_VIDEO(this->Login_E_VIDEO->Text);
  first->set_Password_E_VIDEO(this->Password_E_VIDEO->Text);
  first->set_Show_Password_CH_VIDEO(this->Show_Password_CH_VIDEO->Checked);
  first->set_Locally_RB_VIDEO(this->Locally_RB_VIDEO->Checked);
  first->set_Locally_E_VIDEO(this->Locally_E_VIDEO->Text);

//------------Additional_options_VIDEO-------------------------//
  first->set_Always_record_the_microphone_CH_VIDEO(this->Always_record_the_microphone_CH_VIDEO->Checked);
  first->set_Record_audio_CH_VIDEO(this->Record_audio_CH_VIDEO->Checked);
  first->set_Open_video_in_the_browser_CH_VIDEO(this->Open_video_in_the_browser_CH_VIDEO->Checked);

  first->set_Log_create_CH(this->Log_create_CH->Checked);
  first->set_Them_CB(this->Them_CB->Text);
};

AnsiString Config_init::get_AnsiString_to_int(int set)
{
  std::string str   = std::to_string(set);
  AnsiString result = str.c_str();
  return result;
};

//-------------------------------------------------------
void Config_init::Registry_save_inside(const type_struct& struc, const int& first, const int& last,
				  const AnsiString& KeyName, TRegistry* reg, bool Default)
{
   if (!Default)
   {
		if (this->compare_variable(first, last))
		{
		return;
		};
   }


		if (struc == ___int)
		{
		reg->WriteInteger(KeyName, first);
		};

};

//-------------------------------------------------------
void Config_init::Registry_save_inside(const type_struct& struc, const bool& first, const bool& last,
				  const AnsiString& KeyName, TRegistry* reg, bool Default)
{
   if (!Default)
   {
		if (this->compare_variable(first, last))
		{
		return;
		};
   }

		if (struc == ___bool)
		{
		reg->WriteBool(KeyName, first);
		};
};

//-------------------------------------------------------
void Config_init::Registry_save_inside(const type_struct& struc, const AnsiString& first, const AnsiString& last,
				  const AnsiString& KeyName, TRegistry* reg, bool Default)
{
   if (!Default)
   {
		if (this->compare_variable(first, last))
		{
		return;
		};
   }

		if (struc == ___AnsiString)
		{
		reg->WriteString(KeyName, first);
		};
};


//-------------------------------------------------------
void Config_init::Form_to_config_checked(Config_init_registry* first)
{
  if (first->get_Server_RB())
  {
  this->Address_E->Enabled                = true;
  this->Login_E->Enabled                  = true;
  this->Password_E->Enabled               = true;
  this->Show_Password_CH->Enabled         = true;

  this->Locally_RB->Checked               = false;
  this->Locally_E->Enabled                = false;

	if (first->get_Show_Password_CH())
	{
	 this->Password_E->PasswordChar       = 0;
	}
	else
	{
	 this->Password_E->PasswordChar       = '*';
	}
  };

   if (first->get_Locally_RB())
   {
	this->Locally_E->Enabled              = true;

	this->Server_RB->Checked              = false;
	this->Address_E->Enabled              = false;
	this->Login_E->Enabled                = false;
	this->Password_E->Enabled             = false;
	this->Show_Password_CH->Enabled       = false;
   };

  if (first->get_Server_RB_VIDEO())
  {
  this->Address_E_VIDEO->Enabled          = true;
  this->Login_E_VIDEO->Enabled            = true;
  this->Password_E_VIDEO->Enabled         = true;
  this->Show_Password_CH_VIDEO->Enabled   = true;

  this->Locally_RB_VIDEO->Checked         = false;
  this->Locally_E_VIDEO->Enabled          = false;

	if (first->get_Show_Password_CH_VIDEO())
	{
	 this->Password_E_VIDEO->PasswordChar = 0;
	}
	else
	{
	 this->Password_E_VIDEO->PasswordChar = '*';
	}
  };

   if (first->get_Locally_RB_VIDEO())
   {
	this->Locally_E_VIDEO->Enabled        = true;

	this->Server_RB_VIDEO->Checked        = false;
	this->Address_E_VIDEO->Enabled        = false;
	this->Login_E_VIDEO->Enabled          = false;
	this->Password_E_VIDEO->Enabled       = false;
	this->Show_Password_CH_VIDEO->Enabled = false;
   };


};

//-------------------------------------------------------
bool Config_init::Check_registry_key()
{

	if (this->Check_registry_key_in_side())
	{
	 this->Registry_read();
	 this->Form_to_config(this->Registry_config);
	 this->Config_to_form(this->Program_config);
	 this->do_editing = false;
	 this->Control_button_v();
	 return true;
	}
	else
	{
	 this->Form_to_config(this->Default_config);
	 this->Config_to_form(this->Program_config);
	 this->Registry_save(true);
	 this->do_editing = false;
	 this->Control_button_v();
	 return false;
	}



};

//-------------------------------------------------------
bool Config_init::Check_registry_key_in_side()
{
 std::unique_ptr<TRegistry>  reg = std::make_unique<TRegistry>();
 reg->RootKey   = this->Root_key_C;
 int result = 0;

	if (reg->KeyExists(this->Screen_shot_ASC))
	{
	  result++;
	}

	if (reg->KeyExists(this->Video_ASC))
	{
	  result++;
	}



	if (result == 2)
	{
	 return true;
	}
	else
	{
	 return false;
	}


};



int  Config_init::get_ID_object(const AnsiString& object)
{
int result = 0;

 //--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//

   result++;//1
   if (object == AnsiString("Screenshot_of_the_entire_screen_EHK"))
   {
	return result;
   }

   result++;//2
   if (object == AnsiString("Screenshot_of_the_active_window_EHK"))
   {
	return result;
   }

   result++;//3
   if (object == AnsiString("Screenshot_of_the_screen_area_EHK"))
   {
	return result;
   }

   result++;//4
   if (object == AnsiString("Two_mouse_buttons_at_the_same_time_CH"))
   {
	return result;
   }

//----------Save_parameters------------------------------------//

	result++;//5
   if (object == AnsiString("Server_RB"))
   {
	return result;
   }

   result++;//6
   if (object == AnsiString("Address_E"))
   {
	return result;
   }

   result++;//7
   if (object == AnsiString("Login_E"))
   {
	return result;
   }

   result++;//8
   if (object == AnsiString("Password_E"))
   {
	return result;
   }

   result++;//9
   if (object == AnsiString("Show_Password_CH"))
   {
	return result;
   }

   result++;//10
   if (object == AnsiString("Locally_RB"))
   {
	return result;
   }

   result++;//11
   if (object == AnsiString("Locally_E"))
   {
	return result;
   }

//----------Additional_options---------------------------------//
   result++;//12
   if (object == AnsiString("Show_the_cursor_on_the_screenshot_CH"))
   {
	return result;
   }

   result++;//13
   if (object == AnsiString("Show_magnifying_glass_CH"))
   {
	return result;
   }

   result++;//14
   if (object == AnsiString("Open_screenshot_in_the_browser_CH"))
   {
	return result;
   }


//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
   result++;//15
   if (object == AnsiString("Recording_screen_area_CH"))
   {
	return result;
   }

   result++;//16
   if (object == AnsiString("Two_mouse_buttons_at_the_same_time_CH_VIDEO"))
   {
	return result;
   }

   result++;//17
   if (object == AnsiString("Recording_screen_area_EHK"))
   {
	return result;
   }

//-----------Save_parameters_VIDEO-----------------------------//
   result++;//18
   if (object == AnsiString("Server_RB_VIDEO"))
   {
	return result;
   }

   result++;//19
   if (object == AnsiString("Address_E_VIDEO"))
   {
	return result;
   }

   result++;//20
   if (object == AnsiString("Login_E_VIDEO"))
   {
	return result;
   }

   result++;//21
   if (object == AnsiString("Password_E_VIDEO"))
   {
	return result;
   }

   result++;//22
   if (object == AnsiString("Show_Password_CH_VIDEO"))
   {
	return result;
   }

   result++;//23
   if (object == AnsiString("Locally_RB_VIDEO"))
   {
	return result;
   }

   result++;//24
   if (object == AnsiString("Locally_E_VIDEO"))
   {
	return result;
   }

//------------Additional_options_VIDEO-------------------------//
   result++;//25
   if (object == AnsiString("Always_record_the_microphone_CH_VIDEO"))
   {
	return result;
   }

   result++;//26
   if (object == AnsiString("Record_audio_CH_VIDEO"))
   {
	return result;
   }

   result++;//27
   if (object == AnsiString("Open_video_in_the_browser_CH_VIDEO"))
   {
	return result;
   }

   result++;//28
   if (object == AnsiString("Log_create_CH"))
   {
	return result;
   }

   result++;//29
   if (object == AnsiString("Them_CB"))
   {
	return result;
   }

   return 0;

};

bool Config_init::Save_BUTTON_HotKey_check()
{
bool result = true;

   if (!(int(this->Screenshot_of_the_entire_screen_EHK->HotKey)==0))
   {
	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_entire_screen_EHK->HotKey),
											  int(this->Screenshot_of_the_active_window_EHK->HotKey)))
		{
		 return result = false;
		};


	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_entire_screen_EHK->HotKey),
											  int(this->Screenshot_of_the_screen_area_EHK->HotKey)))
		{
		 return result = false;
		};


	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_entire_screen_EHK->HotKey),
											  int(this->Recording_screen_area_EHK->HotKey)))
		{
		 return result = false;
		};

   };

   if (!(int(this->Screenshot_of_the_active_window_EHK->HotKey)==0))
   {
	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_active_window_EHK->HotKey),
											  int(this->Screenshot_of_the_screen_area_EHK->HotKey)))
		{
		 return result = false;
		};


	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_active_window_EHK->HotKey),
											  int(this->Recording_screen_area_EHK->HotKey)))
		{
		 return result = false;
		};

   };

   if (!(int(this->Screenshot_of_the_screen_area_EHK->HotKey)==0))
   {
	if (this->Save_BUTTON_HotKey_check_inside(int(this->Screenshot_of_the_screen_area_EHK->HotKey),
											  int(this->Recording_screen_area_EHK->HotKey)))
		{
		 return result = false;
		};

   };

   return true;
};

bool Config_init::Save_BUTTON_HotKey_check_inside(const int& first, const int& last)
{
  if (first == last)
  {
   return true;
  }
  else
  {
   return false;
  };
};

void Config_init::Locally_E_create_folder(const AnsiString& folder_name)
{
   this->directory->create_folder_in_prog(this->Conversion_AnsiString_to_string(folder_name), false);
};

/*
 //--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  THotKey*       Screenshot_of_the_entire_screen_EHK;
  THotKey*       Screenshot_of_the_active_window_EHK;
  THotKey*       Screenshot_of_the_screen_area_EHK;
  TCheckBox*     Two_mouse_buttons_at_the_same_time_CH;

//----------Save_parameters------------------------------------//
  TRadioButton*  Server_RB;
  TEdit*         Address_E;
  TEdit*         Login_E;
  TEdit*         Password_E;
  TCheckBox*     Show_Password_CH;
  TRadioButton*  Locally_RB;
  TEdit*         Locally_E;

//----------Additional_options---------------------------------//
  TCheckBox*     Show_the_cursor_on_the_screenshot_CH;
  TCheckBox*     Show_magnifying_glass_CH;
  TCheckBox*     Open_screenshot_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  TCheckBox*     Recording_screen_area_CH;
  TCheckBox*     Two_mouse_buttons_at_the_same_time_CH_VIDEO;
  THotKey*       Recording_screen_area_EHK;

//-----------Save_parameters_VIDEO-----------------------------//
  TRadioButton*  Server_RB_VIDEO;
  TEdit*         Address_E_VIDEO;
  TEdit*         Login_E_VIDEO;
  TEdit*         Password_E_VIDEO;
  TCheckBox*     Show_Password_CH_VIDEO;
  TRadioButton*  Locally_RB_VIDEO;
  TEdit*         Locally_E_VIDEO;

//------------Additional_options_VIDEO-------------------------//
  TCheckBox*     Always_record_the_microphone_CH_VIDEO;
  TCheckBox*     Record_audio_CH_VIDEO;
  TCheckBox*     Open_video_in_the_browser_CH_VIDEO;
  TCheckBox*             Log_create_CH;
*/

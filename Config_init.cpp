#include "Config_init.h"
#include "direct_r.h"



Config_init::Config_init()
{
   this->Registry_config = new Config_init_registry;
   this->Program_config  = new Config_init_registry;
   this->Default_config  = new Config_init_registry;
   this->directory       = new direct_r;
};

Config_init::~Config_init()
{
  this->anihilation_varrible();
  delete this->Registry_config;
  delete this->Program_config;
  delete this->Default_config;
  delete this->directory;
};


//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
void Config_init::set_Screenshot_of_the_entire_screen_EHK(THotKey* set)
{
  this->Screenshot_of_the_entire_screen_EHK = set;
};

void Config_init::set_Screenshot_of_the_active_window_EHK(THotKey* set)
{
  this->Screenshot_of_the_active_window_EHK = set;
};

void Config_init::set_Screenshot_of_the_screen_area_EHK(THotKey* set)
{
  this->Screenshot_of_the_screen_area_EHK = set;
};

void Config_init::set_Two_mouse_buttons_at_the_same_time_CH(TCheckBox* set)
{
  this->Two_mouse_buttons_at_the_same_time_CH = set;
};


//----------Save_parameters------------------------------------//
void Config_init::set_Server_RB(TRadioButton* set)
{
  this->Server_RB = set;
};

void Config_init::set_Address_E(TEdit* set)
{
  this->Address_E = set;
};

void Config_init::set_Login_E(TEdit* set)
{
  this->Login_E = set;
};

void Config_init::set_Password_E(TEdit* set)
{
  this->Password_E = set;
};

void Config_init::set_Show_Password_CH(TCheckBox* set)
{
  this->Show_Password_CH = set;
};

void Config_init::set_Locally_RB(TRadioButton* set)
{
  this->Locally_RB = set;
};

void Config_init::set_Locally_E(TEdit* set)
{
  this->Locally_E = set;
};


//----------Additional_options---------------------------------//
void Config_init::set_Show_the_cursor_on_the_screenshot_CH(TCheckBox* set)
{
  this->Show_the_cursor_on_the_screenshot_CH = set;
};

void Config_init::set_Show_magnifying_glass_CH(TCheckBox* set)
{
  this->Show_magnifying_glass_CH = set;
};

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

void Config_init::set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(TCheckBox* set)
{
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO = set;
};

void Config_init::set_Recording_screen_area_EHK(THotKey* set)
{
  this->Recording_screen_area_EHK = set;
};


//-----------Save_parameters_VIDEO-----------------------------//
void Config_init::set_Server_RB_VIDEO(TRadioButton* set)
{
  this->Server_RB_VIDEO = set;
};

void Config_init::set_Address_E_VIDEO(TEdit* set)
{
  this->Address_E_VIDEO = set;
};

void Config_init::set_Login_E_VIDEO(TEdit* set)
{
  this->Login_E_VIDEO = set;
};

void Config_init::set_Password_E_VIDEO(TEdit* set)
{
  this->Password_E_VIDEO = set;
};

void Config_init::set_Show_Password_CH_VIDEO(TCheckBox* set)
{
  this->Show_Password_CH_VIDEO = set;
};

void Config_init::set_Locally_RB_VIDEO(TRadioButton* set)
{
   this->Locally_RB_VIDEO = set;
};

void Config_init::set_Locally_E_VIDEO(TEdit* set)
{
   this->Locally_E_VIDEO = set;
};


//------------Additional_options_VIDEO-------------------------//
void Config_init::set_Always_record_the_microphone_CH(TCheckBox* set)
{
  this->Always_record_the_microphone_CH = set;
};

void Config_init::set_Record_audio_CH(TCheckBox* set)
{
  this->Record_audio_CH = set;
};

void Config_init::set_Open_video_in_the_browser_CH(TCheckBox* set)
{
  this->Open_video_in_the_browser_CH = set;
};


//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
void Config_init::set_Font_E(TEdit* set)
{
  this->Font_E = set;
};

void Config_init::set_Font_size_E(TEdit* set)
{
  this->Font_size_E = set;
};

void Config_init::set_Them_CM(TComboBox* set)
{
  this->Them_CM = set;
};

void Config_init::set_Font_bold_CH(TCheckBox* set)
{
  this->Font_bold_CH = set;
};

void Config_init::set_Font_italic_CH(TCheckBox* set)
{
  this->Font_italic_CH = set;
};

void Config_init::set_Font_underlined_CH(TCheckBox* set)
{
  this->Font_underlined_CH = set;
};


//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
void Config_init::set_Long_type_line_CM(TComboBox* set)
{
  this->Long_type_line_CM = set;
};

void Config_init::set_Long_color_RED(TCSpinEdit* set)
{
  this->Long_color_RED = set;
};

void Config_init::set_Long_color_GREEN(TCSpinEdit* set)
{
  this->Long_color_GREEN = set;
};

void Config_init::set_Long_color_BLUE(TCSpinEdit* set)
{
   this->Long_color_BLUE = set;
};

void Config_init::set_Long_line_size_E(TEdit* set)
{
   this->Long_line_size_E = set;
};


//------------Short_lines--------------------------------------//
void Config_init::set_Short_type_line_CM(TComboBox* set)
{
  this->Short_type_line_CM = set;
};

void Config_init::set_Short_color_RED(TCSpinEdit* set)
{
  this->Short_color_RED = set;
};

void Config_init::set_Short_color_GREEN(TCSpinEdit* set)
{
  this->Short_color_GREEN = set;
};

void Config_init::set_Short_color_BLUE(TCSpinEdit* set)
{
  this->Short_color_BLUE = set;
};

void Config_init::set_Short_line_size_E(TEdit* set)
{
  this->Short_line_size_E = set;
};


//-----------Other---------------------------------------------//
void Config_init::set_Indent_E(TEdit* set)
{
  this->Indent_E = set;
};

void Config_init::set_Magnifier_E(TEdit* set)
{
  this->Magnifier_E = set;
};

void Config_init::set_Log_create_CH(TCheckBox* set)
{
  this->Log_create_CH = set;
};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void Config_init::anihilation_varrible()//-----------Destroy object
{
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

//------------Additional_options_VIDEO-------------------------//
  this->Always_record_the_microphone_CH = 0;
  this->Record_audio_CH                 = 0;
  this->Open_video_in_the_browser_CH    = 0;

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  this->Font_E             = 0;
  this->Font_size_E        = 0;
  this->Them_CM            = 0;
  this->Font_bold_CH       = 0;
  this->Font_italic_CH     = 0;
  this->Font_underlined_CH = 0;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  this->Long_type_line_CM = 0;
  this->Long_color_RED    = 0;
  this->Long_color_GREEN  = 0;
  this->Long_color_BLUE   = 0;
  this->Long_line_size_E  = 0;

//------------Short_lines--------------------------------------//
  this->Short_type_line_CM = 0;
  this->Short_color_RED    = 0;
  this->Short_color_GREEN  = 0;
  this->Short_color_BLUE   = 0;
  this->Short_line_size_E  = 0;

//-----------Other---------------------------------------------//
  this->Indent_E    = 0;
  this->Magnifier_E = 0;
  this->Log_create_CH  = 0;

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

//------------Additional_options_VIDEO-------------------------//
  delete this->Always_record_the_microphone_CH;
  delete this->Record_audio_CH;
  delete this->Open_video_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  delete this->Font_E;
  delete this->Font_size_E;
  delete this->Them_CM;
  delete this->Font_bold_CH;
  delete this->Font_italic_CH;
  delete this->Font_underlined_CH;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  delete this->Long_type_line_CM;
  delete this->Long_color_RED;
  delete this->Long_color_GREEN;
  delete this->Long_color_BLUE;
  delete this->Long_line_size_E;

//------------Short_lines--------------------------------------//
  delete this->Short_type_line_CM;
  delete this->Short_color_RED;
  delete this->Short_color_GREEN;
  delete this->Short_color_BLUE;
  delete this->Short_line_size_E;

//-----------Other---------------------------------------------//
  delete this->Indent_E;
  delete this->Magnifier_E;
  delete this->Log_create_CH;

};

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void Config_init::Registry_create()
{
TRegistry* reg = new TRegistry();
reg->RootKey   = HKEY_LOCAL_MACHINE;
reg->OpenKey(this->Screen_shot_ASC,true);


//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
reg->WriteString(this->Screenshot_of_the_entire_screen_EHK->GetNamePath(), this->Screenshot_of_the_entire_screen_EHK->HotKey);
reg->WriteString(this->Screenshot_of_the_active_window_EHK->GetNamePath(), this->Screenshot_of_the_active_window_EHK->HotKey);
reg->WriteString(this->Screenshot_of_the_screen_area_EHK->GetNamePath(), this->Screenshot_of_the_screen_area_EHK->HotKey);
reg->WriteBool(this->Two_mouse_buttons_at_the_same_time_CH->GetNamePath(),this->Checked(this->Two_mouse_buttons_at_the_same_time_CH));

//----------Save_parameters------------------------------------//
reg->WriteBool(this->Server_RB->GetNamePath(), this->Checked(this->Server_RB));
reg->WriteString(this->Address_E->GetNamePath(), this->Address_E->Text);
reg->WriteString(this->Login_E->GetNamePath(), this->Login_E->Text);
reg->WriteString(this->Password_E->GetNamePath(), this->Password_E->Text);
reg->WriteBool(this->Show_Password_CH->GetNamePath(), this->Checked(Show_Password_CH));
reg->WriteBool(this->Locally_RB->GetNamePath(), this->Checked(this->Locally_RB));
reg->WriteString(this->Locally_E->GetNamePath(), this->Locally_E->Text);

//----------Additional_options---------------------------------//
reg->WriteBool(this->Show_the_cursor_on_the_screenshot_CH->GetNamePath(), this->Checked(Show_the_cursor_on_the_screenshot_CH));
reg->WriteBool(this->Show_magnifying_glass_CH->GetNamePath(), this->Checked(this->Show_magnifying_glass_CH));
reg->WriteBool(this->Open_screenshot_in_the_browser_CH->GetNamePath(), this->Checked(this->Open_screenshot_in_the_browser_CH));

reg->CloseKey();


//--------------------------------------------------------------------------------PAGE__2----------
reg->OpenKey(this->Video_ASC,true);
//-----------Hot_keys_VIDEO------------------------------------//
reg->WriteBool(this->Recording_screen_area_CH->GetNamePath(), this->Checked(this->Recording_screen_area_CH));
reg->WriteBool(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->GetNamePath(), this->Checked(this->Two_mouse_buttons_at_the_same_time_CH_VIDEO));
reg->WriteString(this->Recording_screen_area_EHK->GetNamePath(), this->Recording_screen_area_EHK->HotKey);

//-----------Save_parameters_VIDEO-----------------------------//
reg->WriteBool(this->Server_RB_VIDEO->GetNamePath(), this->Checked(this->Server_RB_VIDEO));
reg->WriteString(this->Address_E_VIDEO->GetNamePath(), this->Address_E_VIDEO->Text);
reg->WriteString(this->Login_E_VIDEO->GetNamePath(), this->Login_E_VIDEO->Text);
reg->WriteString(this->Password_E_VIDEO->GetNamePath(), this->Password_E_VIDEO->Text);
reg->WriteBool(this->Show_Password_CH_VIDEO->GetNamePath(), this->Checked(this->Show_Password_CH_VIDEO));
reg->WriteBool(this->Locally_RB_VIDEO->GetNamePath(), this->Checked(this->Locally_RB_VIDEO));
reg->WriteString(this->Locally_E_VIDEO->GetNamePath(), this->Locally_E_VIDEO->Text);

//------------Additional_options_VIDEO-------------------------//
reg->WriteBool(this->Always_record_the_microphone_CH->GetNamePath(), this->Checked(this->Always_record_the_microphone_CH));
reg->WriteBool(this->Record_audio_CH->GetNamePath(), this->Checked(this->Record_audio_CH));
reg->WriteBool(this->Open_video_in_the_browser_CH->GetNamePath(), this->Checked(this->Open_video_in_the_browser_CH));

reg->CloseKey();

//--------------------------------------------------------------------------------PAGE__3----------
reg->OpenKey(this->General_setup,true);
//-----------General_options------------------------------------//
reg->WriteString(this->Font_E->GetNamePath(), this->Font_E->Text);
reg->WriteInteger(this->Font_size_E->GetNamePath(), this->Font_size_E->Text.ToInt());
reg->WriteString(this->Them_CM->GetNamePath(), this->Them_CM->Text);
reg->WriteBool(this->Font_bold_CH->GetNamePath(), this->Checked(this->Font_bold_CH));
reg->WriteBool(this->Font_italic_CH->GetNamePath(), this->Checked(this->Font_italic_CH));
reg->WriteString(this->Long_type_line_CM->GetNamePath(), this->Long_type_line_CM->Text);

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
reg->WriteString(this->Long_type_line_CM->GetNamePath(), Long_type_line_CM->Text);
reg->WriteInteger(this->Long_color_RED->GetNamePath(), this->Long_color_RED->Text.ToInt());
reg->WriteInteger(this->Long_color_GREEN->GetNamePath(), this->Long_color_GREEN->Text.ToInt());
reg->WriteInteger(this->Long_color_BLUE->GetNamePath(), this->Long_color_BLUE->Text.ToInt());
reg->WriteInteger(this->Long_line_size_E->GetNamePath(), this->Long_line_size_E->Text.ToInt());

////------------Short_lines--------------------------------------//
reg->WriteString(this->Short_type_line_CM->GetNamePath(), this->Short_type_line_CM->Text);
reg->WriteInteger(this->Short_color_RED->GetNamePath(), this->Short_color_RED->Text.ToInt());
reg->WriteInteger(this->Short_color_GREEN->GetNamePath(), this->Short_color_GREEN->Text.ToInt());
reg->WriteInteger(this->Short_color_BLUE->GetNamePath(), this->Short_color_BLUE->Text.ToInt());
reg->WriteInteger(this->Short_line_size_E->GetNamePath(), this->Short_line_size_E->Text.ToInt());

//-----------Other---------------------------------------------//
reg->WriteString(this->Indent_E->GetNamePath(), this->Indent_E->Text);
reg->WriteString(this->Magnifier_E->GetNamePath(), this->Magnifier_E->Text);
reg->WriteBool(this->Log_create_CH->GetNamePath(), this->Checked(this->Log_create_CH));

reg->CloseKey();
delete reg;
};




void Config_init::Registry_destroy()
{

};

void Config_init::Registry_read()
{

};

void Config_init::Registry_save()
{

};


void Config_init::Registry_config_init()
{
TRegistry* reg = new TRegistry();
reg->RootKey   = HKEY_LOCAL_MACHINE;
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
this->Registry_config->set_Always_record_the_microphone_CH(reg->ReadBool(this->Always_record_the_microphone_CH->GetNamePath()));
this->Registry_config->set_Record_audio_CH(reg->ReadBool(this->Record_audio_CH->GetNamePath()));
this->Registry_config->set_Open_video_in_the_browser_CH(reg->ReadBool(this->Open_video_in_the_browser_CH->GetNamePath()));

reg->CloseKey();


//--------------------------------------------------------------------------------PAGE__3----------
reg->OpenKeyReadOnly(this->General_setup);
//-----------General_options------------------------------------//
this->Registry_config->set_Font_E(reg->ReadString(this->Font_E->GetNamePath()));
this->Registry_config->set_Font_size_E(reg->ReadInteger(this->Font_size_E->GetNamePath()));
this->Registry_config->set_Them_CM(reg->ReadString(this->Them_CM->GetNamePath()));
this->Registry_config->set_Font_bold_CH(reg->ReadBool(this->Font_bold_CH->GetNamePath()));
this->Registry_config->set_Font_italic_CH(reg->ReadBool(this->Font_italic_CH->GetNamePath()));
this->Registry_config->set_Long_type_line_CM(reg->ReadString(this->Long_type_line_CM->GetNamePath()));

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
this->Registry_config->set_Long_type_line_CM(reg->ReadString(this->Long_type_line_CM->GetNamePath()));
this->Registry_config->set_Long_color_RED(reg->ReadInteger(this->Long_color_RED->GetNamePath()));
this->Registry_config->set_Long_color_GREEN(reg->ReadInteger(this->Long_color_GREEN->GetNamePath()));
this->Registry_config->set_Long_color_BLUE(reg->ReadInteger(this->Long_color_BLUE->GetNamePath()));
this->Registry_config->set_Long_line_size_E(reg->ReadInteger(this->Long_line_size_E->GetNamePath()));

//------------Short_lines--------------------------------------//
this->Registry_config->set_Short_type_line_CM(reg->ReadString(this->Short_type_line_CM->GetNamePath()));
this->Registry_config->set_Short_color_RED(reg->ReadInteger(this->Short_color_RED->GetNamePath()));
this->Registry_config->set_Short_color_GREEN(reg->ReadInteger(this->Short_color_GREEN->GetNamePath()));
this->Registry_config->set_Short_color_BLUE(reg->ReadInteger(this->Short_color_BLUE->GetNamePath()));
this->Registry_config->set_Short_line_size_E(reg->ReadInteger(this->Short_line_size_E->GetNamePath()));

//-----------Other---------------------------------------------//
this->Registry_config->set_Indent_E(reg->ReadInteger(this->Indent_E->GetNamePath()));
this->Registry_config->set_Magnifier_E(reg->ReadInteger(this->Magnifier_E->GetNamePath()));
this->Registry_config->set_Log_create_CH(reg->ReadBool(this->Log_create_CH->GetNamePath()));

reg->CloseKey();
delete reg;
/*

this->Registry_config->set_(reg->ReadString());

this->Registry_config->set_(reg->ReadBool());

this->Registry_config->set_(reg->ReadInteger());

 */

};

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
this->Program_config->set_Always_record_the_microphone_CH(this->Checked(this->Always_record_the_microphone_CH));
this->Program_config->set_Record_audio_CH(this->Checked(this->Record_audio_CH));
this->Program_config->set_Open_video_in_the_browser_CH(this->Checked(this->Open_video_in_the_browser_CH));


//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
this->Program_config->set_Font_E(this->Font_E->Text);
this->Program_config->set_Font_size_E(this->Font_size_E->Text.ToInt());
this->Program_config->set_Them_CM(this->Them_CM->Text);
this->Program_config->set_Font_bold_CH(this->Checked(this->Font_bold_CH));
this->Program_config->set_Font_italic_CH(this->Checked(this->Font_italic_CH));
this->Program_config->set_Long_type_line_CM(this->Long_type_line_CM->Text);

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
this->Program_config->set_Long_type_line_CM(this->Long_type_line_CM->Text);
this->Program_config->set_Long_color_RED(this->Long_color_RED->Text.ToInt());
this->Program_config->set_Long_color_GREEN(this->Long_color_GREEN->Text.ToInt());
this->Program_config->set_Long_color_BLUE(this->Long_color_BLUE->Text.ToInt());
this->Program_config->set_Long_line_size_E(this->Long_line_size_E->Text.ToInt());

//------------Short_lines--------------------------------------//
this->Program_config->set_Short_type_line_CM(this->Short_type_line_CM->Text);
this->Program_config->set_Short_color_RED(this->Short_color_RED->Text.ToInt());
this->Program_config->set_Short_color_GREEN(this->Short_color_GREEN->Text.ToInt());
this->Program_config->set_Short_color_BLUE(this->Short_color_BLUE->Text.ToInt());
this->Program_config->set_Short_line_size_E(this->Short_line_size_E->Text.ToInt());

//-----------Other---------------------------------------------//
this->Program_config->set_Indent_E(this->Indent_E->Text.ToInt());
this->Program_config->set_Magnifier_E(this->Magnifier_E->Text.ToInt());
this->Program_config->set_Log_create_CH(this->Checked(this->Log_create_CH));
};


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
  this->Default_config->set_Address_E_VIDEO("");
  this->Default_config->set_Login_E_VIDEO("Login");
  this->Default_config->set_Password_E_VIDEO("Password");
  this->Default_config->set_Show_Password_CH_VIDEO(true);
  this->Default_config->set_Locally_RB_VIDEO(true);
  this->Default_config->set_Locally_E_VIDEO(this->fool_path(Config_init::FOLDER_NAME_VIDEO));

//------------Additional_options_VIDEO-------------------------//
  this->Default_config->set_Always_record_the_microphone_CH(false);
  this->Default_config->set_Record_audio_CH(false);
  this->Default_config->set_Open_video_in_the_browser_CH(false);


//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  this->Default_config->set_Font_E("Times New Roman");
  this->Default_config->set_Font_size_E(12);
  this->Default_config->set_Them_CM("Windows10 StateGray");
  this->Default_config->set_Font_bold_CH(false);
  this->Default_config->set_Font_italic_CH(false);
  this->Default_config->set_Font_underlined_CH(false);

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  this->Default_config->set_Long_type_line_CM("Линия");
  this->Default_config->set_Long_color_RED(0);
  this->Default_config->set_Long_color_GREEN(0);
  this->Default_config->set_Long_color_BLUE(0);
  this->Default_config->set_Long_line_size_E(1);

//------------Short_lines--------------------------------------//
  this->Default_config->set_Short_type_line_CM("Линия");
  this->Default_config->set_Short_color_RED(0);
  this->Default_config->set_Short_color_GREEN(0);
  this->Default_config->set_Short_color_BLUE(0);
  this->Default_config->set_Short_line_size_E(3);

//-----------Other---------------------------------------------//
  this->Default_config->set_Indent_E(15);
  this->Default_config->set_Magnifier_E(10);
  this->Default_config->set_Log_create_CH(true);

};

std::string Config_init::Conversion_AnsiString_to_string(AnsiString& str)
{

  std:: string result = str.c_str();
  return result;
};

AnsiString Config_init::Conversion_string_to_AnsiString(std::string& str)
{
  AnsiString result = str.c_str();
  return result;
};

AnsiString Config_init::fool_path(const AnsiString& folder_name)
{
std::string str   = folder_name.c_str();
std::string temp  = this->directory->get_path(str);
AnsiString result = this->Conversion_string_to_AnsiString(temp);

return result;

//  (this->directory->get_path(this->Conversion_AnsiString_to_string(this->FOLDER_NAME_PICTURE))));
};

void Config_init::Form_to_config(Config_init_registry* set)
{
///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  this->Screenshot_of_the_entire_screen_EHK->HotKey    = set->get_Screenshot_of_the_entire_screen_EHK();
  this->Screenshot_of_the_active_window_EHK->HotKey    = set->get_Screenshot_of_the_active_window_EHK();
  this->Screenshot_of_the_screen_area_EHK->HotKey      = set->get_Screenshot_of_the_screen_area_EHK();
  this->Two_mouse_buttons_at_the_same_time_CH->Checked = set->get_Two_mouse_buttons_at_the_same_time_CH();

//----------Save_parameters------------------------------------//
  this->Server_RB->Checked         = set->get_Server_RB();
  this->Address_E->Text            = set->get_Address_E();
  this->Login_E->Text              = set->get_Login_E();
  this->Password_E->Text           = set->get_Password_E();
  this->Show_Password_CH->Checked  = set->get_Show_Password_CH();
  this->Locally_RB->Checked        = set->get_Locally_RB();
  this->Locally_E->Text            = set->get_Locally_E();

//----------Additional_options---------------------------------//
  this->Show_the_cursor_on_the_screenshot_CH->Checked = set->get_Show_the_cursor_on_the_screenshot_CH();
  this->Show_magnifying_glass_CH->Checked             = set->get_Show_magnifying_glass_CH();
  this->Open_screenshot_in_the_browser_CH->Checked    = set->get_Open_screenshot_in_the_browser_CH();


//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->Recording_screen_area_CH->Checked                    = set->get_Recording_screen_area_CH();
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO->Checked = set->get_Two_mouse_buttons_at_the_same_time_CH_VIDEO();
  this->Recording_screen_area_EHK->HotKey                    = set->get_Recording_screen_area_EHK();

//-----------Save_parameters_VIDEO-----------------------------//
  this->Server_RB_VIDEO->Checked = set->get_Server_RB_VIDEO();
  this->Address_E_VIDEO->Text = set->get_Address_E_VIDEO();
  this->Login_E_VIDEO->Text = set->get_Login_E_VIDEO();
  this->Password_E_VIDEO->Text = set->get_Password_E_VIDEO();
  this->Show_Password_CH_VIDEO->Checked = set->get_Show_Password_CH_VIDEO();
  this->Locally_RB_VIDEO->Checked = set->get_Locally_RB_VIDEO();
  this->Locally_E_VIDEO->Text = set->get_Locally_E_VIDEO();

//------------Additional_options_VIDEO-------------------------//
  this->Always_record_the_microphone_CH->Checked   = set->get_Always_record_the_microphone_CH();
  this->Record_audio_CH->Checked                   = set->get_Record_audio_CH();
  this->Open_video_in_the_browser_CH->Checked      = set->get_Open_video_in_the_browser_CH();


//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  this->Font_E->Text                  = set->get_Font_E();
  this->Font_size_E->Text             = set->get_Font_size_E();
  this->Them_CM->Text                 = set->get_Them_CM();
  this->Font_bold_CH->Checked         = set->get_Font_bold_CH();
  this->Font_italic_CH->Checked       = set->get_Font_italic_CH();
  this->Font_underlined_CH->Checked   = set->get_Font_underlined_CH();

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  this->Long_type_line_CM->Text       = set->get_Long_type_line_CM();
  this->Long_color_RED->Text          = this->get_AnsiString_to_int(set->get_Long_color_RED());
  this->Long_color_GREEN->Text        = this->get_AnsiString_to_int(set->get_Long_color_GREEN());
  this->Long_color_BLUE->Text         = this->get_AnsiString_to_int(set->get_Long_color_BLUE());
  this->Long_line_size_E->Text        = this->get_AnsiString_to_int(set->get_Long_line_size_E());

//------------Short_lines--------------------------------------//
  this->Short_type_line_CM->Text      = set->get_Short_type_line_CM();
  this->Short_color_RED->Text         = this->get_AnsiString_to_int(set->get_Short_color_RED());
  this->Short_color_GREEN->Text       = this->get_AnsiString_to_int(set->get_Short_color_GREEN());
  this->Short_color_BLUE->Text        = this->get_AnsiString_to_int(set->get_Short_color_BLUE());
  this->Short_line_size_E->Text       = this->get_AnsiString_to_int(set->get_Short_line_size_E());

//-----------Other---------------------------------------------//
  this->Indent_E->Text                = this->get_AnsiString_to_int(set->get_Indent_E());
  this->Magnifier_E->Text             = this->get_AnsiString_to_int(set->get_Magnifier_E());
  this->Log_create_CH->Checked        = set->get_Log_create_CH();

//set->get_();

};

void Config_init::Config_to_form(Config_init_registry* set)
{

};

AnsiString Config_init::get_AnsiString_to_int(int set)
{
  std::string str   = std::to_string(set);
  AnsiString result = str.c_str();
  return result;
};







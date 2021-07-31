#include "Config_init_registry.h"

Config_init_registry::Config_init_registry()
{

};

Config_init_registry& Config_init_registry::operator=(const Config_init_registry& object)
{
   if (this == &object)
   {
	return*this;
   }

  this->Screenshot_of_the_entire_screen_EHK           = object.Screenshot_of_the_entire_screen_EHK;
  this->Screenshot_of_the_active_window_EHK           = object.Screenshot_of_the_active_window_EHK;
  this->Screenshot_of_the_screen_area_EHK             = object.Screenshot_of_the_screen_area_EHK;
  this->Two_mouse_buttons_at_the_same_time_CH         = object.Two_mouse_buttons_at_the_same_time_CH;

//----------Save_parameters------------------------------------//
  this->Server_RB                                     = object.Server_RB;
  this->Address_E                                     = object.Address_E;
  this->Login_E                                       = object.Login_E;
  this->Password_E                                    = object.Password_E;
  this->Show_Password_CH                              = object.Show_Password_CH;
  this->Locally_RB                                    = object.Locally_RB;
  this->Locally_E                                     = object.Locally_E;

//----------Additional_options---------------------------------//
  this->Show_the_cursor_on_the_screenshot_CH          = object.Show_the_cursor_on_the_screenshot_CH;
  this->Show_magnifying_glass_CH                      = object.Show_magnifying_glass_CH;
  this->Open_screenshot_in_the_browser_CH             = object.Open_screenshot_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  this->Recording_screen_area_CH                      = object.Recording_screen_area_CH;
  this->Two_mouse_buttons_at_the_same_time_CH_VIDEO   = object.Two_mouse_buttons_at_the_same_time_CH_VIDEO;
  this->Recording_screen_area_EHK                     = object.Recording_screen_area_EHK;

//-----------Save_parameters_VIDEO-----------------------------//
  this->Server_RB_VIDEO                               = object.Server_RB_VIDEO;
  this->Address_E_VIDEO                               = object.Address_E_VIDEO;
  this->Login_E_VIDEO                                 = object.Login_E_VIDEO;
  this->Password_E_VIDEO                              = object.Password_E_VIDEO;
  this->Show_Password_CH_VIDEO                        = object.Show_Password_CH_VIDEO;
  this->Locally_RB_VIDEO                              = object.Locally_RB_VIDEO;
  this->Locally_E_VIDEO                               = object.Locally_E_VIDEO;

//------------Additional_options_VIDEO-------------------------//
  this->Always_record_the_microphone_CH_VIDEO        = object.Always_record_the_microphone_CH_VIDEO;
  this->Record_audio_CH_VIDEO                        = object.Record_audio_CH_VIDEO;
  this->Open_video_in_the_browser_CH_VIDEO           = object.Open_video_in_the_browser_CH_VIDEO;

  this->Log_create_CH                                = object.Log_create_CH;

  return *this;
};

Config_init_registry::~Config_init_registry()
{
this->destroy_varrible();
};

///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
void Config_init_registry::set_Screenshot_of_the_entire_screen_EHK(int set)
{
  this->Screenshot_of_the_entire_screen_EHK = set;
};

void Config_init_registry::set_Screenshot_of_the_active_window_EHK(int set)
{
  this->Screenshot_of_the_active_window_EHK = set;
};

void Config_init_registry::set_Screenshot_of_the_screen_area_EHK(int set)
{
  this->Screenshot_of_the_screen_area_EHK = set;
};

void Config_init_registry::set_Two_mouse_buttons_at_the_same_time_CH(bool set)
{
  this->Two_mouse_buttons_at_the_same_time_CH = set;
};

//----------Save_parameters------------------------------------//
void Config_init_registry::set_Server_RB(bool set)
{
  this->Server_RB = set;
};

void Config_init_registry::set_Address_E(AnsiString set)
{
  this->Address_E = set;
};

void Config_init_registry::set_Login_E(AnsiString set)
{
  this->Login_E = set;
};

void Config_init_registry::set_Password_E(AnsiString set)
{
  this->Password_E = set;
};

void Config_init_registry::set_Show_Password_CH(bool set)
{
  this->Show_Password_CH = set;
};

void Config_init_registry::set_Locally_RB(bool set)
{
  this->Locally_RB = set;
};

void Config_init_registry::set_Locally_E(AnsiString set)
{
  this->Locally_E = set;
};


//----------Additional_options---------------------------------//
void Config_init_registry::set_Show_the_cursor_on_the_screenshot_CH(bool set)
{
  this->Show_the_cursor_on_the_screenshot_CH = set;
};

void Config_init_registry::set_Show_magnifying_glass_CH(bool set)
{
  this->Show_magnifying_glass_CH = set;
};

void Config_init_registry::set_Open_screenshot_in_the_browser_CH(bool set)
{
  this->Open_screenshot_in_the_browser_CH = set;
};

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
void Config_init_registry::set_Recording_screen_area_CH(bool set)
{
   this->Recording_screen_area_CH = set;
};

void Config_init_registry::set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(bool set)
{
   this->Two_mouse_buttons_at_the_same_time_CH_VIDEO = set;
};

void Config_init_registry::set_Recording_screen_area_EHK(int set)
{
   this->Recording_screen_area_EHK = set;
};


//-----------Save_parameters_VIDEO-----------------------------//
void Config_init_registry::set_Server_RB_VIDEO(bool set)
{
   this->Server_RB_VIDEO = set;
};

void Config_init_registry::set_Address_E_VIDEO(AnsiString set)
{
   this->Address_E_VIDEO = set;
};

void Config_init_registry::set_Login_E_VIDEO(AnsiString set)
{
   this->Login_E_VIDEO = set;
};

void Config_init_registry::set_Password_E_VIDEO(AnsiString set)
{
   this->Password_E_VIDEO = set;
};

void Config_init_registry::set_Show_Password_CH_VIDEO(bool set)
{
   this->Show_Password_CH_VIDEO = set;
};

void Config_init_registry::set_Locally_RB_VIDEO(bool set)
{
   this->Locally_RB_VIDEO = set;
};

void Config_init_registry::set_Locally_E_VIDEO(AnsiString set)
{
   this->Locally_E_VIDEO = set;
};

//------------Additional_options_VIDEO-------------------------//
void Config_init_registry::set_Always_record_the_microphone_CH_VIDEO(bool set)
{
   this->Always_record_the_microphone_CH_VIDEO = set;
};

void Config_init_registry::set_Record_audio_CH_VIDEO(bool set)
{
   this->Record_audio_CH_VIDEO = set;
};

void Config_init_registry::set_Open_video_in_the_browser_CH_VIDEO(bool set)
{
   this->Open_video_in_the_browser_CH_VIDEO = set;
};



void Config_init_registry::set_Log_create_CH(bool set)
{
   this->Log_create_CH = set;
};

///////////////////////////////////////---------GET----------////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
int Config_init_registry::get_Screenshot_of_the_entire_screen_EHK()
{
   return this->Screenshot_of_the_entire_screen_EHK;
};

int Config_init_registry::get_Screenshot_of_the_active_window_EHK()
{
   return this->Screenshot_of_the_active_window_EHK;
};

int Config_init_registry::get_Screenshot_of_the_screen_area_EHK()
{
   return this->Screenshot_of_the_screen_area_EHK;
};

bool Config_init_registry::get_Two_mouse_buttons_at_the_same_time_CH()
{
   return this->Two_mouse_buttons_at_the_same_time_CH;
};


//----------Save_parameters------------------------------------//
bool Config_init_registry::get_Server_RB()
{
   return this->Server_RB;
};

AnsiString Config_init_registry::get_Address_E()
{
   return this->Address_E;
};

AnsiString Config_init_registry::get_Login_E()
{
   return this->Login_E;
};

AnsiString Config_init_registry::get_Password_E()
{
   return this->Password_E;
};

bool Config_init_registry::get_Show_Password_CH()
{
   return this->Show_Password_CH;
};

bool Config_init_registry::get_Locally_RB()
{
   return this->Locally_RB;
};

AnsiString Config_init_registry::get_Locally_E()
{
   return this->Locally_E;
};

//----------Additional_options---------------------------------//
bool Config_init_registry::get_Show_the_cursor_on_the_screenshot_CH()
{
   return this->Show_the_cursor_on_the_screenshot_CH;
};

bool Config_init_registry::get_Show_magnifying_glass_CH()
{
   return this->Show_magnifying_glass_CH;
};

bool Config_init_registry::get_Open_screenshot_in_the_browser_CH()
{
   return this->Open_screenshot_in_the_browser_CH;
};

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
bool Config_init_registry::get_Recording_screen_area_CH()
{
   return this->Recording_screen_area_CH;
};

bool Config_init_registry::get_Two_mouse_buttons_at_the_same_time_CH_VIDEO()
{
   return this->Two_mouse_buttons_at_the_same_time_CH_VIDEO;
};

int Config_init_registry::get_Recording_screen_area_EHK()
{
   return this->Recording_screen_area_EHK;
};

//-----------Save_parameters_VIDEO-----------------------------//
bool Config_init_registry::get_Server_RB_VIDEO()
{
   return this->Server_RB_VIDEO;
};

AnsiString Config_init_registry::get_Address_E_VIDEO()
{
   return this->Address_E_VIDEO;
};

AnsiString Config_init_registry::get_Login_E_VIDEO()
{
   return this->Login_E_VIDEO;
};

AnsiString Config_init_registry::get_Password_E_VIDEO()
{
   return this->Password_E_VIDEO;
};

bool Config_init_registry::get_Show_Password_CH_VIDEO()
{
   return this->Show_Password_CH_VIDEO;
};

bool Config_init_registry::get_Locally_RB_VIDEO()
{
  return this->Locally_RB_VIDEO;
};

AnsiString Config_init_registry::get_Locally_E_VIDEO()
{
  return this->Locally_E_VIDEO;
};

//------------Additional_options_VIDEO-------------------------//
bool Config_init_registry::get_Always_record_the_microphone_CH_VIDEO()
{
   return this->Always_record_the_microphone_CH_VIDEO;
};

bool Config_init_registry::get_Record_audio_CH_VIDEO()
{
   return this->Record_audio_CH_VIDEO;
};

bool Config_init_registry::get_Open_video_in_the_browser_CH_VIDEO()
{
   return this->Open_video_in_the_browser_CH_VIDEO;
};



bool Config_init_registry::get_Log_create_CH()
{
   return this->Log_create_CH;
};

void Config_init_registry::destroy_varrible()
{
this->Screenshot_of_the_entire_screen_EHK                 = 0;
this->Screenshot_of_the_active_window_EHK                 = 0;
this->Screenshot_of_the_screen_area_EHK                   = 0;
this->Two_mouse_buttons_at_the_same_time_CH               = false;

//----------Save_parameters------------------------------------//
this->Server_RB                                           = false;
this->Address_E                                           = "";
this->Login_E                                             = "";
this->Password_E                                          = "";
this->Show_Password_CH                                    = false;
this->Locally_RB                                          = false;
this->Locally_E                                           = "";

//----------Additional_options---------------------------------//
this->Show_the_cursor_on_the_screenshot_CH                = false;
this->Show_magnifying_glass_CH                            = false;
this->Open_screenshot_in_the_browser_CH                   = false;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
this->Recording_screen_area_CH                            = false;
this->Two_mouse_buttons_at_the_same_time_CH_VIDEO         = false;
this->Recording_screen_area_EHK                           = 0;

//-----------Save_parameters_VIDEO-----------------------------//
this->Server_RB_VIDEO                                     = false;
this->Address_E_VIDEO                                     = "";
this->Login_E_VIDEO                                       = "";
this->Password_E_VIDEO                                    = "";
this->Show_Password_CH_VIDEO                              = false;
this->Locally_RB_VIDEO                                    = false;
this->Locally_E_VIDEO                                     = "";

//------------Additional_options_VIDEO-------------------------//
this->Always_record_the_microphone_CH_VIDEO               = false;
this->Record_audio_CH_VIDEO                               = false;
this->Open_video_in_the_browser_CH_VIDEO                  = false;


this->Log_create_CH                                       = false;
};



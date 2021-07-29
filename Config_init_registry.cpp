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

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  this->Font_E                                        = object.Font_E;
  this->Font_size_E                                   = object.Font_size_E;
  this->Them_CM                                       = object.Them_CM;
  this->Font_bold_CH                                  = object.Font_bold_CH;
  this->Font_italic_CH                                = object.Font_italic_CH;
  this->Font_underlined_CH                            = object.Font_underlined_CH;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  this->Long_type_line_CM                            = object.Long_type_line_CM;
  this->Long_color_RED                               = object.Long_color_RED;
  this->Long_color_GREEN                             = object.Long_color_GREEN;
  this->Long_color_BLUE                              = object.Long_color_BLUE;
  this->Long_line_size_E                             = object.Long_line_size_E;

//------------Short_lines--------------------------------------//
  this->Short_type_line_CM                           = object.Short_type_line_CM;
  this->Short_color_RED                              = object.Short_color_RED;
  this->Short_color_GREEN                            = object.Short_color_GREEN;
  this->Short_color_BLUE                             = object.Short_color_BLUE;
  this->Short_line_size_E                            = object.Short_line_size_E;

//-----------Other---------------------------------------------//
  this->Indent_E                                     = object.Indent_E;
  this->Magnifier_E                                  = object.Magnifier_E;
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

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
void Config_init_registry::set_Font_E(AnsiString set)
{
   this->Font_E = set;
};

void Config_init_registry::set_Font_size_E(int set)
{
   this->Font_size_E = set;
};

void Config_init_registry::set_Them_CM(AnsiString set)
{
   this->Them_CM = set;
};

void Config_init_registry::set_Font_bold_CH(bool set)
{
   this->Font_bold_CH = set;
};

void Config_init_registry::set_Font_italic_CH(bool set)
{
   this->Font_italic_CH = set;
};

void Config_init_registry::set_Font_underlined_CH(bool set)
{
   this->Font_underlined_CH = set;
};

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
void Config_init_registry::set_Long_type_line_CM(AnsiString set)
{
   this->Long_type_line_CM = set;
};

void Config_init_registry::set_Long_color_RED(int set)
{
   this->Long_color_RED = set;
};

void Config_init_registry::set_Long_color_GREEN(int set)
{
   this->Long_color_GREEN = set;
};

void Config_init_registry::set_Long_color_BLUE(int set)
{
   this->Long_color_BLUE = set;
};

void Config_init_registry::set_Long_line_size_E(int set)
{
   this->Long_line_size_E = set;
};

//------------Short_lines--------------------------------------//
void Config_init_registry::set_Short_type_line_CM(AnsiString set)
{
   this->Short_type_line_CM = set;
};

void Config_init_registry::set_Short_color_RED(int set)
{
   this->Short_color_RED = set;
};

void Config_init_registry::set_Short_color_GREEN(int set)
{
   this->Short_color_GREEN = set;
};

void Config_init_registry::set_Short_color_BLUE(int set)
{
   this->Short_color_BLUE = set;
};

void Config_init_registry::set_Short_line_size_E(int set)
{
   this->Short_line_size_E = set;
};

//-----------Other---------------------------------------------//
void Config_init_registry::set_Indent_E(int set)
{
   this->Indent_E = set;
};

void Config_init_registry::set_Magnifier_E(int set)
{
   this->Magnifier_E = set;
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

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
AnsiString Config_init_registry::get_Font_E()
{
   return this->Font_E;
};

int Config_init_registry::get_Font_size_E()
{
   return this->Font_size_E;
};

AnsiString Config_init_registry::get_Them_CM()
{
   return this->Them_CM;
};

bool Config_init_registry::get_Font_bold_CH()
{
   return this->Font_bold_CH;
};

bool Config_init_registry::get_Font_italic_CH()
{
   return this->Font_italic_CH;
};

bool Config_init_registry::get_Font_underlined_CH()
{
   return this->Font_underlined_CH;
};

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
AnsiString Config_init_registry::get_Long_type_line_CM()
{
   return this->Long_type_line_CM;
};

int Config_init_registry::get_Long_color_RED()
{
   return this->Long_color_RED;
};

int Config_init_registry::get_Long_color_GREEN()
{
   return this->Long_color_GREEN;
};

int Config_init_registry::get_Long_color_BLUE()
{
   return this->Long_color_BLUE;
};

int Config_init_registry::get_Long_line_size_E()
{
   return this->Long_line_size_E;
};

//------------Short_lines--------------------------------------//
AnsiString Config_init_registry::get_Short_type_line_CM()
{
   return this->Short_type_line_CM;
};

int Config_init_registry::get_Short_color_RED()
{
   return this->Short_color_RED;
};

int Config_init_registry::get_Short_color_GREEN()
{
   return this->Short_color_GREEN;
};

int Config_init_registry::get_Short_color_BLUE()
{
   return this->Short_color_BLUE;
};

int Config_init_registry::get_Short_line_size_E()
{
   return this->Short_line_size_E;
};

//-----------Other---------------------------------------------//
int Config_init_registry::get_Indent_E()
{
   return this->Indent_E;
};

int Config_init_registry::get_Magnifier_E()
{
   return this->Magnifier_E;
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

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
this->Font_E = "";
this->Font_size_E = 0;
this->Them_CM = "";
this->Font_bold_CH                                        = false;
this->Font_italic_CH                                      = false;
this->Font_underlined_CH                                  = false;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
this->Long_type_line_CM                                   = "";
this->Long_color_RED                                      = 0;
this->Long_color_GREEN                                    = 0;
this->Long_color_BLUE                                     = 0;
this->Long_line_size_E                                    = 0;

//------------Short_lines--------------------------------------//
this->Short_type_line_CM                                  = "";
this->Short_color_RED                                     = 0;
this->Short_color_GREEN                                   = 0;
this->Short_color_BLUE                                    = 0;
this->Short_line_size_E                                   = 0;

//-----------Other---------------------------------------------//
this->Indent_E                                            = 0;
this->Magnifier_E                                         = 0;
this->Log_create_CH                                       = false;
};



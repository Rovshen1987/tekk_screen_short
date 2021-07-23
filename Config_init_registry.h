#pragma once
#include <vcl.h>
class Config_init_registry
{
public:
	  Config_init_registry();
	 ~Config_init_registry();

///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  void  set_Screenshot_of_the_entire_screen_EHK(AnsiString set);
  void	set_Screenshot_of_the_active_window_EHK(AnsiString set);
  void	set_Screenshot_of_the_screen_area_EHK(AnsiString set);
  void  set_Two_mouse_buttons_at_the_same_time_CH(bool set);

//----------Save_parameters------------------------------------//
  void  set_Server_RB(bool set);
  void	set_Address_E(AnsiString set);
  void	set_Login_E(AnsiString set);
  void	set_Password_E(AnsiString set);
  void  set_Show_Password_CH(bool set);
  void  set_Locally_RB(bool set);
  void	set_Locally_E(AnsiString set);

//----------Additional_options---------------------------------//
  void  set_Show_the_cursor_on_the_screenshot_CH(bool set);
  void  set_Show_magnifying_glass_CH(bool set);
  void  set_Open_screenshot_in_the_browser_CH(bool set);

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  void  set_Recording_screen_area_CH(bool set);
  void  set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(bool set);
  void	set_Recording_screen_area_EHK(AnsiString set);

//-----------Save_parameters_VIDEO-----------------------------//
  void  set_Server_RB_VIDEO(bool set);
  void	set_Address_E_VIDEO(AnsiString set);
  void	set_Login_E_VIDEO(AnsiString set);
  void	set_Password_E_VIDEO(AnsiString set);
  void  set_Show_Password_CH_VIDEO(bool set);
  void  set_Locally_RB_VIDEO(bool set);
  void  set_Locally_E_VIDEO(AnsiString set);

//------------Additional_options_VIDEO-------------------------//
  void  set_Always_record_the_microphone_CH(bool set);
  void  set_Record_audio_CH(bool set);
  void  set_Open_video_in_the_browser_CH(bool set);

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  void	set_Font_E(AnsiString set);
  void	set_Font_size_E(int set);
  void	set_Them_CM(AnsiString set);
  void  set_Font_bold_CH(bool set);
  void  set_Font_italic_CH(bool set);
  void  set_Font_underlined_CH(bool set);

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  void	set_Long_type_line_CM(AnsiString set);
  void  set_Long_color_RED(int set);
  void  set_Long_color_GREEN(int set);
  void  set_Long_color_BLUE(int set);
  void  set_Long_line_size_E(int set);

//------------Short_lines--------------------------------------//
  void	set_Short_type_line_CM(AnsiString set);
  void  set_Short_color_RED(int set);
  void  set_Short_color_GREEN(int set);
  void  set_Short_color_BLUE(int set);
  void  set_Short_line_size_E(int set);

//-----------Other---------------------------------------------//
  void  set_Indent_E(int set);
  void	set_Magnifier_E(int set);
  void	set_Log_create_CH(bool set);


///////////////////////////////////////---------GET----------////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  AnsiString  get_Screenshot_of_the_entire_screen_EHK();
  AnsiString  get_Screenshot_of_the_active_window_EHK();
  AnsiString  get_Screenshot_of_the_screen_area_EHK();
  bool        get_Two_mouse_buttons_at_the_same_time_CH();

//----------Save_parameters------------------------------------//
  bool        get_Server_RB();
  AnsiString  get_Address_E();
  AnsiString  get_Login_E();
  AnsiString  get_Password_E();
  bool        get_Show_Password_CH();
  bool        get_Locally_RB();
  AnsiString  get_Locally_E();

//----------Additional_options---------------------------------//
  bool        get_Show_the_cursor_on_the_screenshot_CH();
  bool        get_Show_magnifying_glass_CH();
  bool        get_Open_screenshot_in_the_browser_CH();

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  bool        get_Recording_screen_area_CH();
  bool        get_Two_mouse_buttons_at_the_same_time_CH_VIDEO();
  AnsiString  get_Recording_screen_area_EHK();

//-----------Save_parameters_VIDEO-----------------------------//
  bool        get_Server_RB_VIDEO();
  AnsiString  get_Address_E_VIDEO();
  AnsiString  get_Login_E_VIDEO();
  AnsiString  get_Password_E_VIDEO();
  bool        get_Show_Password_CH_VIDEO();
  bool        get_Locally_RB_VIDEO();
  AnsiString  get_Locally_E_VIDEO();

//------------Additional_options_VIDEO-------------------------//
  bool        get_Always_record_the_microphone_CH();
  bool        get_Record_audio_CH();
  bool        get_Open_video_in_the_browser_CH();

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  AnsiString  get_Font_E();
  int         get_Font_size_E();
  AnsiString  get_Them_CM();
  bool        get_Font_bold_CH();
  bool        get_Font_italic_CH();
  bool        get_Font_underlined_CH();

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  AnsiString  get_Long_type_line_CM();
  int         get_Long_color_RED();
  int         get_Long_color_GREEN();
  int         get_Long_color_BLUE();
  int         get_Long_line_size_E();

//------------Short_lines--------------------------------------//
  AnsiString  get_Short_type_line_CM();
  int         get_Short_color_RED();
  int         get_Short_color_GREEN();
  int         get_Short_color_BLUE();
  int         get_Short_line_size_E();

//-----------Other---------------------------------------------//
  int         get_Indent_E();
  int 	      get_Magnifier_E();
  bool	      get_Log_create_CH();

private:

//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  AnsiString  Screenshot_of_the_entire_screen_EHK;
  AnsiString  Screenshot_of_the_active_window_EHK;
  AnsiString  Screenshot_of_the_screen_area_EHK;
  bool        Two_mouse_buttons_at_the_same_time_CH;

//----------Save_parameters------------------------------------//
  bool        Server_RB;
  AnsiString  Address_E;
  AnsiString  Login_E;
  AnsiString  Password_E;
  bool        Show_Password_CH;
  bool        Locally_RB;
  AnsiString  Locally_E;

//----------Additional_options---------------------------------//
  bool        Show_the_cursor_on_the_screenshot_CH;
  bool        Show_magnifying_glass_CH;
  bool        Open_screenshot_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  bool        Recording_screen_area_CH;
  bool        Two_mouse_buttons_at_the_same_time_CH_VIDEO;
  AnsiString  Recording_screen_area_EHK;

//-----------Save_parameters_VIDEO-----------------------------//
  bool        Server_RB_VIDEO;
  AnsiString  Address_E_VIDEO;
  AnsiString  Login_E_VIDEO;
  AnsiString  Password_E_VIDEO;
  bool        Show_Password_CH_VIDEO;
  bool        Locally_RB_VIDEO;
  AnsiString  Locally_E_VIDEO;

//------------Additional_options_VIDEO-------------------------//
  bool        Always_record_the_microphone_CH;
  bool        Record_audio_CH;
  bool        Open_video_in_the_browser_CH;

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  AnsiString  Font_E;
  int         Font_size_E;
  AnsiString  Them_CM;
  bool        Font_bold_CH;
  bool        Font_italic_CH;
  bool        Font_underlined_CH;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  AnsiString  Long_type_line_CM;
  int         Long_color_RED;
  int         Long_color_GREEN;
  int         Long_color_BLUE;
  int         Long_line_size_E;

//------------Short_lines--------------------------------------//
  AnsiString  Short_type_line_CM;
  int         Short_color_RED;
  int         Short_color_GREEN;
  int         Short_color_BLUE;
  int         Short_line_size_E;

//-----------Other---------------------------------------------//
  int         Indent_E;
  int         Magnifier_E;
  bool        Log_create_CH;

  void destroy_varrible();

};

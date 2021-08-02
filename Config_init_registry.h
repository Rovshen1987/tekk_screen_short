#pragma once
#include <vcl.h>
class Config_init_registry
{
public:
	  Config_init_registry();
	  Config_init_registry(const Config_init_registry& object) = default;
	  Config_init_registry& operator=(const Config_init_registry& object);
	  Config_init_registry(Config_init_registry&& object)= default;
	  Config_init_registry& operator=(Config_init_registry&& object)= default;

	 ~Config_init_registry();

///////////////////////////////////-------SET----------////////////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  void  set_Screenshot_of_the_entire_screen_EHK(int set);
  void	set_Screenshot_of_the_active_window_EHK(int set);
  void	set_Screenshot_of_the_screen_area_EHK(int set);
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
  void	set_Recording_screen_area_EHK(int set);

//-----------Save_parameters_VIDEO-----------------------------//
  void  set_Server_RB_VIDEO(bool set);
  void	set_Address_E_VIDEO(AnsiString set);
  void	set_Login_E_VIDEO(AnsiString set);
  void	set_Password_E_VIDEO(AnsiString set);
  void  set_Show_Password_CH_VIDEO(bool set);
  void  set_Locally_RB_VIDEO(bool set);
  void  set_Locally_E_VIDEO(AnsiString set);

//------------Additional_options_VIDEO-------------------------//
  void  set_Always_record_the_microphone_CH_VIDEO(bool set);
  void  set_Record_audio_CH_VIDEO(bool set);
  void  set_Open_video_in_the_browser_CH_VIDEO(bool set);


  void	set_Log_create_CH(bool set);
  void  set_Them_CB(AnsiString set);

///////////////////////////////////////---------GET----------////////////////////////////////////
//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  int         get_Screenshot_of_the_entire_screen_EHK();
  int         get_Screenshot_of_the_active_window_EHK();
  int         get_Screenshot_of_the_screen_area_EHK();
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
  int         get_Recording_screen_area_EHK();

//-----------Save_parameters_VIDEO-----------------------------//
  bool        get_Server_RB_VIDEO();
  AnsiString  get_Address_E_VIDEO();
  AnsiString  get_Login_E_VIDEO();
  AnsiString  get_Password_E_VIDEO();
  bool        get_Show_Password_CH_VIDEO();
  bool        get_Locally_RB_VIDEO();
  AnsiString  get_Locally_E_VIDEO();

//------------Additional_options_VIDEO-------------------------//
  bool        get_Always_record_the_microphone_CH_VIDEO();
  bool        get_Record_audio_CH_VIDEO();
  bool        get_Open_video_in_the_browser_CH_VIDEO();
  bool        get_Log_create_CH();
  AnsiString  get_Them_CB();


private:

//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  int         Screenshot_of_the_entire_screen_EHK;
  int         Screenshot_of_the_active_window_EHK;
  int         Screenshot_of_the_screen_area_EHK;
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
  int         Recording_screen_area_EHK;

//-----------Save_parameters_VIDEO-----------------------------//
  bool        Server_RB_VIDEO;
  AnsiString  Address_E_VIDEO;
  AnsiString  Login_E_VIDEO;
  AnsiString  Password_E_VIDEO;
  bool        Show_Password_CH_VIDEO;
  bool        Locally_RB_VIDEO;
  AnsiString  Locally_E_VIDEO;

//------------Additional_options_VIDEO-------------------------//
  bool        Always_record_the_microphone_CH_VIDEO;
  bool        Record_audio_CH_VIDEO;
  bool        Open_video_in_the_browser_CH_VIDEO;


  bool        Log_create_CH;
  AnsiString  Them_CB;

  void destroy_varrible();

};

#pragma once
#include <Registry.hpp>
#include <Vcl.ComCtrls.hpp>
#include "cspin.h"
#include "Config_init_registry.h"
#include "direct_r.h"



class Config_init
{

public:
	  Config_init();
//	  Config_init(const Config_init& object);
//	  Config_init& operator=(const Config_init& object);
//	  Config_init(Config_init&& object);
//	  Config_init& operator=(Config_init&& object);
	 ~Config_init();
  bool   do_editing;

  bool Check_registry_key();



//--------------------------------------------------------------------------------PAGE__1----------
//----------Hot_Keys--------------------------------------------//
  void  set_Screenshot_of_the_entire_screen_EHK(THotKey* set);
  void	set_Screenshot_of_the_active_window_EHK(THotKey* set);
  void	set_Screenshot_of_the_screen_area_EHK(THotKey* set);
  void	set_Two_mouse_buttons_at_the_same_time_CH(TCheckBox* set);

//----------Save_parameters------------------------------------//
  void set_Server_RB(TRadioButton* set);
  void set_Address_E(TEdit* set);
  void set_Login_E(TEdit* set);
  void set_Password_E(TEdit* set);
  void set_Show_Password_CH(TCheckBox* set);
  void set_Locally_RB(TRadioButton* set);
  void set_Locally_E(TEdit* set);

//----------Additional_options---------------------------------//
  void set_Show_the_cursor_on_the_screenshot_CH(TCheckBox* set);
  void set_Show_magnifying_glass_CH(TCheckBox* set);
  void set_Open_screenshot_in_the_browser_CH(TCheckBox* set);

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  void set_Recording_screen_area_CH(TCheckBox* set);
  void set_Two_mouse_buttons_at_the_same_time_CH_VIDEO(TCheckBox* set);
  void set_Recording_screen_area_EHK(THotKey* set);

//-----------Save_parameters_VIDEO-----------------------------//
  void set_Server_RB_VIDEO(TRadioButton* set);
  void set_Address_E_VIDEO(TEdit* set);
  void set_Login_E_VIDEO(TEdit* set);
  void set_Password_E_VIDEO(TEdit* set);
  void set_Show_Password_CH_VIDEO(TCheckBox* set);
  void set_Locally_RB_VIDEO(TRadioButton* set);
  void set_Locally_E_VIDEO(TEdit* set);

//------------Additional_options_VIDEO-------------------------//
  void set_Always_record_the_microphone_CH_VIDEO(TCheckBox* set);
  void set_Record_audio_CH_VIDEO(TCheckBox* set);
  void set_Open_video_in_the_browser_CH_VIDEO(TCheckBox* set);

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  void set_Font_E(TEdit* set);
  void set_Font_size_E(TEdit* set);
  void set_Them_CM(TComboBox* set);
  void set_Font_bold_CH(TCheckBox* set);
  void set_Font_italic_CH(TCheckBox* set);
  void set_Font_underlined_CH(TCheckBox* set);

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  void set_Long_type_line_CM(TComboBox* set);
  void set_Long_color_RED(TCSpinEdit* set);
  void set_Long_color_GREEN(TCSpinEdit* set);
  void set_Long_color_BLUE(TCSpinEdit* set);
  void set_Long_line_size_E(TEdit* set);

//------------Short_lines--------------------------------------//
  void set_Short_type_line_CM(TComboBox* set);
  void set_Short_color_RED(TCSpinEdit* set);
  void set_Short_color_GREEN(TCSpinEdit* set);
  void set_Short_color_BLUE(TCSpinEdit* set);
  void set_Short_line_size_E(TEdit* set);

//-----------Other---------------------------------------------//
  void set_Indent_E(TEdit* set);
  void set_Magnifier_E(TEdit* set);
  void set_Log_create_CH(TCheckBox* set);


private:
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

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  TEdit*         Font_E;
  TEdit*         Font_size_E;
  TComboBox*     Them_CM;
  TCheckBox*     Font_bold_CH;
  TCheckBox*     Font_italic_CH;
  TCheckBox*     Font_underlined_CH;

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  TComboBox*     Long_type_line_CM;
  TCSpinEdit*    Long_color_RED;
  TCSpinEdit*    Long_color_GREEN;
  TCSpinEdit*    Long_color_BLUE;
  TEdit*         Long_line_size_E;

//------------Short_lines--------------------------------------//
  TComboBox*     Short_type_line_CM;
  TCSpinEdit*    Short_color_RED;
  TCSpinEdit*    Short_color_GREEN;
  TCSpinEdit*    Short_color_BLUE;
  TEdit*         Short_line_size_E;

//-----------Other---------------------------------------------//
  TEdit*                 Indent_E;
  TEdit*                 Magnifier_E;
  TCheckBox*             Log_create_CH;

  Config_init_registry*  Registry_config;
  Config_init_registry*  Program_config;
  Config_init_registry*  Default_config;
  direct_r*              directory;

  const AnsiString Screen_shot_ASC     = "Software\\tekk\\Screen_shot";
  const AnsiString Video_ASC           = "Software\\tekk\\Video";
  const AnsiString General_setup       = "Software\\tekk\\General_setup";

  const AnsiString FOLDER_NAME_PICTURE = "Picture";
  const AnsiString FOLDER_NAME_VIDEO   = "Video";
  const HKEY       Root_key_C          = HKEY_CURRENT_USER;

  enum type_struct {___bool, ___int, ___AnsiString};



  void anihilation_varrible();

//  void Registry_create();
  void Registry_destroy();
  void Registry_read();
  void Registry_save(bool Default = false);

  template<class T>
  bool compare_variable(T& first, T& last)
  {
	 if (first == last)
	 {
	  return true;
	 }
	 else
	 {
	  return false;
	 }
  };


  void Registry_save_inside(const type_struct& struc, const int& first, const int& last, const AnsiString& KeyName, TRegistry* reg, bool Defaul);
  void Registry_save_inside(const type_struct& struc, const bool& first, const bool& last, const AnsiString& KeyName, TRegistry* reg, bool Defaul);
  void Registry_save_inside(const type_struct& struc, const AnsiString& first, const AnsiString& last, const AnsiString& KeyName, TRegistry* reg, bool Defaul);




  void Program_config_init();
  void Default_config_init();
  void Form_to_config_checked(Config_init_registry* first);



  std::string Conversion_AnsiString_to_string(AnsiString& str);
  AnsiString  Conversion_string_to_AnsiString(std::string& str);

  bool        Checked(TCheckBox* ch);
  bool        Checked(TRadioButton* ch);

  void        Form_to_config(Config_init_registry* first);
  void        Config_to_form(Config_init_registry* first);

  AnsiString fool_path(const AnsiString& folder_name);
  AnsiString get_AnsiString_to_int(int set);

  bool Check_registry_key_in_side();
  void Default_config_V();

};


/*
  cf->set_Screenshot_of_the_entire_screen_EHK();
  cf->set_Screenshot_of_the_active_window_EHK();
  cf->set_Screenshot_of_the_screen_area_EHK();
  cf->set_Two_mouse_buttons_at_the_same_time_CH();

//----------Save_parameters------------------------------------//
  cf->set_Server_RB();
  cf->set_Address_E();
  cf->set_Login_E();
  cf->set_Password_E();
  cf->set_Show_Password_CH();
  cf->set_Locally_RB();
  cf->set_Locally_E();

//----------Additional_options---------------------------------//
  cf->set_Show_the_cursor_on_the_screenshot_CH();
  cf->set_Show_magnifying_glass_CH();
  cf->set_Open_screenshot_in_the_browser_CH();

//--------------------------------------------------------------------------------PAGE__2----------
//-----------Hot_keys_VIDEO------------------------------------//
  cf->set_Recording_screen_area_CH();
  cf->set_Two_mouse_buttons_at_the_same_time_CH_VIDEO();
  cf->set_Recording_screen_area_EHK();

//-----------Save_parameters_VIDEO-----------------------------//
  cf->set_Server_RB_VIDEO();
  cf->set_Address_E_VIDEO();
  cf->set_Login_E_VIDEO();
  cf->set_Password_E_VIDEO();
  cf->set_Show_Password_VIDEO();
  cf->set_Locally_RB_VIDEO();
  cf->set_Locally_E_VIDEO();

//------------Additional_options_VIDEO-------------------------//
  cf->set_Always_record_the_microphone_CH();
  cf->set_Record_audio_CH();
  cf->set_Open_video_in_the_browser_CH();

//--------------------------------------------------------------------------------PAGE__3----------
//-----------General_options------------------------------------//
  cf->set_Font_E();
  cf->set_Font_size_E();
  cf->set_Them_CM();
  cf->set_Font_bold_CH();
  cf->set_Font_italic_CH();
  cf->set_Font_underlined_CH();

//------------Shooting------------------------------------------//
//------------Long_lines---------------------------------------//
  cf->set_Long_type_line_CM();
  cf->set_Long_color_RED();
  cf->set_Long_color_GREEN();
  cf->set_Long_color_BLUE();
  cf->set_Long_line_size_E();

//------------Short_lines--------------------------------------//
  cf->set_Short_type_line_CM();
  cf->set_Short_color_RED();
  cf->set_Short_color_GREEN();
  cf->set_Short_color_BLUE();
  cf->set_Short_line_size_E();

//-----------Other---------------------------------------------//
  cf->set_Indent_E();
  cf->set_Magnifier_E();
  cf->set_Log_create();

*/
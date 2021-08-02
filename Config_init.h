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

  bool Check_date_to_editin_object(const AnsiString& object);

  bool Check_registry_key();
  void Exit_BUTTON_v();
  void By_default_BUTTON_v();
  void Save_BUTTON_v();

//
//  template<class T>
//  bool Check_date_to_editing(T& Sender)
//  {
//   if (this->Check_date_to_editin_object(Sender->GetNamePath()))
//   {
//	return true;
//   }
//   else
//   {
//	return false;
//   };
//  };


  template<class T>
  bool Check_date_to_editin_inside(const T& first, const T& last)
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


  void set_Log_create_CH(TCheckBox* set);
  void set_Them_CB(TComboBox* set);

//------------------------------Control-------------------------------//
  void set_By_default_BUTTON(TButton* set);
  void set_Exit_BUTTON(TButton* set);
  void set_Save_BUTTON(TButton* set);

  void set_Configuration_F(TForm* set);
  void set_General_F(TForm* set);

  void set_do_editing(bool set);
  void set_do_default(bool set);
  //-------------------------------------------------------
  bool get_do_editing();
  bool get_do_default();

//-------------------------------------------------------------------------//
//-------------------------------------------------------------------------//
//-------------------------------------------------------------------------//
  void Control_button_v();
  void Them_form_all(const AnsiString& set);

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
  TComboBox*     Them_CB;


  TCheckBox*             Log_create_CH;

  Config_init_registry*  Registry_config;
  Config_init_registry*  Program_config;
  Config_init_registry*  Default_config;
  direct_r*              directory;

//-------------Control-------------------------------------------//
  TButton* By_default_BUTTON;
  TButton* Exit_BUTTON;
  TButton* Save_BUTTON;

  TForm*   Configuration_F;
  TForm*   General_F;

//--------------Other--------------------------------------------//
  bool   do_editing;
  bool   do_default;

  const AnsiString Screen_shot_ASC     = "Software\\tekk\\Screen_shot";
  const AnsiString Video_ASC           = "Software\\tekk\\Video";

  const AnsiString FOLDER_NAME_PICTURE = "Picture";
  const AnsiString FOLDER_NAME_VIDEO   = "Video";
  const HKEY       Root_key_C          = HKEY_CURRENT_USER;

  const AnsiString CONFIG_CLOSE        = "Закрыть";
  const AnsiString CONFIG_RETURN       = "Отменить";

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



  std::string Conversion_AnsiString_to_string(const AnsiString& str);
  AnsiString  Conversion_string_to_AnsiString(std::string& str);

  bool        Checked(TCheckBox* ch);
  bool        Checked(TRadioButton* ch);

  void        Form_to_config(Config_init_registry* first);
  void        Config_to_form(Config_init_registry* first);

  AnsiString fool_path(const AnsiString& folder_name);
  AnsiString get_AnsiString_to_int(int set);

  bool Check_registry_key_in_side();

  int  get_ID_object(const AnsiString& object);
  bool Save_BUTTON_HotKey_check();
  bool Save_BUTTON_HotKey_check_inside(const int& first, const int& last);
  void Locally_E_create_folder(const AnsiString& folder_name);

};




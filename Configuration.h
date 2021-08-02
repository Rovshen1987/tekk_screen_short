//---------------------------------------------------------------------------

#ifndef ConfigurationH
#define ConfigurationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "cspin.h"
#include <VCLTee.TeCanvas.hpp>
#include "Config_init.h"
#include "memory.h"
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Buttons.hpp>
#include <string>
#include "general.h"
#include "Select_dialog_dir.h"

//---------------------------------------------------------------------------
class TConfiguration_F : public TForm
{
__published:	// IDE-managed Components
	TPageControl *Option;
	TTabSheet *Screen_shot;
	TGroupBox *Hot_Keys;
	TLabel *Screenshot_of_the_entire_screen_L;
	TLabel *Screenshot_of_the_active_window_L;
	TLabel *Screenshot_of_the_screen_area_L;
	TTabSheet *Video;
	TGroupBox *Save_parameters;
	TCheckBox *Two_mouse_buttons_at_the_same_time_CH;
	TLabel *Address_L;
	TEdit *Address_E;
	TLabel *Login_L;
	TLabel *Password_L;
	TEdit *Login_E;
	TEdit *Password_E;
	TCheckBox *Show_Password_CH;
	TEdit *Locally_E;
	TGroupBox *Additional_options;
	TCheckBox *Show_the_cursor_on_the_screenshot_CH;
	TCheckBox *Show_magnifying_glass_CH;
	TCheckBox *Open_screenshot_in_the_browser_CH;
	TGroupBox *Hot_keys_VIDEO;
	TCheckBox *Recording_screen_area_CH;
	TCheckBox *Two_mouse_buttons_at_the_same_time_CH_VIDEO;
	TGroupBox *Save_parameters_VIDEO;
	TLabel *Address_L_VIDEO;
	TEdit *Address_E_VIDEO;
	TLabel *Login_L_VIDEO;
	TLabel *Password_L_VIDEO;
	TEdit *Login_E_VIDEO;
	TEdit *Password_E_VIDEO;
	TCheckBox *Show_Password_CH_VIDEO;
	TGroupBox *Additional_options_VIDEO;
	TCheckBox *Always_record_the_microphone_CH_VIDEO;
	TCheckBox *Record_audio_CH_VIDEO;
	TCheckBox *Open_video_in_the_browser_CH_VIDEO;
	TButton *Save_BUTTON;
	TButton *Exit_BUTTON;
	THotKey *Screenshot_of_the_entire_screen_EHK;
	THotKey *Screenshot_of_the_active_window_EHK;
	THotKey *Screenshot_of_the_screen_area_EHK;
	THotKey *Recording_screen_area_EHK;
	TRadioButton *Server_RB;
	TRadioButton *Locally_RB;
	TRadioButton *Server_RB_VIDEO;
	TRadioButton *Locally_RB_VIDEO;
	TEdit *Locally_E_VIDEO;
	TButton *By_default_BUTTON;
	TCheckBox *Log_create_CH;
	TBevel *Bevel1;
	TLabel *Them_L;
	TComboBox *Them_CB;
	TBitBtn *BitBtn1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Server_RBClick(TObject *Sender);
	void __fastcall Locally_RBClick(TObject *Sender);
	void __fastcall Server_RB_VIDEOClick(TObject *Sender);
	void __fastcall Locally_RB_VIDEOClick(TObject *Sender);
	void __fastcall Show_Password_CHClick(TObject *Sender);
	void __fastcall Show_Password_CH_VIDEOClick(TObject *Sender);
	void __fastcall Exit_BUTTONClick(TObject *Sender);
	void __fastcall Locally_EChange(TObject *Sender);
	void __fastcall Screenshot_of_the_entire_screen_EHKChange(TObject *Sender);
	void __fastcall Screenshot_of_the_active_window_EHKChange(TObject *Sender);
	void __fastcall Screenshot_of_the_screen_area_EHKChange(TObject *Sender);
	void __fastcall Address_EChange(TObject *Sender);
	void __fastcall Login_EChange(TObject *Sender);
	void __fastcall Password_EChange(TObject *Sender);
	void __fastcall Two_mouse_buttons_at_the_same_time_CHClick(TObject *Sender);
	void __fastcall Show_the_cursor_on_the_screenshot_CHClick(TObject *Sender);
	void __fastcall Show_magnifying_glass_CHClick(TObject *Sender);
	void __fastcall Open_screenshot_in_the_browser_CHClick(TObject *Sender);
	void __fastcall Recording_screen_area_CHClick(TObject *Sender);
	void __fastcall Two_mouse_buttons_at_the_same_time_CH_VIDEOClick(TObject *Sender);
	void __fastcall Recording_screen_area_EHKChange(TObject *Sender);
	void __fastcall Address_E_VIDEOChange(TObject *Sender);
	void __fastcall Login_E_VIDEOChange(TObject *Sender);
	void __fastcall Password_E_VIDEOChange(TObject *Sender);
	void __fastcall Locally_E_VIDEOChange(TObject *Sender);
	void __fastcall Always_record_the_microphone_CH_VIDEOClick(TObject *Sender);
	void __fastcall Record_audio_CH_VIDEOClick(TObject *Sender);
	void __fastcall Open_video_in_the_browser_CH_VIDEOClick(TObject *Sender);
	void __fastcall Log_create_CHClick(TObject *Sender);
	void __fastcall Save_BUTTONClick(TObject *Sender);
	void __fastcall By_default_BUTTONClick(TObject *Sender);
	void __fastcall Them_CBSelect(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);






private:	// User declarations
	void initilization();

public:		// User declarations
	__fastcall TConfiguration_F(TComponent* Owner);
	std::unique_ptr<Config_init> config_object;// = std::make_unique<Config_unit>();


};
//---------------------------------------------------------------------------
extern PACKAGE TConfiguration_F *Configuration_F;
//---------------------------------------------------------------------------
#endif

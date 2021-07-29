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
//---------------------------------------------------------------------------
class TConfig : public TForm
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
	TTabSheet *General_setup;
	TGroupBox *General_options;
	TLabel *Font_L;
	TLabel *Font_size_L;
	TCheckBox *Font_bold_CH;
	TCheckBox *Font_italic_CH;
	TCheckBox *Font_underlined_CH;
	TFontDialog *FontDialog1;
	TEdit *Font_E;
	TButton *Font_BUTTON;
	TEdit *Font_size_E;
	TUpDown *Font_size_UP_BUTTON;
	TGroupBox *Shooting;
	TGroupBox *Long_lines;
	TLabel *type_line_L;
	TComboBox *Long_type_line_CM;
	TLabel *Long_line_RGB_L;
	TColorDialog *ColorDialog1;
	TCSpinEdit *Long_color_RED;
	TCSpinEdit *Long_color_GREEN;
	TCSpinEdit *Long_color_BLUE;
	TLabel *Long_line_size_L;
	TEdit *Long_line_size_E;
	TUpDown *Long_line_size_UP_BUTTON;
	TButtonColor *Long_lines_color_BUTTON;
	TGroupBox *Short_lines;
	TLabel *Short_lines_type_L;
	TLabel *Short_lines_color_L;
	TLabel *Short_line_size_L;
	TComboBox *Short_type_line_CM;
	TCSpinEdit *Short_color_RED;
	TCSpinEdit *Short_color_GREEN;
	TCSpinEdit *Short_color_BLUE;
	TButtonColor *Short_lines_color_BUTTON;
	TEdit *Short_line_size_E;
	TUpDown *Short_line_size_BUTTON;
	TGroupBox *Other;
	TLabel *Indent_L;
	TLabel *Magnifier_L;
	TLabel *Them_L;
	TComboBox *Them_CM;
	TEdit *Indent_E;
	TEdit *Magnifier_E;
	TUpDown *Indent_E_BUTTON;
	TUpDown *Magnifier_E_BUTTON;
	TButton *Save_BUTTON;
	TButton *Exit_BUTTON;
	THotKey *Screenshot_of_the_entire_screen_EHK;
	THotKey *Screenshot_of_the_active_window_EHK;
	THotKey *Screenshot_of_the_screen_area_EHK;
	THotKey *Recording_screen_area_EHK;
	TBevel *Font_style_bevel;
	TCheckBox *Log_create_CH;
	TRadioButton *Server_RB;
	TRadioButton *Locally_RB;
	TRadioButton *Server_RB_VIDEO;
	TRadioButton *Locally_RB_VIDEO;
	TEdit *Locally_E_VIDEO;
	TButton *By_default_BUTTON;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Them_CMChange(TObject *Sender);
	void __fastcall Server_RBClick(TObject *Sender);
	void __fastcall Locally_RBClick(TObject *Sender);
	void __fastcall Server_RB_VIDEOClick(TObject *Sender);
	void __fastcall Locally_RB_VIDEOClick(TObject *Sender);
	void __fastcall Show_Password_CHClick(TObject *Sender);
	void __fastcall Show_Password_CH_VIDEOClick(TObject *Sender);
private:	// User declarations
    void initilization();
public:		// User declarations
	__fastcall TConfig(TComponent* Owner);
	std::unique_ptr<Config_init> config_object;// = std::make_unique<Config_unit>();
};
//---------------------------------------------------------------------------
extern PACKAGE TConfig *Config;
//---------------------------------------------------------------------------
#endif

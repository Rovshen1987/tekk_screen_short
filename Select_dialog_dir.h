//---------------------------------------------------------------------------

#ifndef Select_dialog_dirH
#define Select_dialog_dirH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.FileCtrl.hpp>
//---------------------------------------------------------------------------
class TSelect_dialog_dir_F : public TForm
{
__published:	// IDE-managed Components
	TDirectoryListBox *Directory_LB;
	TDriveComboBox *Drive_CB;
	TPanel *Panel;
	TButton *Cancel_BUTTON;
	TButton *Select_BUTTON;
	TLabel *Directory_L;
	TEdit *Directory_E;
	void __fastcall Directory_LBChange(TObject *Sender);
	void __fastcall Cancel_BUTTONClick(TObject *Sender);
	void __fastcall Select_BUTTONClick(TObject *Sender);
private:	// User declarations
			TEdit*   object;

public:		// User declarations
	__fastcall TSelect_dialog_dir_F(TComponent* Owner);
      void check_directory(TEdit* object);
};
//---------------------------------------------------------------------------
extern PACKAGE TSelect_dialog_dir_F *Select_dialog_dir_F;
//---------------------------------------------------------------------------
#endif

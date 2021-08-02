object Select_dialog_dir_F: TSelect_dialog_dir_F
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Select_dialog_dir_F'
  ClientHeight = 444
  ClientWidth = 531
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 19
  object Directory_LB: TDirectoryListBox
    Left = 0
    Top = 19
    Width = 529
    Height = 326
    ItemHeight = 19
    TabOrder = 0
    OnChange = Directory_LBChange
  end
  object Drive_CB: TDriveComboBox
    Left = 0
    Top = 0
    Width = 529
    Height = 25
    DirList = Directory_LB
    TabOrder = 1
  end
  object Panel: TPanel
    Left = 0
    Top = 348
    Width = 531
    Height = 96
    Align = alBottom
    TabOrder = 2
    object Directory_L: TLabel
      Left = 0
      Top = 14
      Width = 32
      Height = 19
      Caption = #1055#1091#1090#1100
    end
    object Cancel_BUTTON: TButton
      Left = 291
      Top = 45
      Width = 126
      Height = 49
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 0
      OnClick = Cancel_BUTTONClick
    end
    object Select_BUTTON: TButton
      Left = 111
      Top = 45
      Width = 146
      Height = 49
      Caption = #1042#1099#1073#1088#1072#1090#1100
      TabOrder = 1
    end
    object Directory_E: TEdit
      Left = 38
      Top = 12
      Width = 491
      Height = 27
      TabOrder = 2
      Text = 'Directory_E'
    end
  end
end

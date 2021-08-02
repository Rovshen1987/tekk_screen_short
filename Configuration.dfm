object Config: TConfig
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072
  ClientHeight = 656
  ClientWidth = 517
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 19
  object Option: TPageControl
    Left = 0
    Top = 0
    Width = 517
    Height = 656
    Cursor = crHandPoint
    ActivePage = Video
    Align = alClient
    TabOrder = 0
    object Screen_shot: TTabSheet
      Caption = #1057#1082#1088#1080#1085#1096#1086#1090
      object Hot_Keys: TGroupBox
        Left = 3
        Top = 3
        Width = 503
        Height = 159
        Caption = #1043#1086#1088#1103#1095#1080#1077' '#1082#1083#1072#1074#1080#1097#1080
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        object Screenshot_of_the_entire_screen_L: TLabel
          Left = 8
          Top = 25
          Width = 159
          Height = 19
          Caption = #1057#1082#1088#1080#1085#1096#1086#1090' '#1074#1089#1077#1075#1086' '#1101#1082#1088#1072#1085#1072
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
        end
        object Screenshot_of_the_active_window_L: TLabel
          Left = 8
          Top = 60
          Width = 178
          Height = 19
          Caption = #1057#1082#1088#1080#1085#1096#1086#1090' '#1072#1082#1090#1080#1074#1085#1086#1075#1086' '#1086#1082#1085#1072
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
        end
        object Screenshot_of_the_screen_area_L: TLabel
          Left = 8
          Top = 95
          Width = 177
          Height = 19
          Caption = #1057#1082#1088#1080#1085#1096#1086#1090' '#1086#1073#1083#1072#1089#1090#1080' '#1101#1082#1088#1072#1085#1072
        end
        object Two_mouse_buttons_at_the_same_time_CH: TCheckBox
          Left = 8
          Top = 128
          Width = 209
          Height = 17
          Cursor = crHandPoint
          Caption = #1044#1074#1077' '#1082#1085#1086#1087#1082#1080' '#1084#1099#1096#1080' '#1086#1076#1085#1086#1074#1088#1077#1084#1077#1085#1085#1086
          TabOrder = 0
          OnClick = Two_mouse_buttons_at_the_same_time_CHClick
        end
        object Screenshot_of_the_entire_screen_EHK: THotKey
          Left = 216
          Top = 27
          Width = 260
          Height = 27
          Cursor = crHandPoint
          HotKey = 0
          Modifiers = []
          TabOrder = 1
          OnChange = Screenshot_of_the_entire_screen_EHKChange
        end
        object Screenshot_of_the_active_window_EHK: THotKey
          Left = 216
          Top = 60
          Width = 260
          Height = 27
          Cursor = crHandPoint
          HotKey = 0
          Modifiers = []
          TabOrder = 2
          OnChange = Screenshot_of_the_active_window_EHKChange
        end
        object Screenshot_of_the_screen_area_EHK: THotKey
          Left = 216
          Top = 95
          Width = 260
          Height = 27
          Cursor = crHandPoint
          HotKey = 0
          Modifiers = []
          TabOrder = 3
          OnChange = Screenshot_of_the_screen_area_EHKChange
        end
      end
      object Save_parameters: TGroupBox
        Left = 3
        Top = 170
        Width = 503
        Height = 241
        Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1089#1086#1093#1088#1072#1085#1077#1085#1080#1077
        TabOrder = 1
        object Address_L: TLabel
          Left = 30
          Top = 60
          Width = 48
          Height = 19
          Caption = #1040#1076#1088#1077#1089#1089
        end
        object Login_L: TLabel
          Left = 120
          Top = 93
          Width = 43
          Height = 19
          Caption = #1051#1086#1075#1080#1085
        end
        object Password_L: TLabel
          Left = 120
          Top = 130
          Width = 49
          Height = 19
          Caption = #1055#1072#1088#1086#1083#1100
        end
        object Address_E: TEdit
          Left = 100
          Top = 60
          Width = 385
          Height = 27
          TabOrder = 0
          Text = 'Address_E'
          OnChange = Address_EChange
        end
        object Login_E: TEdit
          Left = 193
          Top = 95
          Width = 292
          Height = 27
          TabOrder = 1
          Text = 'Login_E'
          OnChange = Login_EChange
        end
        object Password_E: TEdit
          Left = 193
          Top = 130
          Width = 151
          Height = 27
          TabOrder = 2
          Text = 'Password_E'
          OnChange = Password_EChange
        end
        object Show_Password_CH: TCheckBox
          Left = 350
          Top = 130
          Width = 154
          Height = 25
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1087#1072#1088#1086#1083#1100
          TabOrder = 3
          OnClick = Show_Password_CHClick
        end
        object Locally_E: TEdit
          Left = 16
          Top = 202
          Width = 465
          Height = 27
          TabOrder = 4
          Text = 'Locally_E'
          OnChange = Locally_EChange
        end
        object Server_RB: TRadioButton
          Left = 16
          Top = 25
          Width = 315
          Height = 17
          Cursor = crHandPoint
          Caption = #1053#1072' '#1089#1077#1088#1074#1077#1088', '#1082#1086#1087#1080#1088#1091#1102' '#1089#1089#1099#1083#1082#1091' '#1074' '#1073#1091#1092#1077#1088' '#1086#1073#1084#1077#1085#1072
          TabOrder = 5
          OnClick = Server_RBClick
        end
        object Locally_RB: TRadioButton
          Left = 16
          Top = 165
          Width = 257
          Height = 31
          Cursor = crHandPoint
          Caption = #1051#1086#1082#1072#1083#1100#1085#1086', '#1091#1082#1072#1079#1072#1085#1085#1086#1084#1091' '#1087#1091#1090#1080
          Checked = True
          TabOrder = 6
          TabStop = True
          OnClick = Locally_RBClick
        end
      end
      object Additional_options: TGroupBox
        Left = 3
        Top = 420
        Width = 503
        Height = 101
        Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1086#1087#1094#1080#1080
        TabOrder = 2
        object Show_the_cursor_on_the_screenshot_CH: TCheckBox
          Left = 16
          Top = 25
          Width = 257
          Height = 17
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1082#1091#1088#1089#1086#1088' '#1085#1072' '#1089#1082#1088#1080#1085#1096#1086#1090#1077
          TabOrder = 0
          OnClick = Show_the_cursor_on_the_screenshot_CHClick
        end
        object Show_magnifying_glass_CH: TCheckBox
          Left = 16
          Top = 45
          Width = 185
          Height = 28
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1083#1091#1087#1091
          TabOrder = 1
          OnClick = Show_magnifying_glass_CHClick
        end
        object Open_screenshot_in_the_browser_CH: TCheckBox
          Left = 16
          Top = 72
          Width = 241
          Height = 26
          Cursor = crHandPoint
          Caption = #1054#1090#1082#1088#1099#1074#1072#1090#1100' '#1089#1082#1088#1080#1085#1096#1086#1090' '#1074' '#1073#1088#1072#1091#1079#1077#1088#1077
          TabOrder = 2
          OnClick = Open_screenshot_in_the_browser_CHClick
        end
      end
    end
    object Video: TTabSheet
      Caption = #1042#1080#1076#1077#1086
      ImageIndex = 1
      object Hot_keys_VIDEO: TGroupBox
        Left = 3
        Top = 3
        Width = 494
        Height = 94
        Caption = #1042#1080#1076#1077#1086
        TabOrder = 0
        object Recording_screen_area_CH: TCheckBox
          Left = 16
          Top = 25
          Width = 185
          Height = 25
          Cursor = crHandPoint
          Caption = #1047#1072#1087#1080#1089#1100' '#1086#1073#1083#1072#1089#1090#1080' '#1101#1082#1088#1072#1085#1072
          TabOrder = 0
          OnClick = Recording_screen_area_CHClick
        end
        object Two_mouse_buttons_at_the_same_time_CH_VIDEO: TCheckBox
          Left = 16
          Top = 60
          Width = 177
          Height = 25
          Cursor = crHandPoint
          Caption = #1044#1074#1077' '#1082#1085#1086#1087#1082#1080' '#1084#1099#1096#1080' '#1086#1076#1085#1086#1074#1088#1077#1084#1077#1085#1085#1086
          TabOrder = 1
          OnClick = Two_mouse_buttons_at_the_same_time_CH_VIDEOClick
        end
        object Recording_screen_area_EHK: THotKey
          Left = 216
          Top = 25
          Width = 260
          Height = 27
          Cursor = crHandPoint
          HotKey = 0
          Modifiers = []
          TabOrder = 2
          OnChange = Recording_screen_area_EHKChange
        end
      end
      object Save_parameters_VIDEO: TGroupBox
        Left = 3
        Top = 100
        Width = 494
        Height = 221
        Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1089#1086#1093#1088#1072#1085#1077#1085#1080#1077
        TabOrder = 1
        object Address_L_VIDEO: TLabel
          Left = 30
          Top = 60
          Width = 48
          Height = 19
          Caption = #1040#1076#1088#1077#1089#1089
        end
        object Login_L_VIDEO: TLabel
          Left = 120
          Top = 95
          Width = 43
          Height = 19
          Caption = #1051#1086#1075#1080#1085
        end
        object Password_L_VIDEO: TLabel
          Left = 120
          Top = 130
          Width = 49
          Height = 19
          Caption = #1055#1072#1088#1086#1083#1100
        end
        object Address_E_VIDEO: TEdit
          Left = 100
          Top = 60
          Width = 375
          Height = 27
          Cursor = crHandPoint
          TabOrder = 0
          Text = 'Address_E_VIDEO'
          OnChange = Address_E_VIDEOChange
        end
        object Login_E_VIDEO: TEdit
          Left = 192
          Top = 96
          Width = 283
          Height = 27
          Cursor = crHandPoint
          TabOrder = 1
          Text = 'Login_E_VIDEO'
          OnChange = Login_E_VIDEOChange
        end
        object Password_E_VIDEO: TEdit
          Left = 192
          Top = 130
          Width = 145
          Height = 27
          Cursor = crHandPoint
          PasswordChar = '*'
          TabOrder = 2
          Text = 'Password_E_VIDEO'
          OnChange = Password_E_VIDEOChange
        end
        object Show_Password_CH_VIDEO: TCheckBox
          Left = 344
          Top = 130
          Width = 142
          Height = 33
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1087#1072#1088#1086#1083#1100
          TabOrder = 3
          OnClick = Show_Password_CH_VIDEOClick
        end
        object Server_RB_VIDEO: TRadioButton
          Left = 16
          Top = 30
          Width = 345
          Height = 24
          Cursor = crHandPoint
          Caption = #1053#1072' '#1089#1077#1088#1074#1077#1088', '#1082#1086#1087#1080#1088#1091#1102' '#1089#1089#1099#1083#1082#1091' '#1074' '#1073#1091#1092#1077#1088' '#1086#1073#1084#1077#1085#1072
          TabOrder = 4
          OnClick = Server_RB_VIDEOClick
        end
        object Locally_RB_VIDEO: TRadioButton
          Left = 16
          Top = 163
          Width = 212
          Height = 17
          Cursor = crHandPoint
          Caption = #1051#1086#1082#1072#1083#1100#1085#1086', '#1091#1082#1072#1079#1072#1085#1085#1086#1084#1091' '#1087#1091#1090#1080
          Checked = True
          TabOrder = 5
          TabStop = True
          OnClick = Locally_RB_VIDEOClick
        end
        object Locally_E_VIDEO: TEdit
          Left = 16
          Top = 185
          Width = 465
          Height = 27
          Cursor = crHandPoint
          TabOrder = 6
          Text = 'Locally_E_VIDEO'
          OnChange = Locally_E_VIDEOChange
        end
      end
      object Additional_options_VIDEO: TGroupBox
        Left = 3
        Top = 330
        Width = 494
        Height = 215
        Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1086#1087#1094#1080#1080
        TabOrder = 2
        object Bevel1: TBevel
          Left = 40
          Top = 112
          Width = 370
          Height = 17
          Shape = bsTopLine
        end
        object Label1: TLabel
          Left = 16
          Top = 128
          Width = 32
          Height = 19
          Caption = #1058#1077#1084#1072
        end
        object Always_record_the_microphone_CH_VIDEO: TCheckBox
          Left = 16
          Top = 25
          Width = 225
          Height = 33
          Cursor = crHandPoint
          Caption = #1047#1072#1087#1080#1089#1099#1074#1072#1090#1100' '#1084#1080#1082#1088#1086#1092#1086#1085' '#1074#1089#1077#1075#1076#1072
          TabOrder = 0
          OnClick = Always_record_the_microphone_CH_VIDEOClick
        end
        object Record_audio_CH_VIDEO: TCheckBox
          Left = 16
          Top = 50
          Width = 129
          Height = 25
          Cursor = crHandPoint
          Caption = #1047#1072#1087#1080#1089#1099#1074#1072#1090#1100' '#1079#1074#1091#1082
          TabOrder = 1
          OnClick = Record_audio_CH_VIDEOClick
        end
        object Open_video_in_the_browser_CH_VIDEO: TCheckBox
          Left = 16
          Top = 75
          Width = 217
          Height = 25
          Cursor = crHandPoint
          Caption = #1054#1090#1082#1088#1099#1074#1072#1090#1100' '#1074#1080#1076#1077#1086' '#1074' '#1073#1088#1072#1091#1079#1077#1088#1077
          TabOrder = 2
          OnClick = Open_video_in_the_browser_CH_VIDEOClick
        end
        object Log_create_CH: TCheckBox
          Left = 283
          Top = 33
          Width = 145
          Height = 25
          Cursor = crHandPoint
          Caption = #1057#1086#1079#1076#1072#1090#1100' '#1051#1086#1075' '#1060#1072#1081#1083
          TabOrder = 3
          OnClick = Log_create_CHClick
        end
        object ComboBox1: TComboBox
          Left = 56
          Top = 128
          Width = 281
          Height = 27
          TabOrder = 4
          Text = 'ComboBox1'
        end
      end
    end
  end
  object Save_BUTTON: TButton
    Left = 80
    Top = 613
    Width = 90
    Height = 35
    Cursor = crHandPoint
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 1
    OnClick = Save_BUTTONClick
  end
  object Exit_BUTTON: TButton
    Left = 181
    Top = 613
    Width = 97
    Height = 35
    Cursor = crHandPoint
    Caption = #1054#1090#1084#1077#1085#1080#1090#1100
    TabOrder = 2
    OnClick = Exit_BUTTONClick
  end
  object By_default_BUTTON: TButton
    Left = 290
    Top = 613
    Width = 127
    Height = 35
    Cursor = crHandPoint
    Caption = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102
    TabOrder = 3
    OnClick = By_default_BUTTONClick
  end
end

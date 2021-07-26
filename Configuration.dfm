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
    ActivePage = General_setup
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 519
    object Screen_shot: TTabSheet
      Caption = #1057#1082#1088#1080#1085#1096#1086#1090
      ExplicitWidth = 511
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
        end
        object Screenshot_of_the_entire_screen_EHK: THotKey
          Left = 216
          Top = 25
          Width = 260
          Height = 27
          Cursor = crHandPoint
          HotKey = 0
          Modifiers = []
          TabOrder = 1
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
        end
        object Login_E: TEdit
          Left = 193
          Top = 95
          Width = 292
          Height = 27
          TabOrder = 1
          Text = 'Login_E'
        end
        object Password_E: TEdit
          Left = 193
          Top = 130
          Width = 151
          Height = 27
          PasswordChar = '*'
          TabOrder = 2
          Text = 'Password_E'
        end
        object Show_Password_CH: TCheckBox
          Left = 350
          Top = 130
          Width = 154
          Height = 25
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1087#1072#1088#1086#1083#1100
          TabOrder = 3
        end
        object Locally_E: TEdit
          Left = 16
          Top = 202
          Width = 465
          Height = 27
          TabOrder = 4
          Text = 'Locally_E'
        end
        object Server_RB: TRadioButton
          Left = 16
          Top = 25
          Width = 315
          Height = 17
          Cursor = crHandPoint
          Caption = #1053#1072' '#1089#1077#1088#1074#1077#1088', '#1082#1086#1087#1080#1088#1091#1102' '#1089#1089#1099#1083#1082#1091' '#1074' '#1073#1091#1092#1077#1088' '#1086#1073#1084#1077#1085#1072
          TabOrder = 5
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
        end
        object Show_magnifying_glass_CH: TCheckBox
          Left = 16
          Top = 45
          Width = 185
          Height = 25
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1099#1074#1072#1090#1100' '#1083#1091#1087#1091
          TabOrder = 1
        end
        object Open_screenshot_in_the_browser_CH: TCheckBox
          Left = 16
          Top = 65
          Width = 241
          Height = 33
          Cursor = crHandPoint
          Caption = #1054#1090#1082#1088#1099#1074#1072#1090#1100' '#1089#1082#1088#1080#1085#1096#1086#1090' '#1074' '#1073#1088#1072#1091#1079#1077#1088#1077
          TabOrder = 2
        end
      end
    end
    object Video: TTabSheet
      Caption = #1042#1080#1076#1077#1086
      ImageIndex = 1
      ExplicitWidth = 511
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
        end
        object Two_mouse_buttons_at_the_same_time_CH_VIDEO: TCheckBox
          Left = 16
          Top = 60
          Width = 177
          Height = 25
          Cursor = crHandPoint
          Caption = #1044#1074#1077' '#1082#1085#1086#1087#1082#1080' '#1084#1099#1096#1080' '#1086#1076#1085#1086#1074#1088#1077#1084#1077#1085#1085#1086
          TabOrder = 1
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
        end
        object Login_E_VIDEO: TEdit
          Left = 192
          Top = 96
          Width = 283
          Height = 27
          Cursor = crHandPoint
          TabOrder = 1
          Text = 'Login_E_VIDEO'
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
        end
        object Show_Password_CH_VIDEO: TCheckBox
          Left = 344
          Top = 130
          Width = 142
          Height = 33
          Cursor = crHandPoint
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1087#1072#1088#1086#1083#1100
          TabOrder = 3
        end
        object Server_RB_VIDEO: TRadioButton
          Left = 16
          Top = 30
          Width = 345
          Height = 24
          Cursor = crHandPoint
          Caption = #1053#1072' '#1089#1077#1088#1074#1077#1088', '#1082#1086#1087#1080#1088#1091#1102' '#1089#1089#1099#1083#1082#1091' '#1074' '#1073#1091#1092#1077#1088' '#1086#1073#1084#1077#1085#1072
          TabOrder = 4
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
        end
        object Locally_E_VIDEO: TEdit
          Left = 16
          Top = 185
          Width = 465
          Height = 27
          Cursor = crHandPoint
          TabOrder = 6
          Text = 'Locally_E_VIDEO'
        end
      end
      object Additional_options_VIDEO: TGroupBox
        Left = 3
        Top = 330
        Width = 494
        Height = 106
        Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1086#1087#1094#1080#1080
        TabOrder = 2
        object Always_record_the_microphone_CH: TCheckBox
          Left = 16
          Top = 25
          Width = 225
          Height = 33
          Cursor = crHandPoint
          Caption = #1047#1072#1087#1080#1089#1099#1074#1072#1090#1100' '#1084#1080#1082#1088#1086#1092#1086#1085' '#1074#1089#1077#1075#1076#1072
          TabOrder = 0
        end
        object Record_audio_CH: TCheckBox
          Left = 16
          Top = 50
          Width = 129
          Height = 25
          Cursor = crHandPoint
          Caption = #1047#1072#1087#1080#1089#1099#1074#1072#1090#1100' '#1079#1074#1091#1082
          TabOrder = 1
        end
        object Open_video_in_the_browser_CH: TCheckBox
          Left = 16
          Top = 75
          Width = 217
          Height = 25
          Cursor = crHandPoint
          Caption = #1054#1090#1082#1088#1099#1074#1072#1090#1100' '#1074#1080#1076#1077#1086' '#1074' '#1073#1088#1072#1091#1079#1077#1088#1077
          TabOrder = 2
        end
      end
    end
    object General_setup: TTabSheet
      Caption = #1043#1077#1085#1077#1088#1072#1083#1100#1085#1086#1077' '#1085#1072#1089#1090#1088#1086#1081#1082#1072
      ImageIndex = 2
      ExplicitWidth = 511
      object General_options: TGroupBox
        Left = 3
        Top = 3
        Width = 494
        Height = 134
        Caption = #1054#1089#1085#1086#1074#1085#1086#1081
        TabOrder = 0
        object Font_L: TLabel
          Left = 8
          Top = 25
          Width = 48
          Height = 19
          Caption = #1064#1088#1080#1092#1090
        end
        object Font_size_L: TLabel
          Left = 10
          Top = 60
          Width = 46
          Height = 19
          Caption = #1088#1072#1079#1084#1077#1088
        end
        object Them_L: TLabel
          Left = 16
          Top = 95
          Width = 32
          Height = 19
          Caption = #1058#1077#1084#1072
        end
        object Font_style_bevel: TBevel
          Left = 352
          Top = 16
          Width = 134
          Height = 89
          Shape = bsFrame
        end
        object Font_bold_CH: TCheckBox
          Left = 365
          Top = 25
          Width = 89
          Height = 25
          Cursor = crHandPoint
          Caption = #1046#1080#1088#1085#1099#1081
          TabOrder = 0
        end
        object Font_italic_CH: TCheckBox
          Left = 365
          Top = 45
          Width = 113
          Height = 22
          Cursor = crHandPoint
          Caption = #1050#1091#1088#1089#1080#1074#1085#1099#1081
          TabOrder = 1
        end
        object Font_underlined_CH: TCheckBox
          Left = 365
          Top = 65
          Width = 121
          Height = 26
          Cursor = crHandPoint
          Caption = #1055#1086#1076#1095#1077#1088#1082#1085#1091#1090#1099
          TabOrder = 2
        end
        object Font_E: TEdit
          Left = 96
          Top = 25
          Width = 193
          Height = 27
          ReadOnly = True
          TabOrder = 3
          Text = 'Font_E'
        end
        object Font_BUTTON: TButton
          Left = 288
          Top = 25
          Width = 33
          Height = 27
          Cursor = crHandPoint
          Caption = '+'
          TabOrder = 4
        end
        object Font_size_E: TEdit
          Left = 96
          Top = 60
          Width = 33
          Height = 27
          NumbersOnly = True
          ReadOnly = True
          TabOrder = 5
          Text = '8'
        end
        object Font_size_UP_BUTTON: TUpDown
          Left = 129
          Top = 60
          Width = 17
          Height = 27
          Associate = Font_size_E
          Min = 8
          Max = 20
          Position = 8
          TabOrder = 6
        end
        object Them_CM: TComboBox
          Left = 96
          Top = 95
          Width = 241
          Height = 27
          Cursor = crHandPoint
          ItemIndex = 0
          TabOrder = 7
          Text = 'Aqua Light State'
          OnChange = Them_CMChange
          Items.Strings = (
            'Aqua Light State'
            'Glow'
            'Iceberg Classico'
            'Lavender Classico'
            'Sky'
            'State Classico'
            'Table Dark'
            'Table Light'
            'Windows10'
            'Windows10 Blue'
            'Windows10 Dark'
            'Windows10 Green'
            'Windows10 Purple'
            'Windows10 StateGray'
            'Amakrits'
            'Amethyst Kamri'
            'Aqua Graphite'
            'Auric'
            'Carbon'
            'Charcoal Dark State'
            'Cobalt XEMedia'
            'Cyan Dusk'
            'Cyan Night'
            'Emerald Light State'
            'Golden Graphite'
            'Light'
            'Luna'
            'Metropolis UI Black'
            'Metropolis UI Blue'
            'Metropolis UI Dark'
            'Metropolis UI Green'
            'Obsidian'
            'Onyx Blue'
            'Ruby Graphite'
            'Sapphire Kamri'
            'Silver'
            'Smokey Quartz Kamri'
            'Turquoise Gray'
            'Glossy')
        end
      end
      object Shooting: TGroupBox
        Left = 3
        Top = 140
        Width = 494
        Height = 437
        Caption = #1055#1088#1080#1094#1077#1083
        TabOrder = 1
        object Long_lines: TGroupBox
          Left = 3
          Top = 24
          Width = 473
          Height = 129
          Caption = #1044#1083#1080#1085#1085#1099#1077' '#1083#1080#1085#1080#1080
          TabOrder = 0
          object type_line_L: TLabel
            Left = 8
            Top = 25
            Width = 27
            Height = 19
            Caption = #1058#1080#1087
          end
          object Long_line_RGB_L: TLabel
            Left = 8
            Top = 60
            Width = 71
            Height = 19
            Caption = #1062#1074#1077#1090' RGB:'
          end
          object Long_line_size_L: TLabel
            Left = 8
            Top = 95
            Width = 95
            Height = 19
            Caption = #1056#1072#1079#1084#1077#1088' '#1083#1080#1085#1080#1080
          end
          object Long_type_line_CM: TComboBox
            Left = 56
            Top = 25
            Width = 233
            Height = 27
            Cursor = crHandPoint
            ItemIndex = 1
            TabOrder = 1
            Text = #1058#1086#1095#1082#1072
            Items.Strings = (
              #1051#1080#1085#1080#1103
              #1058#1086#1095#1082#1072)
          end
          object Long_color_RED: TCSpinEdit
            Left = 85
            Top = 60
            Width = 60
            Height = 29
            MaxValue = 255
            TabOrder = 2
          end
          object Long_color_GREEN: TCSpinEdit
            Left = 150
            Top = 60
            Width = 60
            Height = 29
            MaxValue = 255
            TabOrder = 3
          end
          object Long_color_BLUE: TCSpinEdit
            Left = 215
            Top = 60
            Width = 60
            Height = 29
            MaxValue = 255
            TabOrder = 4
          end
          object Long_line_size_E: TEdit
            Left = 120
            Top = 95
            Width = 40
            Height = 27
            NumbersOnly = True
            TabOrder = 0
            Text = '1'
          end
          object Long_line_size_UP_BUTTON: TUpDown
            Left = 160
            Top = 95
            Width = 16
            Height = 27
            Associate = Long_line_size_E
            Min = 1
            Max = 9
            Position = 1
            TabOrder = 5
          end
          object Long_lines_color_BUTTON: TButtonColor
            Left = 280
            Top = 60
            Width = 49
            Height = 32
            Cursor = crHandPoint
            Caption = '+'
            TabOrder = 6
          end
        end
        object Short_lines: TGroupBox
          Left = 3
          Top = 159
          Width = 473
          Height = 130
          Caption = #1050#1086#1088#1086#1090#1082#1080#1077' '#1083#1080#1085#1080#1080
          TabOrder = 1
          object Short_lines_type_L: TLabel
            Left = 8
            Top = 25
            Width = 27
            Height = 19
            Caption = #1058#1080#1087
          end
          object Short_lines_color_L: TLabel
            Left = 8
            Top = 60
            Width = 71
            Height = 19
            Caption = #1062#1074#1077#1090' RGB:'
          end
          object Short_line_size_L: TLabel
            Left = 8
            Top = 95
            Width = 95
            Height = 19
            Caption = #1056#1072#1079#1084#1077#1088' '#1083#1080#1085#1080#1080
          end
          object Short_type_line_CM: TComboBox
            Left = 56
            Top = 25
            Width = 233
            Height = 27
            Cursor = crHandPoint
            TabOrder = 0
            Text = #1051#1080#1085#1080#1103
            Items.Strings = (
              #1051#1080#1085#1080#1103
              #1058#1086#1095#1082#1072)
          end
          object Short_Color_RED: TCSpinEdit
            Left = 85
            Top = 60
            Width = 60
            Height = 29
            TabOrder = 1
          end
          object Short_Color_GREEN: TCSpinEdit
            Left = 150
            Top = 60
            Width = 60
            Height = 29
            TabOrder = 2
          end
          object Short_Color_BLUE: TCSpinEdit
            Left = 215
            Top = 60
            Width = 60
            Height = 29
            TabOrder = 3
          end
          object Short_lines_color_BUTTON: TButtonColor
            Left = 280
            Top = 60
            Width = 49
            Height = 33
            Cursor = crHandPoint
            Caption = '+'
            TabOrder = 4
          end
          object Short_line_size_E: TEdit
            Left = 120
            Top = 95
            Width = 40
            Height = 27
            NumbersOnly = True
            TabOrder = 5
            Text = '0'
          end
          object Short_line_size_BUTTON: TUpDown
            Left = 160
            Top = 95
            Width = 16
            Height = 27
            Associate = Short_line_size_E
            TabOrder = 6
          end
        end
        object Other: TGroupBox
          Left = 3
          Top = 295
          Width = 473
          Height = 122
          Caption = 'Other'
          TabOrder = 2
          object Indent_L: TLabel
            Left = 8
            Top = 25
            Width = 113
            Height = 19
            Caption = #1054#1090#1089#1090#1091#1087' '#1086#1090' '#1084#1099#1096#1080
          end
          object Magnifier_L: TLabel
            Left = 13
            Top = 60
            Width = 89
            Height = 19
            Caption = #1056#1072#1079#1084#1077#1088' '#1051#1091#1087#1099
          end
          object Indent_E: TEdit
            Left = 139
            Top = 25
            Width = 60
            Height = 27
            NumbersOnly = True
            TabOrder = 0
            Text = '0'
          end
          object Magnifier_E: TEdit
            Left = 139
            Top = 60
            Width = 60
            Height = 27
            NumbersOnly = True
            TabOrder = 1
            Text = '0'
          end
          object Indent_E_BUTTON: TUpDown
            Left = 199
            Top = 25
            Width = 16
            Height = 27
            Associate = Indent_E
            TabOrder = 2
          end
          object Magnifier_E_BUTTON: TUpDown
            Left = 199
            Top = 60
            Width = 16
            Height = 27
            Associate = Magnifier_E
            TabOrder = 3
          end
          object Log_create_CH: TCheckBox
            Left = 256
            Top = 25
            Width = 145
            Height = 25
            Cursor = crHandPoint
            Caption = #1057#1086#1079#1076#1072#1090#1100' '#1051#1086#1075' '#1060#1072#1081#1083
            TabOrder = 4
          end
        end
      end
    end
  end
  object Save_BUTTON: TButton
    Left = 80
    Top = 613
    Width = 90
    Height = 35
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 1
  end
  object Exit_BUTTON: TButton
    Left = 181
    Top = 613
    Width = 97
    Height = 35
    Caption = #1054#1090#1084#1077#1085#1080#1090#1100
    TabOrder = 2
  end
  object By_default_BUTTON: TButton
    Left = 290
    Top = 613
    Width = 127
    Height = 35
    Caption = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102
    TabOrder = 3
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 428
    Top = 294
  end
  object ColorDialog1: TColorDialog
    Color = 3598083
    CustomColors.Strings = (
      'ColorA=36E703'
      'ColorB=000000'
      'ColorC=FFFFFFFF'
      'ColorD=FFFFFFFF'
      'ColorE=FFFFFFFF'
      'ColorF=FFFFFFFF'
      'ColorG=FFFFFFFF'
      'ColorH=FFFFFFFF'
      'ColorI=000000'
      'ColorJ=FFFFFFFF'
      'ColorK=FFFFFFFF'
      'ColorL=FFFFFFFF'
      'ColorM=FFFFFFFF'
      'ColorN=FFFFFFFF'
      'ColorO=FFFFFFFF'
      'ColorP=FFFFFFFF')
    Left = 415
    Top = 189
  end
end

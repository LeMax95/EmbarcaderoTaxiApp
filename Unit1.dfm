object DataModule1: TDataModule1
  Height = 558
  Width = 907
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=BDTAXI'
      'DriverID=ODBC')
    Connected = True
    LoginPrompt = False
    Left = 64
    Top = 24
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM OPERATOR')
    Left = 176
    Top = 24
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 248
    Top = 24
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from STRADA')
    Left = 176
    Top = 88
  end
  object DataSource2: TDataSource
    DataSet = FDQuery2
    Left = 248
    Top = 88
  end
  object FDQuery3: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from caroserie')
    Left = 176
    Top = 160
  end
  object DataSource3: TDataSource
    DataSet = FDQuery3
    Left = 248
    Top = 160
  end
  object FDQuery4: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from CULOAREA')
    Left = 176
    Top = 240
  end
  object DataSource4: TDataSource
    DataSet = FDQuery4
    Left = 248
    Top = 240
  end
  object FDQuery5: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from MARCA')
    Left = 176
    Top = 320
  end
  object DataSource5: TDataSource
    DataSet = FDQuery5
    Left = 248
    Top = 320
  end
  object FDQuery6: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'select * from MODEL WHERE MARCA_ID=:MARCA_ID')
    Left = 176
    Top = 392
    ParamData = <
      item
        Name = 'MARCA_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object DataSource6: TDataSource
    DataSet = FDQuery6
    Left = 248
    Top = 392
  end
  object FDQuery7: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'SELECT * FROM AUTOMOBIL A INNER JOIN CAROSERIE C ON A.CAROSERIE_' +
        'ID=C.CAROSERIE_ID '
      
        '                          INNER JOIN MODEL M ON M.MODEL_ID=A.MOD' +
        'EL_ID'
      #9#9#9#9#9#9'  INNER JOIN MARCA MM ON MM.MARCA_ID=M.MARCA_ID'
      #9#9#9#9#9#9'  INNER JOIN TIP ON TIP.TIP_ID=A.TIP_ID'
      #9#9#9#9#9#9'  INNER JOIN CULOAREA CC ON CC.CULOARE_ID=A.CULOARE_ID')
    Left = 176
    Top = 456
  end
  object DataSource7: TDataSource
    DataSet = FDQuery7
    Left = 248
    Top = 456
  end
  object FDQuery8: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM TIP')
    Left = 368
    Top = 24
  end
  object DataSource8: TDataSource
    DataSet = FDQuery8
    Left = 440
    Top = 24
  end
  object INSAUTO: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'INSERT INTO AUTOMOBIL(MODEL_ID,CULOARE_ID,CAROSERIE_ID,TIP_ID,NR' +
        '_AUTO,MOTOR,COMBUSTIBIL)'
      
        'VALUES(:MODEL_ID,:CULOARE_ID,:CAROSERIE_ID,:TIP_ID,:NR_AUTO,:MOT' +
        'OR,:COMBUSTIBIL)')
    Left = 368
    Top = 88
    ParamData = <
      item
        Name = 'MODEL_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CULOARE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CAROSERIE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'TIP_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'NR_AUTO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'MOTOR'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'COMBUSTIBIL'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end>
  end
end

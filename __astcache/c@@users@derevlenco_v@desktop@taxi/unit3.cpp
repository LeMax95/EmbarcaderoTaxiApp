//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int MARCA_ID, MODEL_ID, TIP_ID, CULOAREA_ID, CAROSERIE_ID;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SpeedButton1Click(TObject *Sender)
{
 if((Edit1->Text=="1")&&(Edit2->Text=="1"))
  {

	DataModule1->FDQuery1->Close();
	DataModule1->FDQuery1->Open();

	DataModule1->FDQuery2->Close();
	DataModule1->FDQuery2->Open();

	TabSheet1->TabVisible=false;//autentificarea
	TabSheet3->TabVisible=true;//comanda
  }
  else
  {
   Edit2->Clear();
   ShowMessage("Autentificare esuata");
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormShow(TObject *Sender)
{
TabSheet2->TabVisible=false;
TabSheet3->TabVisible=false;
TabSheet4->TabVisible=false;
TabSheet5->TabVisible=false;
TabSheet6->TabVisible=false;
TabSheet7->TabVisible=false;
TabSheet8->TabVisible=false;
TabSheet9->TabVisible=false;
TabSheet10->TabVisible=false;
TabSheet11->TabVisible=false;
TabSheet12->TabVisible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Panel6Resize(TObject *Sender)
{
 int w=Panel6->Width;
 int a=DBGrid1->Columns->Items[0]->Width+DBGrid1->Columns->Items[1]->Width+DBGrid1->Columns->Items[2]->Width;
 DBGrid1->Columns->Items[3]->Width=w-a-45;

 int b=DBGrid2->Columns->Items[0]->Width+DBGrid2->Columns->Items[1]->Width;
 DBGrid2->Columns->Items[2]->Width=w-b-45;

  int c=DBGrid3->Columns->Items[0]->Width+DBGrid3->Columns->Items[1]->Width;
 DBGrid3->Columns->Items[2]->Width=w-c-45;
 DBGrid4->Columns->Items[2]->Width=w-c-45;
 DBGrid5->Columns->Items[2]->Width=w-c-45;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SpeedButton4Click(TObject *Sender)
{
	DataModule1->FDQuery1->Close();
	DataModule1->FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SpeedButton20Click(TObject *Sender)
{
  DataModule1->FDQuery5->Close();
  DataModule1->FDQuery5->Open();
  TabSheet5->TabVisible=true;
  TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton11Click(TObject *Sender)
{
 Edit3->Text=DataModule1->FDQuery5->FieldByName("DENUMIRE")->AsString;
 Edit9->Text=DataModule1->FDQuery5->FieldByName("DENUMIRE")->AsString;
 MARCA_ID=DataModule1->FDQuery5->FieldByName("MARCA_ID")->AsInteger;
 TabSheet5->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton21Click(TObject *Sender)
{
  DataModule1->FDQuery6->Close();
  DataModule1->FDQuery6->ParamByName("marca_id")->AsInteger=MARCA_ID;
  DataModule1->FDQuery6->Open();
  TabSheet4->TabVisible=true;
  TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton13Click(TObject *Sender)
{
 Edit4->Text=DataModule1->FDQuery6->FieldByName("DENUMIRE")->AsString;
 Edit10->Text=DataModule1->FDQuery6->FieldByName("DENUMIRE")->AsString;
 MODEL_ID=DataModule1->FDQuery6->FieldByName("MODEL_ID")->AsInteger;
 TabSheet4->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton14Click(TObject *Sender)
{
 TabSheet4->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton22Click(TObject *Sender)
{
  DataModule1->FDQuery3->Close();
  DataModule1->FDQuery3->Open();
  TabSheet7->TabVisible=true;
  TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton7Click(TObject *Sender)
{
 Edit5->Text=DataModule1->FDQuery3->FieldByName("TIP_CAROSERIE")->AsString;
 Edit11->Text=DataModule1->FDQuery3->FieldByName("TIP_CAROSERIE")->AsString;
 CAROSERIE_ID=DataModule1->FDQuery3->FieldByName("CAROSERIE_ID")->AsInteger;
 TabSheet7->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton8Click(TObject *Sender)
{
 TabSheet7->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton23Click(TObject *Sender)
{
  DataModule1->FDQuery4->Close();
  DataModule1->FDQuery4->Open();
  TabSheet6->TabVisible=true;
  TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton9Click(TObject *Sender)
{
 Edit6->Text=DataModule1->FDQuery4->FieldByName("NUME_CULOARE")->AsString;
 Edit12->Text=DataModule1->FDQuery4->FieldByName("NUME_CULOARE")->AsString;
 CULOAREA_ID=DataModule1->FDQuery4->FieldByName("CULOARE_ID")->AsInteger;
 TabSheet6->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton10Click(TObject *Sender)
{
 TabSheet6->TabVisible=false;
 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SpeedButton24Click(TObject *Sender)
{
	if((Edit3->Text!="")&&(Edit4->Text!="") &&(Edit5->Text!="")&&(Edit6->Text!="") &&(Edit7->Text!="")&&(Edit8->Text!=""))
	 {
	   DataModule1->INSAUTO->Close();
	   DataModule1->INSAUTO->ParamByName("MODEL_ID")->AsInteger=MODEL_ID;
	   DataModule1->INSAUTO->ParamByName("CULOARE_ID")->AsInteger=CULOAREA_ID;
	   DataModule1->INSAUTO->ParamByName("CAROSERIE_ID")->AsInteger=CAROSERIE_ID;
	   DataModule1->INSAUTO->ParamByName("TIP_ID")->AsInteger=1;//TIP_ID;
	   DataModule1->INSAUTO->ParamByName("NR_AUTO")->AsString=Edit8->Text;
	   DataModule1->INSAUTO->ParamByName("MOTOR")->AsString=Edit7->Text;
	   DataModule1->INSAUTO->ParamByName("COMBUSTIBIL")->AsString=ComboBox1->Text;
	   DataModule1->INSAUTO->ExecSQL();

	   DataModule1->FDQuery7->Close();
	   DataModule1->FDQuery7->Open();

	   Edit3->Text="";
	   Edit4->Text="";
	   Edit5->Text="";
	   Edit6->Text="";
	   Edit7->Text="";
	   Edit8->Text="";
       ComboBox1->Text="";
	 }
	 else
	 {
	 ShowMessage("Nu sunt introduse toate cimpurile");
	 }
}
//---------------------------------------------------------------------------


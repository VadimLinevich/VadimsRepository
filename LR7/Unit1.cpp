//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
RatingList a;
RatingList c;
StudentList b;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(FileOpenDialog1->Execute())//проверка но открытие файла
	{
		TFileStream *tfile= new TFileStream(FileOpenDialog1->FileName,fmOpenReadWrite); //открываю файл и записываю из файла в список
		TStringList *ts = new TStringList();
		ts->LoadFromStream(tfile);
		for (int i = 0, j = 0; j < (ts->Count)/4; i+=4, j++)
		{
			b.AddNode(ts->Strings[i], ts->Strings[i+1], ts->Strings[i+2], ts->Strings[i+3]);
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Rating *temp3 = new Rating;
	temp3 = a.ShowHead();
	if (temp3 == NULL)
	{


		Student *temp = new Student;
		temp = b.ShowHead();
		int n;
		n = 1;
		while(temp != NULL)//добавляю данные в другой список
		{
			a.AddNode(b.Average(temp->mark), 0, 0, temp->studentlastname, n, temp->group, temp->course);
			temp = temp->next2;
			if (temp != NULL)
			{
                n = n + 1;
			}
		}
		Rating* rate = new Rating[n];//создаю массив для сортировки списка по среднему баллу
		Rating *temp2 = new Rating;
		temp = b.ShowHead();
		temp2 = a.ShowHead();
		int z = 0;
		while (temp != NULL)//заполняю массив
		{
			rate[z].averagescore = temp2->averagescore;
			rate[z].grow = temp2->grow;
			rate[z].change = temp2->change;
			rate[z].studentlastname = temp2->studentlastname;
			rate[z].number = temp2->number;
			rate[z].group = temp2->group;
			rate[z].course = temp2->course;
			z = z + 1;
			temp = temp->next2;
			temp2 = temp2->next;
		}
		Rating temp3;
		for (int i = 0; i < n - 1; i++)//сортирую массив
		{
			for (int j = i + 1; j < n; j++)
			{
				if (rate[i].averagescore < rate[j].averagescore)
				{
					temp3 = rate[i];
					rate[i] = rate[j];
					rate[j] = temp3;
				}
			}
		}
		a.DeleteAll(); // удаляю все узлы из списка
		temp = b.ShowHead();
		z = 0;
		n = 1;
		while (temp != NULL)//создаю отсортированный список
		{
			a.AddNode(rate[z].averagescore, rate[z].grow, rate[z].change, rate[z].studentlastname, n, rate[z].group, rate[z].course);
			z = z + 1;
			n = n + 1;
			temp = temp->next2;
		}
	}
	Memo1->Clear();
	a.print();//вывожу  список
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Memo1->Clear();
	a.printcourse();//вывожу список по курсу
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Memo1->Clear();
	a.printgroup();//вывожу список по группе
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)//кнопка добавления в список
{
	Memo1->Clear();
	Rating *temp4 = new Rating;
	temp4 = a.ShowHead();
	int n;
	n = 1;
	while(temp4 != NULL)//считаю размер списка
	{
		n = n + 1;
		temp4 = temp4->next;
	}
	a.AddNode(StrToFloat(Edit3->Text), 0, 0, Edit4->Text, n, Edit5->Text, Edit6->Text);//добавляю узел
	b.AddNode("a", "a", "a", "a");
	Student *temp = new Student;
		temp = b.ShowHead();
		Rating* rate = new Rating[n];//создаю массив для сортировки списка по среднему баллу
		Rating *temp2 = new Rating;
		temp = b.ShowHead();
		temp2 = a.ShowHead();
		int z = 0;
		while (temp != NULL)
		{
			rate[z].averagescore = temp2->averagescore;//заполняю массив
			rate[z].grow = temp2->grow;
			rate[z].change = temp2->number;
			rate[z].studentlastname = temp2->studentlastname;
			rate[z].number = temp2->number;
			rate[z].group = temp2->group;
			rate[z].course = temp2->course;
			z = z + 1;
			temp = temp->next2;
			temp2 = temp2->next;
		}
		Rating temp3;
		for (int i = 0; i < n - 1; i++) //сортирую массив
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (rate[j].averagescore < rate[j+1].averagescore)
				{
					temp3 = rate[j];
					rate[j] = rate[j+1];
					rate[j+1] = temp3;
				}
			}
		}
		a.DeleteAll(); // удаляю все узлы из списка
		temp = b.ShowHead();
		z = 0;
		n = 1;
		while (temp != NULL) //создаю отсортированный список
		{
			if (rate[z].averagescore == StrToFloat(Edit3->Text)  && rate[z].studentlastname == Edit4->Text && rate[z].group == Edit5->Text && rate[z].course == Edit5->Text )
			{
				a.AddNode(rate[z].averagescore, rate[z].grow, 0, rate[z].studentlastname, n, rate[z].group, rate[z].course);
			}
			else
			{
				a.AddNode(rate[z].averagescore, rate[z].grow, rate[z].change - n, rate[z].studentlastname, n, rate[z].group, rate[z].course);
			}
			z = z + 1;
			n = n + 1;
			temp = temp->next2;
		}
	a.print();//вывожу список
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button2Click(TObject *Sender)
{
	FileSaveDialog1->Execute();
	Memo1->Lines->SaveToFile(FileSaveDialog1->FileName);//сохраняю в файл
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

class Rating//класс к которм хранятся даннные рейтинга
{
	public:
	float averagescore;
	float grow;
	int change;
	String studentlastname;
	int number;
	String group;
	String course;

    Rating *next;
	Rating *prev;
};
class RatingList//двухсвязный список рейтинга
{
	protected:
	Rating *head, *tail;
	public:
	RatingList()
	{
		head = NULL;
		tail = NULL;
	}
	public:
	void AddNode(float Averagescore, float Grow, int Change, String Studentlastname, int Number, String Group, String Course)//метод добавления узла
	{
		Rating *temp = new Rating;
		temp->next = NULL;
		temp->averagescore = Averagescore;
		temp->grow = Grow;
		temp->change = Change;
		temp->studentlastname = Studentlastname;
		temp->number = Number;
		temp->group = Group;
		temp->course = Course;
		if (head != NULL)
		{
			temp->prev = tail;
			tail->next = temp;
			tail = temp;
		}
		else
		{
			if (head == NULL)
			{
				temp->prev = NULL;
				tail = temp;
				head = tail;
			}
		}
	}
	void print()//метод вывода списка
	{
		Rating *temp = new Rating;
		temp = head;
		Form1->Memo1->Lines->Add("N     lastname     course     group             average       position change");
		while(temp != NULL)
		{
			Form1->Memo1->Lines->Add(IntToStr(temp->number) + "     " + temp->studentlastname + "           " + temp->course + "            " + temp->group + "          " + FloatToStr(floor(temp->averagescore * 100) / 100) + "                          " + IntToStr(temp->change));
			temp = temp->next;
		}
	}
	Rating *ShowHead()
	{
		return head;
	}
	void DeleteAll()//удаление всех узлов из списка
	{
		if (head == NULL)
		{
			return ;
		}
			Rating *temp = new Rating;
			while (head != NULL)
			{
				temp = head;
				head = head->next;
				delete temp;
			}
	}
	void printcourse()//вывод списка по курсу
	{
        Rating *temp = new Rating;
		temp = head;
		int n = 1;
		while(temp != NULL)
		{
			if (temp->course == Form1->Edit1->Text)
			{
				Form1->Memo1->Lines->Add(IntToStr(n) + "     " + temp->studentlastname + "           " + temp->course + "            " + temp->group + "          " + FloatToStr(floor(temp->averagescore * 100) / 100) + "                          " + "0");
				n++;
			}
			temp = temp->next;
		}
	}
	void printgroup()//вывод списка по группе
	{
		Rating *temp = new Rating;
		temp = head;
		int n = 1;
		while(temp != NULL)
		{
			if (temp->group == Form1->Edit2->Text)
			{
				Form1->Memo1->Lines->Add(IntToStr(n) + "     " + temp->studentlastname + "           " + temp->course + "            " + temp->group + "          " + FloatToStr(floor(temp->averagescore * 100) / 100) + "                          " + "0");
				n++;
			}
			temp = temp->next;
		}
	}
};


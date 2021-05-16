//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#endif

class Student//класс в котором хранятся данные студента
{
	public:
    String mark;
	String group;
	String course;
	String studentlastname;

	Student *next2;
	Student *prev2;
};
class StudentList//двухсвязный список студентов
{
	protected:
	Student *head, *tail;
	public:
	StudentList()
	{
		head = NULL;
		tail = NULL;
	}
	public:
	void AddNode(String Mark, String Group, String Course, String Studentlastname)//метод добавления узла
	{
		Student *temp = new Student;
		temp->next2 = NULL;
		temp->mark = Mark;
		temp->group = Group;
		temp->course = Course;
		temp->studentlastname = Studentlastname;
		if (head != NULL)
		{
			temp->prev2 = tail;
			tail->next2 = temp;
			tail = temp;
		}
		else
		{
			if (head == NULL)
			{
				temp->prev2 = NULL;
				tail = temp;
				head = tail;
			}
		}
	}
	float Average(String str)//метод который ищет средний балл
	{
		int n;
		n = 0;
		for (int i = 1; i <= str.Length(); i++)
		{
			if (isdigit(str[i]))
			{
				n = n + 1;
			}
		}
		int *ave = new int[n];
		for (int i = 1, j = 0; i <= str.Length(); i++)
		{
			if (isdigit(str[i]))
			{
				ave[j] = StrToInt(str[i]);
				j = j + 1;
			}
		}
		float middle;
		for (int i = 0; i < n; i++)
		{
			middle = middle + ave[i];
		}
		middle = middle / n;
		return middle;
	}
	Student *ShowHead()
	{
        return head;
	}

};

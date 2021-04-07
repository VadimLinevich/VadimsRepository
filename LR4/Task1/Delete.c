#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <conio.h>
#include <string.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	char str[100], temp;
	int n, k;
	n = 0;
	fgets(str, 100, stdin);
	for (int i = 0; i < strlen(str); i++)
	{
		n = 0;
		if (str[i] == '(') //Если символ равен скобке то начинаем удаление со следующего элемента
		{
            i = i + 1;
			while (str[i] != ')') //Удаление до закрытия скобки
			{
				k = i;
				while (str[k] != ' ') //Проверка на закрытие скобки
				{
					k = k + 1;
					if (str[k] == ' ' && str[k - 1] != ')')
					{
						printf("no )\n");
						n = 1;
						break;
					}
				}
				if (n == 1)
				{
					break;
				}
				for (int j = i; j < strlen(str); j++)
				{
					temp = str[j+1];
					str[j+1] = str[j];
					str[j] = temp;
				}
			}
			if (str[i] == ' ') //Удаление лишнего пробела
			{
				for (int j = i; j < strlen(str); j++)
				{
					temp = str[j+1];
					str[j+1] = str[j];
					str[j] = temp;
				}
			}
		}
	}
	puts(str);
	getch();
	return 0;
}
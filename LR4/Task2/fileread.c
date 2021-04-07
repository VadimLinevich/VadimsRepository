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
	char buffer[100];
	int countsymb, count, j;
	j = 0;
	countsymb = 0;
	count = 0;
	FILE *fp;
	fp = fopen("C:\\C files\\LR4.txt", "r");
	if(!fp)
	{
		return 0;
	}
	while(fgets(buffer, 100, fp) != NULL)
	{
		count = 0;
		countsymb = 0;
        j = 0;//переменная с которой будет начинать записываться врное слово   
		for (int i = 0; i < strlen(buffer); i++) //Считываем строку посимвольно
		{


		if (buffer[i] == ' ')
		{
			if (countsymb != count)
			{
				j = j + count + 1;//прыжок на другое слово
			}
			if (countsymb == count)
			{
				while (buffer[j] != ' ')
				{
					printf("%c", buffer[j]);
					j = j + 1;
				}
				if (buffer[j] == ' ')
				{
				   printf("%c", buffer[j]);
				}
				j = j + 1;
			}
			countsymb = 0;
			count = 0;
		}
		if (buffer[i] == 'A' || buffer[i] == 'B' || buffer[i] == 'E' || buffer[i] == 'K' || buffer[i] == 'M' || buffer[i] == 'H' || buffer[i] == 'O' || buffer[i] == 'P' || buffer[i] == 'C' || buffer[i] == 'T' || buffer[i] == 'X' || buffer[i] == '.')
		{
			countsymb = countsymb + 1;//считаем количество букв которые нам подходят
		}
		if (buffer[i] != ' ')
		{
			count = count + 1;//считаем общее количество букв в слове
		}
		}
	}
	getch();
	return 0;
}
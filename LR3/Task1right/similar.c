#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <malloc.h>
#include <conio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[])
{
	int **a, **b;
	int n, count, temp, y, o;
	printf("Enter n = ");
	scanf("%d", &n);
	a = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(n * sizeof(int));
		for (int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	b = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		b[i] = (int*)malloc(n * sizeof(int));
	}
	for (int f = 0; f < n; f++)
	{
		for (int g = 0; g < n; g++)
		{
			b[f][g] = a[f][g];
		}
	}
	o = 0;
	printf("\n");
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	y = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int f = 0; f < n; f++)
		{
			for (int g = 0; g < n; g++)
			{
				a[f][g] = b[f][g];
			}
		}
		count = 0;
		for (int j = 0; j < n; j++)
		{
			for (int z = y; z < n; z++)
			{
				for (int k = 0; k < n; k++)
				{
					if (a[z][k] == a[i][j])//Проверяем строки на похожесть
					{
						a[z][k] = 0;
						count = count + 1;
						break;
					}
				}
				if (count != n)
				{
					if (j == n - 1)//Если строки непохожи то переходим на срвнение с другой строкой
					{
						j = -1;
						y = y + 1;
						for (int f = 0; f < n; f++)
						{
							for (int g = 0; g < n; g++)
							{
								a[f][g] = b[f][g];
							}
						}
						count = 0;
						if (y == n)//если сранимаемая строка последняя то переходим сравнивать 2 строку с остальными, если массив нужного размера то 3 и т.п.
						{
							j = n;
							y = i + 2;
							break;
						}
						break;
					}
					else
					{
						break;
					}
				}
				if (count == n)
				{
					if (j == n - 1)//Аналогично с тем когда строки непохожи
					{
						j = -1;
						y = y + 1;
						for (int f = 0; f < n; f++)
						{
							for (int g = 0; g < n; g++)
							{
								a[f][g] = b[f][g];
							}
						}
						count = 0;
						printf("strings %d and %d similar\n", i + 1, z + 1);
						if (y == n)
						{
							j = n;
							y = i + 2;
							for (int f = 0; f < n; f++)
							{
								for (int g = 0; g < n; g++)
								{
									a[f][g] = b[f][g];
								}
							}
							break;
						}
						break;
					}
					else
					{
					for (int f = 0; f < n; f++)
					{
						for (int g = 0; g < n; g++)
						{
							a[f][g] = b[f][g];
						}
					}
					printf("strings %d and %d similar\n", i + 1, z + 1);
					break;
					}
				}
			}
		}
	}
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
    for (int i = 0; i < n; i++)
    {
        free(b[i]);
    }
    free(b);
	getch();
	return 0;
}
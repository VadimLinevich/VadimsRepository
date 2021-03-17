#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <conio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	int intvalue, ost, n, k, z;
	n = 0;
	printf("Enter integer value ");
	scanf("%d", &intvalue);
	//printf("%d", intvalue);
	ost = intvalue;
	if (ost - 10000 > 0)
		{
			n = n + 1;
		}
		if (ost - 5000 > 0)
		{
			n = n + 1;
		}
		if (ost - 1000 > 0)
		{
			n = n + 1;
		}
		if (ost - 500 > 0)
		{
			n = n + 1;
		}
		if (ost - 100 > 0)
		{
			n = n + 1;
		}
		if (ost - 50 > 0)
		{
			n = n + 1;
		}
		if (ost - 10 > 0)
		{
			n = n + 1;
		}
		if (ost - 5 > 0)
		{
			n = n + 1;
		}
		if (ost - 1 > 0)
		{
			n = n + 1;
		}
	//printf("\n%d", n);
	for (int i = 0; i < n; i++)
	{
		k = intvalue % 10000;
		z = intvalue / 10000;
		if (k >= 0 && k != intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("X");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("X");


				}
				intvalue = k;
				continue;
			}
			printf("X");
			intvalue = k;
			continue;
		}
		k = intvalue % 5000;
		z = intvalue / 5000;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("V");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("V");

				}
				intvalue = k;
				continue;
			}
			printf("V");
			intvalue = k;
			continue;
		}
		k = intvalue % 1000;
		z = intvalue / 1000;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("M");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("M");

				}
				intvalue = k;
				continue;
			}
			printf("M");
			intvalue = k;
			continue;
		}
		k = intvalue % 500;
		z = intvalue / 500;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("D");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("D");

				}
				intvalue = k;
				continue;
			}
			printf("D");
			intvalue = k;
			continue;
		}
		k = intvalue % 100;
		z = intvalue / 100;
		if (k >= 0 && k!= intvalue)
		{
			if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("C");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("C");

				}
				intvalue = k;
				continue;
			}
			printf("C");
			intvalue = k;
			continue;
		}
		k = intvalue % 50;
		z = intvalue / 50;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("L");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("L");

				}
				intvalue = k;
				continue;
			}
			printf("L");
			intvalue = k;
			continue;
		}
		k = intvalue % 10;
		z = intvalue / 10;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("x");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("x");

				}
				intvalue = k;
				continue;
			}
			printf("x");
			intvalue = k;
			continue;
		}
		k = intvalue % 5;
		z = intvalue / 5;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("v");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("v");

				}
				intvalue = k;
				continue;
			}
			printf("v");
			intvalue = k;
			continue;
		}
		k = intvalue % 1;
		z = intvalue / 1;
		if (k >= 0 && k!= intvalue)
		{
            if (z > 1)
			{
				for (int j = 0; j < z; j++)
				{
					printf("I");

				}
				intvalue = k;
				continue;
			}
			if (k == 0)
			{
				for (int j = 0; j < z; j++)
				{
					printf("I");

				}
                intvalue = k;
				continue;
			}
			printf("I");
			intvalue = k;
			continue;
		}
	}
	getch();
	return 0;
}
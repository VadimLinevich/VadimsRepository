#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <conio.h>
#include <math.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
double Fact(double a)//Функция факториала
{
	if (a <= 1)
	{
		return 1;
	}
	else
	{
		return a * Fact(a - 1);
	}
}
void IterativeSin(double x)
{
	printf("sin(x) = %f", sin(x));
}
double IterativeDecomposition(double x, double n)
{
	double b;
	b = 0;
	for (int i = 1; i <= n; i++)
	{
		b = b + pow(-1, i - 1) * pow(x, 2 * i - 1) / Fact(2 * i - 1);
	}
	return b;
}
void Error(double e, double x)//функция считающая при каком n погрешность будет меньше чем заданная
{
	for (double i = 1; i < 100; i++)
	{
		if (e > fabs(sin(x) - IterativeDecomposition(x, i)))
		{
			printf("n = %0.lf", i);
			break;
		}
	}
}
double  recursion(double x, double n)
{
	if (n == 1)
	{
		return x;
	}
	else
	{
		return recursion(x, n - 1) + pow(-1, n - 1) * pow(x, 2 * n - 1) / Fact(2 * n - 1);
    }
}
void ErrorRecursion(double e, double x)//функция считающая при каком n погрешность будет меньше чем заданная
{
	for (double i = 1; i < 100; i++)
	{
		if (e > fabs(sin(x) - recursion(x, i)))
		{
			printf("n = %0.lf", i);
			break;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	double x, n;
	double e;
	printf("1) Iterative\n");
	printf("Enter x ");
	scanf("%lf", &x);
	printf("Enter n ");
	scanf("%lf", &n);
	IterativeSin(x);
	printf("\n");
	printf("%lf", IterativeDecomposition(x, n));
	printf("\nEnter e ");
	scanf("%lf", &e);
	Error(e, x);
	printf("\n2) Recursion\n");
	printf("%lf\n", recursion(x, n));
	ErrorRecursion(e, x);
	getch();
	return 0;
}
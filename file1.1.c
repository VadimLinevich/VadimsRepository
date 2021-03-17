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
void SetPolinomial1(int *a, int *b, int *c, int *d)
{
	printf("\nenter a ");
	scanf("%d", &(*a));
	printf("enter b ");
	scanf("%d", &(*b));
	printf("enter c ");
	scanf("%d", &(*c));
	printf("enter d ");
	scanf("%d", &(*d));
}
void SetPolinomial2(int *a2, int *b2, int *c2, int *d2)
{
	printf("\nenter a2 ");
	scanf("%d", &(*a2));
	printf("enter b2 ");
	scanf("%d", &(*b2));
	printf("enter c2 ");
	scanf("%d", &(*c2));
	printf("enter d2 ");
	scanf("%d", &(*d2));
}
void GetPolinomial(int a, int b, int c, int d)
{
	if (a == 0)
	{

	}
	else
	{
	if (a != 1)
	{
		printf("%d", a);
	}
	if (b > 0)
	{
		printf("x^3+");
	}
	else
	{
		printf("x^3");
	}
	}
	if (b == 0)
	{
		if (c > 0)
		{
			printf("+");
		}
	}
	else
	{
	if (b != 1)
	{
		printf("%d", b);
	}
	if (c > 0)
	{
		printf("x^2+");
	}
	else
	{
		printf("x^2");
	}
	}
	if (c == 0)
	{

	}
	else
	{
	if (c != 1)
	{
		printf("%d", c);
	}
	if (d > 0)
	{
		printf("x");
	}
	else
	{
		printf("x");
	}
	}
	if (d == 0)
	{

	}
	else
	{
		if (d > 0)
		{
			if (a!=0 || b!=0 || c != 0)
			{
				printf("+");
			}
			printf("%d", d);
		}
		else
		{
		printf("%d", d);
		}
	}
}
void PolinomialSum(int a, int b, int c, int d, int a1, int b1, int c1, int d1)
{
	int a3, b3, c3, d3;
	a3 = a + a1;
	b3 = b + b1;
	c3 = c + c1;
	d3 = d + d1;
	if (a3 == 0)
	{

	}
	else
	{
	if (a3 != 1)
	{
		printf("%d", a3);
	}
	if (b3 > 0)
	{
		printf("x^3+");
	}
	else
	{
		printf("x^3");
	}
	}
	if (b3 == 0)
	{
		if (c3 > 0)
		{
			printf("+");
		}
	}
	else
	{
	if (b3 != 1)
	{
		printf("%d", b3);
	}
	if (c3 > 0)
	{
		printf("x^2+");
	}
	else
	{
		printf("x^2");
	}
	}
	if (c3 == 0)
	{

	}
	else
	{
	if (c3 != 1)
	{
		printf("%d", c3);
	}
	if (d3 > 0)
	{
		printf("x");
	}
	else
	{
		printf("x");
	}
	}
	if (d3 == 0)
	{

	}
	else
	{
		if (d3 > 0)
		{
			if (a!=0 || b!=0 || c != 0)
			{
				printf("+");
			}
			printf("%d", d3);
		}
		else
		{
		printf("%d", d3);
		}
	}
}
void PolinomialDif(int a, int b, int c, int d, int a1, int b1, int c1, int d1)
{
	int a3, b3, c3, d3, k;
	printf("\n");
    k = 0;
	while (k != 1 && k != 2)
	{
	printf("1)(y2-y1) 2)(y1-y2) ");
	scanf("%d", &k);
	}
	if (k == 1)
	{
		a3 = a1 - a;
		b3 = b1 - b;
		c3 = c1 - c;
		d3 = d1 - d;
	}
	else
	{
	a3 = a - a1;
	b3 = b - b1;
	c3 = c - c1;
	d3 = d - d1;
	}
	if (a3 == 0)
	{

	}
	else
	{
	if (a3 != 1)
	{
		printf("%d", a3);
	}
	if (b3 > 0)
	{
		printf("x^3+");
	}
	else
	{
		printf("x^3");
	}
	}
	if (b3 == 0)
	{
		if (c3 > 0)
		{
			printf("+");
		}
	}
	else
	{
	if (b3 != 1)
	{
		printf("%d", b3);
	}
	if (c3 > 0)
	{
		printf("x^2+");
	}
	else
	{
		printf("x^2");
	}
	}
	if (c3 == 0)
	{

	}
	else
	{
	if (c3 != 1)
	{
		printf("%d", c3);
	}
	if (d3 > 0)
	{
		printf("x");
	}
	else
	{
		printf("x");
	}
	}
	if (d3 == 0)
	{

	}
	else
	{
		if (d3 > 0)
		{
			if (a!=0 || b!=0 || c != 0)
			{
				printf("+");
			}
			printf("%d", d3);
		}
		else
		{
		printf("%d", d3);
		}
	}
	if (a3 == 0 && b3 ==0 && c3 ==0 && d3 == 0)
	{
        printf("0");
	}
}
void PolinomialMult(int a, int b, int c, int d, int a1, int b1, int c1, int d1)
{
	int a3, b3, c3, d3, e3, f3, g3;
	printf("\n");
	a3 = a * a1;
	b3 = a * b1 + b * a1;
	c3 = a * c1 + b * b1 + c * a1;
	d3 = a * d1 + b * c1 + c * b1 + d * a1;
	e3 = b * d1 + c * c1 + d * b1;
	f3 = c * d1 + d * c1;
	g3 = d * d1;
	printf("%d", a3);
	if (b3 > 0)
	{
		printf("x^6+");
	}
	else
	{
		printf("x^6");
	}
	printf("%d", b3);
	if (c3 > 0)
	{
		printf("x^5+");
	}
	else
	{
			printf("x^5");
	}
	printf("%d", c3);
	if (d3 > 0)
	{
		printf("x^4+");
	}
	else
	{
			printf("x^4");
	}
	printf("%d", d3);
	if (e3 > 0)
	{
		printf("x^3+");
	}
	else
	{
			printf("x^3");
	}
	printf("%d", e3);
	if (f3 > 0)
	{
		printf("x^2+");
	}
	else
	{
			printf("x^2");
	}
	printf("%d", f3);
	if (g3 > 0)
	{
		printf("x+");
	}
	else
	{
		printf("x");
	}
	printf("%d", g3);
}
void PolinomialSeg(int a, int b, int c, int d, int a1, int b1, int c1, int d1)
{
	printf("\n");
    if (a == 0)
	{

	}
	else
	{
	if (a != 1)
	{
		printf("%d", a);
	}
	if (b > 0)
	{
		printf("x^3+");
	}
	else
	{
		printf("x^3");
	}
	}
	if (b == 0)
	{
		if (c > 0)
		{
			printf("+");
		}
	}
	else
	{
	if (b != 1)
	{
		printf("%d", b);
	}
	if (c > 0)
	{
		printf("x^2+");
	}
	else
	{
		printf("x^2");
	}
	}
	if (c == 0)
	{

	}
	else
	{
	if (c != 1)
	{
		printf("%d", c);
	}
	if (d > 0)
	{
		printf("x");
	}
	else
	{
		printf("x");
	}
	}
	if (d == 0)
	{

	}
	else
	{
		if (d > 0)
		{
			if (a!=0 || b!=0 || c != 0)
			{
				printf("+");
			}
			printf("%d", d);
		}
		else
		{
		printf("%d", d);
		}
	}
	printf("/");
	if (a1 == 0)
	{

	}
	else
	{
	if (a1 != 1)
	{
		printf("%d", a1);
	}
	if (b1 > 0)
	{
		printf("x^3+");
	}
	else
	{
		printf("x^3");
	}
	}
	if (b1 == 0)
	{
		if (c1 > 0)
		{
			printf("+");
		}
	}
	else
	{
	if (b1 != 1)
	{
		printf("%d", b1);
	}
	if (c1 > 0)
	{
		printf("x^2+");
	}
	else
	{
		printf("x^2");
	}
	}
	if (c1 == 0)
	{

	}
	else
	{
	if (c1 != 1)
	{
		printf("%d", c1);
	}
	if (d1 > 0)
	{
		printf("x");
	}
	else
	{
		printf("x");
	}
	}
	if (d1 == 0)
	{

	}
	else
	{
		if (d1 > 0)
		{
			if (a1 != 0 || b1 != 0 || c1 != 0)
			{
				printf("+");
			}
			printf("%d", d1);
		}
		else
		{
		printf("%d", d1);
		}
	}
    if (a1 == a && b1 == b && c1 == c && d1 == d)
	{
		printf("=1");
	}
}
void Programm()
{
	printf("\nversion 1.06.9");
	printf("\nCreator: Vadim Linevich");
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a1, b1, c1, d1, a2, b2, c2, d3, d2;
	char k;
	printf("enter polynomials of third degree (ax^3+bx^2+cx+d) ");
	SetPolinomial1(&a1, &b1, &c1, &d1);
	SetPolinomial2(&a2, &b2, &c2, &d3);
	GetPolinomial(a1 ,b1, c1, d1);
	printf("\n");
	GetPolinomial(a2 ,b2, c2, d3);
	printf("\n");
	for (; ;)
	{
		printf("Choose: 1)Enter, 2)Output, 3)Sum, 4)Subtraction, 5)Multiplication, 6)Segmentation, 7)Version and author, 8)Exit\n");
		scanf("%s", &k);
		while(k != '1' && k != '2' && k != '3' && k != '4' && k != '5' && k != '6' && k != '7' && k != '8')
		{
			printf("\nEnter a correct number\n");
			scanf("%s", &k);
		}
		if (k == '1')
		{
            SetPolinomial1(&a1, &b1, &c1, &d1);
			SetPolinomial2(&a2, &b2, &c2, &d2);
            d3 = d2;
		}
		if (k == '2')
		{
            GetPolinomial(a1 ,b1, c1, d1);
			printf("\n");
			GetPolinomial(a2 ,b2, c2, d3);
			printf("\n");
		}
		if (k == '3')
		{
			PolinomialSum(a1, b1, c1, d1, a2, b2, c2, d3);
			printf("\n");
		}
		if (k == '4')
		{
			PolinomialDif(a1, b1, c1, d1, a2, b2, c2, d3);
			printf("\n");
		}
		if (k == '5')
		{
			PolinomialMult(a1, b1, c1, d1, a2, b2, c2, d3);
			printf("\n");
		}
		if (k == '6')
		{
			PolinomialSeg(a1, b1, c1, d1, a2, b2, c2, d3);
			printf("\n");
		}
		if (k == '7')
		{
			Programm();
			printf("\n");
		}
		if (k == '8')
		{
			return 0;
		}
	}
	getch();
}
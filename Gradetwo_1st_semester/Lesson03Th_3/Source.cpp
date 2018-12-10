#include <stdio.h>

void main(void)
{
	int a, b;
	double d;
	//(1)
	d = 1.414;
	a = d + 0.5;
	printf("(1)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(2)
	d = 1.732;
	a = d + 0.5;
	printf("(2)\n");
	printf("a=%lf\n", a);
	printf("\n");
	//(3)
	b = 3;
	a = ++b;
	printf("(3)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(4)
	b = 5;
	a = b++;
	printf("(4)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(5)
	b = 3.14;
	a = (double)b;
	printf("(5)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(6)
	a = 3 > 2;
	printf("(6)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(7)
	a = (2 < 3) ? 4 : 5;
	printf("(7)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(8)
	a = (3 > 2) && ((3 % 2) == 1);
	printf("(8)\n");
	printf("a=%d\n", a);
	printf("\n");
	//(9)
	a = (9 / 2 == 4.5 || 3 > 2 > 1);
	printf("(9)\n");
	printf("a=%d\n", a);


}
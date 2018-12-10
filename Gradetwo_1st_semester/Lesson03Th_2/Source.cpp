#include <stdio.h>

void main(void)
{
	int a = 7, b = 100;
	double x = 3.14, y = 2.71;

	printf("a++=%d\n", a++);
	printf("++a=%d\n", ++a);
	printf("b--=%d\n", b--);
	printf("--b=%d\n", --b);
	printf("a*y-b=%lf\n", a*y - b);
	printf("a>b:%d\n", a > b);
	printf("x==b:%d\n", x == b);
	printf("a<b:%d\n", a < b);
	printf("0<a && a<10:%d\n", 0 < a&&a < 10);
	printf("a<0 || 10<a:%d\n", a < 0 || 10 < a);
}
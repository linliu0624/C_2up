#include <stdio.h>

void main(void)
{
	int a = 2014;
	double b = 3.1415926535;

	printf("%5d\n", a);
	printf("%05d\n", a);
	printf("%d\n", a);

	printf("\n");

	printf("%.8lf\n", b);
	printf("%010.3lf\n", b);
	printf("%10.3lf\n", b);
	printf("%.10lf\n", b);
}
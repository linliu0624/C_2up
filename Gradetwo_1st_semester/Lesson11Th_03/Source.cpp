#include <stdio.h>
#include "Header.h"
void main() {
	double a = 2.3, b = 3.2;
	printf("a+b=%lf\n", sum(a, b));
	printf("a-b=%lf\n", diff(a, b));
	printf("a*b=%lf\n", product(a, b));
	printf("a/b=%lf\n", quotient(a, b));
}

double sum(double a, double b)
{
	return a + b;
}
double diff(double a, double b) {
	return a - b;
}
double product(double a, double b)
{
	return a * b;
}
double quotient(double a, double b)
{
	return a / b;
}

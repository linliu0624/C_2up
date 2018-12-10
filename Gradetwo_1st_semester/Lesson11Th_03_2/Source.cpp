#include <stdio.h>

double sum_p(double *a_ptr, double *b_prt)
{
	return *a_ptr + *b_prt;
}
double diff_p(double *a_ptr, double *b_prt)
{
	return *a_ptr - *b_prt;
}
double product_p(double *a_ptr, double *b_prt)
{
	return *a_ptr * *b_prt;
}
double quotient_p(double *a_ptr, double *b_prt)
{
	return *a_ptr / *b_prt;
}

void main() {
	double a = 2, b = 3,*a_ptr=&a,*b_ptr=&b;
	printf("a+b=%ld\n", sum_p(a_ptr, b_ptr));
	printf("a-b=%ld\n", diff_p(a_ptr, b_ptr));
	printf("a*b=%ld\n", product_p(a_ptr, b_ptr));
	printf("a/b=%ld\n", quotient_p(a_ptr, b_ptr));
}
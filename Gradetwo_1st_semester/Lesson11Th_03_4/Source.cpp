#include <stdio.h>

void sdpq_p(double *a_ptr, double *b_ptr, double *result_ptr)
{
	*(result_ptr + 0) = *a_ptr + *b_ptr;
	*(result_ptr + 1) = *a_ptr - *b_ptr;
	*(result_ptr + 2) = *a_ptr * *b_ptr;
	*(result_ptr + 3) = *a_ptr / *b_ptr;
}
void main() {
	double a = 2, b = 3, *a_ptr = &a, *b_ptr = &b;
	double ans[4];
	sdpq_p(a_ptr, b_ptr, ans);
	for (int i = 0; i < 4; i++)
	{
		printf("%lf\n", ans[i]);
	}
}
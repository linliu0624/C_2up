#include <stdio.h>

void sdpq(double a, double b, double *result_ptr) {
	*(result_ptr + 0) = a + b;
	*(result_ptr + 1) = a - b;
	*(result_ptr + 2) = a*b;
	*(result_ptr + 3) = a / b;
}

void main() {
	double a = 2, b = 3;
	double ans[4];
	sdpq(a, b, ans);
	for (int i = 0; i < 4; i++)
		printf("%lf\n", ans[i]);
}
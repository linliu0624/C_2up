#include <stdio.h>
void count(double a, double b, double *ad) {
	ad[0] = a + b;
	ad[1] = a - b;
	ad[2] = a*b;
	ad[3] = a / b;
}

int main() {
	double a, b, ad[4];
	a = 5.0;
	b = 10.0;
	count(a, b, ad);
	for (int i = 0; i < 4; i++)
	{
		printf("%lf\n", ad[i]);
	}
}
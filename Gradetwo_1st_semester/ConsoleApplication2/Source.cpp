#include <stdio.h>

int main(void) {

	int a;
	float b;
	double c;
	printf("Please input value of a :\n");
	scanf_s("%d", &a);
	printf("Please input value of b :\n");
	scanf_s("%f", &b);
	printf("Please input value of c :\n");
	scanf_s("%lf", &c);

	printf("a=%d\n", a);
	printf("b=%f\n", b);
	printf("c=%lf\n", c);
	return 0;
}
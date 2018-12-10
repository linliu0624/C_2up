#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));

	int a[10];
	int f = rand() % 10;
	int e = rand() % 10;
	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
	}
	int *ptr;
	ptr = a;
	//sum
	printf("sum = %d , &a[%d] = %p  \n", a[f] + a[e], f, &a[f]);
	//difference
	printf("difference = %d , &a[%d] = %p  \n", a[f] - a[e], f, &a[f]);
	//product
	printf("product = %d , &a[%d] = %p\n", *(ptr + f) * a[e], f, &a[f]);
	//quotient
	printf("quotient = %d , &a[%d] = %p\n", *(ptr + f) / *(ptr + e), f, ptr + e);
	//remainder
	printf("quotient = %d , &a[%d] = %p\n", *(ptr + f) % *(ptr + e), f, ptr + e);
}
#include <stdio.h>

void main() {
	int a[3];
	int *p;

	p = a;
	printf("p=%p , p+1=%p , p+2=%p \n", p, p + 1, p + 2);
	printf("a[0]=%p , a[1]=%p , a[2]=%p\n", &a[0], &a[1], &a[2]);
	//ŠˆÈ p[i]=*(p+1)
}
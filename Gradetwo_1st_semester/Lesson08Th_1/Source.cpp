#include <stdio.h>

void main() {
	int a[3] = { 1,2,3 };
	int *ptr;
	ptr = a;
	for (int i = 0; i < 3; i++) {
		printf("address of a[%d] = %p , a[%d] = %d , *(ptr+%d) = %d , ptr[%d] = %d \n", i, &a[i], i, a[i], i, *(ptr + i), i, ptr[i]);
	}
}
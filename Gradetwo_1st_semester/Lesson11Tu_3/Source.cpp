#include <stdio.h>

void add(int x, int y, int *a1, int *a2)
{
	*a1 = x + y;
	*a2 = x - y;
}

void main() {
	int a = 1, b = 3, c, d, *c_ptr, *d_ptr;
    
	*c_ptr = &c;

	add(a, b, c_ptr, d_ptr);
	printf("X+Y=%d\n", *c_ptr);
	printf("X-y=%d\n", *d_ptr);
}
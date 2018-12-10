#include <stdio.h>

void add(int *a, int *b) {
	int z;
	z = *a + *b;
	printf("%d\n", z);
}
void main() {
	int a = 1, b = 3;
	int *a_ptr, *b_ptr;
	a_ptr = &a;
	b_ptr = &b;

	add(a_ptr, b_ptr);

}
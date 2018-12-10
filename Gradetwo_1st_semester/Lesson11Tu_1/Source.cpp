#include <stdio.h>

int add(int a, int b) {
	return a+b;
}
void main() {
	int a = 3,b=2;
	int c = add(a, b);
	printf("%d\n", c);
 }
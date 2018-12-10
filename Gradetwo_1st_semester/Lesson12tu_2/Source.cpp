#include <stdio.h>

int func(int x)
{
	if (x == 1)
		return 1;
	else
		return func(x - 1) * x;
}
void main() {
	printf("%d\n", func(4));
}
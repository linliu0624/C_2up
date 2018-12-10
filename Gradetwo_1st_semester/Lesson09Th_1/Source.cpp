#include <stdio.h>

void main() {
	int i, j, number;
	for (i = 0; i < 32; i++)
	{
		for (j = 32; j <= 96;j += 32)
		{
			number = i + j;
			printf("%5d %c", number, number);
		}
		printf("\n");
	}
}
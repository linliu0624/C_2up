#include <stdio.h>

void main() {
	int firstNumber = 0, secondNumber = 0;
	int ninenineList[10][10];
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			ninenineList[i][j] = i*j;
			printf("  %d,", ninenineList[i][j]);
		}
		printf("\n");
	}
	printf("first number=");
	scanf_s("%d", &firstNumber);
	printf("second number=");
	scanf_s("%d", &secondNumber);
	printf("%d x %d = %d\n", firstNumber, secondNumber, ninenineList[firstNumber][secondNumber]);
}
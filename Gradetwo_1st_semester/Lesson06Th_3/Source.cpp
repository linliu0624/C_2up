#include <stdio.h>

void main() {
	int threeMatrix[3][3];
	int determinant;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &threeMatrix[i][j]);
		}
	}
	printf("\nMatrix\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", threeMatrix[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			int temp = threeMatrix[i][j];
			threeMatrix[i][j] = threeMatrix[j][i];
			threeMatrix[j][i] = temp;
		}
	}
	printf("inverse matrix\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", threeMatrix[i][j]);
		}
		printf("\n");
	}
	determinant = 
		threeMatrix[0][0] * threeMatrix[1][1] * threeMatrix[2][2] +
		threeMatrix[0][1] * threeMatrix[1][2] * threeMatrix[2][0] +
		threeMatrix[0][2] * threeMatrix[1][0] * threeMatrix[2][1] -
		threeMatrix[0][2] * threeMatrix[1][1] * threeMatrix[2][0] -
		threeMatrix[0][0] * threeMatrix[1][2] * threeMatrix[2][1] -
		threeMatrix[0][1] * threeMatrix[1][0] * threeMatrix[2][2];
	printf("Determinant=%d\n", determinant);
}
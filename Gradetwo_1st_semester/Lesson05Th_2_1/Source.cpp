#include <stdio.h>
void main()
{
	double GPA = 0;
	int classAmount, score, unit, allUnit = 0;
	printf("Class amount:");
	scanf_s("%d", &classAmount);
	for (int i = 1; i <= classAmount; i++)
	{
		printf("Score %d = ", i);
		scanf_s("%d", &score);
		printf("Unit = ");
		scanf_s("%d", &unit);
		if (score > 100 || score < 0)
		{
			printf("Input number <100 and >0.\n");
			i--;
			continue;
		}
		if (score >= 90)
			score = 4;
		else if (score >= 80 && score < 90)
			score = 3;
		else if (score >= 70 && score < 80)
			score = 2;
		else if (score >= 60 && score < 70)
			score = 1;
		else if (score < 60)
			score = 0;
		GPA = GPA + score*unit;
		allUnit += unit;
	}
	GPA = GPA / allUnit;
	printf("GAP:%.3lf\n", GPA);

}
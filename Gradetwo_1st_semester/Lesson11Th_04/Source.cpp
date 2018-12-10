#include <stdio.h>
int amount() {
	int n;
	scanf_s("%d", &n);
	return n;
}
double GPA(int n, int *score)
{
	double result;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(score + i) * 2;
	}
	result = sum / (n * 2);
	return result;
}
void main() {
	int score[100], classAmount;
	classAmount = amount();
	for (int i = 0; i < classAmount; i++)
	{
		scanf_s("%d", *(score + i));
	}
	printf("GPA=%lf\n", GPA(classAmount, score));

}
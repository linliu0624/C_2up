#include<stdio.h>

void main(void)
{
	float hei = 0, wei = 0, bmi=0;
	printf("Height:");
	scanf_s("%f", &hei);
	printf("Weight:");
	scanf_s("%f", &wei);
	hei = hei / 100;
	bmi = wei / (hei*hei);
	printf("BMI:%.3f", bmi);
	if (bmi > 25)
		printf("->Overweight\n");
	else if (bmi > 18.5)
		printf("->Normal\n");
	else
		printf("->Underweight\n");

}
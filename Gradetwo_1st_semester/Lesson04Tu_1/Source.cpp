#include<stdio.h>

void main()
{
	int extension;
	printf("Please input your number:");
	scanf_s("%d", &extension);

	switch (extension)
	{
	case 1001:
		printf("President\n");
		break;
	case 1002:
		printf("Secretary Office\n");
		break;
	case 2001:
	case 2002:
		printf("Research Center\n");
		break;
	default:
		printf("Unknow Center\n");
		break;
	}
}
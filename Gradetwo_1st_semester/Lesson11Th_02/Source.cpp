#include <stdio.h>

int checkCharType(char c)
{
	if (c >= 97 && c <= 122)
	{
		return 0;
	}
	else if (c <= 90 && c >= 65)
	{
		return 1;
	}
	else if (c >= 48 && c <= 57)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}
void main() {
	int i = 0;
	char c[100];
	scanf("%s", c);

	while (c[i]!=NULL)
	{
		if (checkCharType(c[i]) == 0)
		{
			printf("%c : Small latter\n", c[i]);
		}
		else if (checkCharType(c[i]) == 1)
		{
			printf("%c : Capital latter\n", c[i]);
		}
		else if (checkCharType(c[i]) == 2)
		{
			printf("%c : Numeral\n", c[i]);
		}
		else
		{
			printf("%c : Symbol\n", c[i]);
		}
		i++;
	}
}

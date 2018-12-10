#include <stdio.h>
#include <string.h>
#pragma warning( disable : 4996 )
int main(int argc, char **argv)
{
	int a = 0;
	char str[100] = { '\0' };
	for (int i = 1; i < argc; i++)
	{
		strcat(str, *(argv + i));

		strcat(str, " ");
	}
	while (str[a] != '\0')
	{
		if (a == 0 && str[a] >= 97 && str[a] <= 122)
			str[a] -= 32;
		if (a != 0 && str[a] >= 65 && str[a] <= 90)
			str[a] += 32;
		a++;
	}
	printf("%s\n", str);
}
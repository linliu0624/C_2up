#include <stdio.h>

void main() {
	char str[] = "Hello";
	char *pstr = str;
	int l=0;
	while (*pstr != NULL)
	{
		putchar(*pstr);
		pstr++;
		l++;
	}
	printf("\n");
	for (int i = l-1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	
}
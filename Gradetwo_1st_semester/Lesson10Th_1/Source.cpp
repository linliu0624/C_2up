#include <stdio.h>

void main() {
	const char *isono[7] = { "namihei","fune","sazae","katsuo","wakame",NULL };
	/*int i = 0;
	while (*(isono + i) != NULL)
	{
		printf("%s\n", *(isono + i));
		i++;
	}*/
	const char **a;
	a = isono;
	while (*a != NULL)
	{
		printf("%s\n", *a);
		a++;
	}
}
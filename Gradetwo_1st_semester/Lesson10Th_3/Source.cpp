#include <stdio.h>
#include <string.h>


void main() {
	char *isono[7] = { "namihei","fune","sazae","katsuo","wakame",NULL };
	int i = 0;
	while (true)
	{
		if (*(isono + i) == NULL)
		{
			break;
		}
		if (strcmp(*(isono + i), "sazae") == 0) {
			for (int j = i; j < 6; j++)
				*(isono + j) = *(isono + j + 1);
		}
		i++;
	}
	i = 0;
	while (true)
	{
		if (*(isono + i) == NULL)
		{
			break;
		}
		printf("%s\n", *(isono + i));
		i++;
	}

}
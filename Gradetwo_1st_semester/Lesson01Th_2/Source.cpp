#include <stdio.h>
#include <string.h>
void add(char);
void main() {
	char *isono[7] = { "namihei","fune","sazae","katsuo","wakame",NULL };
	char *fuguta[5] = { "masuo" , NULL };
	char *tmp;
	int i = 0;

	while (*(isono + i) != NULL)
	{
		if (strcmp(*(isono + i), "sazae") == 0)
		{
			tmp = *(isono + i);
		}
		printf("%s\n", *(isono + i));
		i++;
	}
	printf("\n");

	i = 0;
	while (*(fuguta + i) != NULL)
	{
		printf("%s\n", *(fuguta + i));
		i++;
		if (*(fuguta + i) == NULL)
		{
			*(fuguta + i) = tmp;
			printf("%s\n", *(fuguta + i));
			*(fuguta + i + 1) = NULL;
			i++;  //這樣到下一個才會是NULL，不然無法脫離迴圈
		}
	}

}
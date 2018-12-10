#include <stdio.h>
#include <string.h>
void main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		int n = 0;
		while (argv[i][n]!=NULL)
		{
			n++;
		}
		//printf("try = %d\n",sizeof(argv[i]));
		printf("•¶ŽšÉ = %d , %s \n", n, argv[i]);
	}
}
//int main(int argc, char *argv[]) {
//	int i;
//	for (i = 1; i < argc; i++) {
//		printf("length = %lu, %s\n", strlen(argv[i]), argv[i]);
//	}
//	return 0;
//}
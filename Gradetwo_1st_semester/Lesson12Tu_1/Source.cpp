#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{

	printf("argc = %d\n", argc);  //acrg是你在cmd執行程式時，所輸入的字符數 例如 a.out ba ba ba 這樣就是4個
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	printf("%s轉換後的整數為%d \n", argv, atoi(*argv));
	printf("%s轉換後的浮點數為%f \n", argv, atof(*argv));
}
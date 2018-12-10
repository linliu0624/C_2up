#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv)
{
	int time;
	time = atoi(argv[2]);
	if (argc != 3) {//如果控制台的參數不是3個的話
		printf("Number of arguments must be 3. \n");
		abort(); //程式停止
		//exit(1); 同上   參數是1的時候是異常終止，0的話是正常停止
	}
	for (int i = 0; i < time; i++)
		printf("%s\n", argv[1]);
}
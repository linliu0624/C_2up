#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv)
{
	int time;
	time = atoi(argv[2]);
	if (argc != 3) {//�@�ʍT����I�ҝɕs��3�I�b
		printf("Number of arguments must be 3. \n");
		abort(); //������~
		//exit(1); ����   �ҝɐ�1�I���󐥈ُ�I�~�C0�I�b�������~
	}
	for (int i = 0; i < time; i++)
		printf("%s\n", argv[1]);
}
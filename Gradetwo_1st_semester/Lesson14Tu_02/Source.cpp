#include <stdio.h>
#include <string.h>//strcat���g�����߁D
int main(void) {
	char str0[100] = "\0";//�k�������ŏ��������Ă���
	char str1[] = "hoge", str2[] = "hehe";
	//strcat�͕�����̌�ɁC��������Ȃ����킹��֐�

	strcat_s(str0, str1);//���str0��hoge��ǉ�
	printf("result = %s\n", str0);
	strcat_s(str0, str2);//��̑����C���Ȃ킿�Choge�̌��hehe��ǉ�
	printf("result = %s\n", str0);

	return 0;
}
/*
EOF�Ƃ�End Of File�̗��ł��D
getchar�Ƃ����֐��ŁC������1�������ǂݍ��݂Ȃ���
EOF�ɂ��ǂ蒅���܂ŌJ��Ԃ��Ƃ����v���O�����ł��D
���������́C./a.out < hoge.txt �Ƃ��ăt�@�C����
���͂��Ă��������D
*/
#include <stdio.h>
void main(void) {
	int c;
	int capitalupper_number = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
		{
			break;
		}
		if (65 <= c && c <= 90)
		{
			capitalupper_number++;
		}
	}
	printf("answer:%d\n", capitalupper_number);
}
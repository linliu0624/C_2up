/*
EOFとはEnd Of Fileの略です．
getcharという関数で，文字を1文字ずつ読み込みながら
EOFにたどり着くまで繰り返すというプログラムです．
動かし方は，./a.out < hoge.txt としてファイルを
入力してください．
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
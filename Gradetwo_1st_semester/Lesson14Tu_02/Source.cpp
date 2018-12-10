#include <stdio.h>
#include <string.h>//strcatを使うため．
int main(void) {
	char str0[100] = "\0";//ヌル文字で初期化しておく
	char str1[] = "hoge", str2[] = "hehe";
	//strcatは文字列の後に，文字列をつなぎ合わせる関数

	strcat_s(str0, str1);//空のstr0にhogeを追加
	printf("result = %s\n", str0);
	strcat_s(str0, str2);//上の操作後，すなわち，hogeの後にheheを追加
	printf("result = %s\n", str0);

	return 0;
}
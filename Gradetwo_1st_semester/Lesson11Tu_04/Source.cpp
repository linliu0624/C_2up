#include <stdio.h>
int c = 10;//グローバル変数

void showdata(int x, int y) {
	printf("x=%d,y=%d\n", x, y);
}

void main() {
	int a = 1, b = 2;//ローカル変数
	showdata(a, b);
}
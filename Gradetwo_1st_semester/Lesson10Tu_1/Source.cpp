#include <stdio.h>

void main() {

	//----------�p�w�W�����w��---------
	int a[] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int *ap, *bp;
	ap = a; bp = b;
	for (int i = 0; i < 3; i++) {
		printf("a[%d]=%d\n", i, *(ap + i));
		printf("b[%d]=%d\n", i, *(bp + i));
	}
	printf("\n");
	//--------�p�w�W�͋[�w�����----------
	int a[] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int *ap, *bp;
	ap = b; bp = a;
	for (int i = 0; i < 3; i++) {
		printf("a[%d]=%d\n", i, *(ap + i));
		printf("b[%d]=%d\n", i, *(bp + i));
	}
}
#include <stdio.h>

void main() {

	//----------用指標顯示陣列---------
	int a[] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int *ap, *bp;
	ap = a; bp = b;
	for (int i = 0; i < 3; i++) {
		printf("a[%d]=%d\n", i, *(ap + i));
		printf("b[%d]=%d\n", i, *(bp + i));
	}
	printf("\n");
	//--------用指標模擬陣列交換----------
	int a[] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int *ap, *bp;
	ap = b; bp = a;
	for (int i = 0; i < 3; i++) {
		printf("a[%d]=%d\n", i, *(ap + i));
		printf("b[%d]=%d\n", i, *(bp + i));
	}
}
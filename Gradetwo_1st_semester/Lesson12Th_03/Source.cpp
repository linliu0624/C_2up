//”ã”g”[Œ_É—ñ
#include <stdio.h>
#include <stdlib.h> 
//f0=0, f1=1, f2=f1+f0, f3=f1+f2 ......
//ç¨ç”Å–{
int fibo(int m)
{
	if (m == 0) {
		return 0;
	}
	else if (m == 1) {
		return 1;
	}
	return fibo(m - 1) + fibo(m - 2);
}
void main(int argc, char **argv) {
	int n, ans;
	double golden;
	//n = atoi(argv[1]);
	ans = fibo(30);
	printf("%d\n", ans);
	//golden = fibo(n) / (double)fibo(n - 1);
}
//---------------ˆê”Ê”Å–{--------------------------
//void main(int argc, char *argv[]) {
//	int n, ans, f0 = 0, f1 = 1, f2, i;
//	n = atoi(argv[1]); //(•¶šçz®É) É—ñ—v‘½’·?
//	if (n == 0) {
//		ans = f0;
//	}
//	else if (n == 1) {
//		ans = f1;
//	}
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			f2 = f0 + f1;
//			f0 = f1;
//			f1 = f2;
//		}
//	}
//	ans = f2;
//	printf("n = %d, answer = %d n", i-1, ans);
//}

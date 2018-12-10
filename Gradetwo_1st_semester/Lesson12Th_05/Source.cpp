#include <stdio.h>
int combination(int, int);
int func(int);
void main() {
	int ans;
	ans = combination(4, 2);
	printf("%d\n", ans);
}
int combination(int n, int r)
{
	int result = 0;
	if (n - r == 0) {
		return 0;
	}
	result = func(n) / (func(n - r)*func(r));
	return result;
}
int func(int x)
{
	if (x == 1)
		return 1;
	else
		return func(x - 1) * x;
}
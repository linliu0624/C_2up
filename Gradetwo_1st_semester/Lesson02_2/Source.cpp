#include<stdio.h>
int main(void)
{
	long long int a = 1, i = 1, n;
	printf("number?\n");
	scanf_s("%lld", &n);
	while (i <= n)
	{
		a = a*i;
		i = i + 1;
	}
	printf("n!=%lld\n", a);
	return 0;
}
#include<stdio.h>

void main()
{
	int n = 0, i, sum;
	while (n < 10001)
	{
		i = 1;
		sum = 0;
		while (i <= n / 2 )
		{
			if (n%i == 0)
			{
				sum = sum + i;
			}
			if (sum == n && i == n / 2)
			{
				printf("Perfect number:%d\n", sum);
				break;
			}
			i++;
		}

		n++;
	}


}
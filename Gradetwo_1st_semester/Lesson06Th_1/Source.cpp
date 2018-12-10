#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int player, computer;
	int flag;
	int playerMoney = 500, computerMoney = 500;
	printf("1 is scissors, 2 is stone, 3 is paper\n");
	while (playerMoney > 0 && playerMoney < 1000 && computerMoney > 0 && computerMoney < 1000)
	{
		printf("Your money=%d\n", playerMoney);
		printf("Computer's money=%d\n", computerMoney);
		srand(time(NULL));
		playerMoney -= 100;
		computerMoney -= 100;
		while (true)
		{
			scanf_s("%d", &player);
			computer = rand() % 3 + 1;
			printf("%d\n", computer);
			flag = (player - computer + 3) % 3;
			if (flag == 0)
			{
				printf("Draw!\n");
				continue;
			}
			else if (flag == 1)
			{
				printf("You win!\n");
				playerMoney += 200;
				break;
			}
			else
			{
				printf("You lose!\n");
				computerMoney += 200;
				
				break;
			}
		}
	}
	if (playerMoney >= 1000)
	{
		printf("You win the money!\n");
	}
	if (playerMoney <= 0)
	{
		printf("You lose the money!\n");
	}
}
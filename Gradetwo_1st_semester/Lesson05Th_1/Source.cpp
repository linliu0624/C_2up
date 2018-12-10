#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int playerTurn, enemyTurn;
	bool end = false;
	printf("0 is paper, 1 is scissors and 2 is stone.\n");
	while (!end)
	{
		printf("Your turn:");
		scanf_s("%d", &playerTurn);

		if (playerTurn == 0)
		{
			enemyTurn = rand() % 3;
			printf("Enemy's turn:%d\n", enemyTurn);
			switch (enemyTurn)
			{
			case 0:
				printf("Drew! tried again.\n");
				break;
			case 1:
				printf("You lose.\n");
				end = true;
				break;
			case 2:
				printf("You win!\n");
				end = true;
				break;
			default:
				break;
			}
		}
		else if (playerTurn == 1)
		{
			enemyTurn = rand() % 3;
			printf("Enemy's turn:%d\n", enemyTurn);
			switch (enemyTurn)
			{
			case 0:
				printf("You win!\n");
				end = true;
				break;
			case 1:
				printf("Drew! tried again.\n");
				break;
			case 2:
				printf("You lose\n");
				end = true;
				break;
			default:
				break;
			}
		}
		else if (playerTurn == 2)
		{
			enemyTurn = rand() % 3;
			printf("Enemy's turn:%d\n", enemyTurn);
			switch (enemyTurn)
			{
			case 0:
				printf("You lose.\n");
				end = true;
				break;
			case 1:
				printf("You win!\n");
				end = true;
				break;
			case 2:
				printf("Drew! tried again.\n");
				break;
			default:
				break;
			}
		}
		else {
			printf("Input 0~2\n");
		}
		fflush(stdin);
	}

	return 0;
}
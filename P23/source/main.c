#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void);

int main(void)
{
	int sum, mypoint;
	enum Status gamestatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = LOST;
		break;

	default:
		gamestatus = CONTINUE;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}

	while (gamestatus == CONTINUE)
	{
		sum = rollDice();

		if (sum == mypoint)
			gamestatus = WON;
		else
		{
			if (sum == 7)
				gamestatus = LOST;
		}
	}
	if (gamestatus == WON)
		printf("Player Wins!!\n");
	else
		printf("Player Loses!!\n");
	
	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1, die2, worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}

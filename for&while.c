#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//start:
	srand(time(0));
	int usernum;
	int num;
	int index = 0;
	int blackNumbers[index];
	start:
		num = (rand() % 10) + 1;

	printf("\n********************************\nCHOOSE A NUMBER BETWEEN 1 AND 10\n********************************\n");
	//printf("\nTHE W NUMBER IS %d\n", num);
	do {
		scanf("%d", &usernum);
		if (usernum != num)
		{
			printf("YOU LOSE!! TRY AGAIN\n");
		}
	}

	while (usernum != num);
	printf("YOU WINN!! CONGRATULATION\nDo you like this game???? Play again");

	goto start;

}

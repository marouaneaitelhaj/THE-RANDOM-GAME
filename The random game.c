#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//start:
	srand(time(0));
	int usernum;
	int numRep = 0;
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
		switch(numRep){
        case 0:
            printf("YOU STILL HAVE 3 CHANCE\n");
            break;
    case 1:
        printf("YOU STILL HAVE 2 CHANCE\n");
        break;
        case 2:
        printf("YOU STILL HAVE 1 CHANCE\n");
        break;
        case 3:
        numRep = 0;
        goto start;
        break;
		}
		numRep++;
	}

	while (usernum != num);
	printf("YOU WINN!! CONGRATULATION\nDo you like this game ????\nPlay again");
	goto start;

}

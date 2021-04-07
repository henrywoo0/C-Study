#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int input, random; // input은 나의 선택, random은 컴퓨터의 선택
	int win = 0, lose = 0, draw = 0;
	char yesno;

	srand(time(NULL));

	printf("------------GAME START------------");

	while (1)
	{
		printf("\n\n\n");
		printf("+--------------------------------+\n");
		printf("|  가위 : 1,  바위 : 2,  보 : 3  |\n");
		printf("+--------------------------------+\n");

		printf("당신의 선택은? : ");
		scanf("%d", &input);

		getchar();

		random = rand() % 3 + 1;
		printf("나 : %d, Computer : %d\n", input, random);
		if (input == random)
		{
			printf("비겼습니다.\n");
			draw++;
		}
		else if ((input == 1 && random == 3) || (input - random > 0))
		{
			printf("이겼습니다.\n");
			win++;
		}
		else
		{
			printf("졌습니다.\n");
			lose++;
		}
		printf("win : %d, lose : %d, draw : %d\n\n\n", win, lose, draw);
		printf("다시 하시겠습니까?(y/n) : ");
		scanf("%c", &yesno);

		getchar();

		if (yesno == 'n' || yesno == 'N')
			break;
	}

	return 0;
}

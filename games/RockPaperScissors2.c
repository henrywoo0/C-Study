#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int count;
	int input;
	int random;
	int win = 0, lose = 0, draw = 0;

	srand((unsigned)time(NULL));

	printf("가위바위보 게임을 몇 번 실행하시겠습니까? : ");
	scanf("%d", &count);

	printf("\n");

	for (int i = 0; i < count; i++)
	{
		random = rand() % 3 + 1;
		printf("(1:가위, 2:바위, 3:보) : ");
		scanf("%d", &input);
		printf("you: %d, com : %d\n", input, random);
		if (input == random)
		{
			draw++;
			printf("비겼습니다. ");
		}
		else if ((input - random == 1) || (input == 1 && random == 3))
		{
			win++;
			printf("당신이 이겼습니다. ");
		}
		else
		{
			lose++;
			printf("당신이 졌습니다. ");
		}
		
		printf("(%d승 %d무 %d패)\n", win, draw, lose);
	}


	return 0;
}

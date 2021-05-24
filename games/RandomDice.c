#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum = 0;
	char input;
	int n1, n2;
	srand((unsigned)time(NULL));
	// srand((unsigned int)time(0));
	// 주사위 : 1 ~ 6 범위
	
	while (1)
	{
		printf("주사위 게임을 하시겠습니까? (y/n) : ");
		scanf("%c", &input);
		getchar();

		if (input != 'y' && input != 'Y')
			break;

		n1 = rand() % 6 + 1;
		n2 = rand() % 6 + 1;
		printf("주사위 : %d %d\n", n1, n2);
		sum += n1 + n2;

		if (n1 == n2)
		{
			printf("더블입니다.\n\n");
			continue;
		}

		printf("%d칸 전진하세요\n\n", sum);

		sum = 0;
	}


	return 0;
}

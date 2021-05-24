#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt = 0;
	int randNum;
	int isSame;
	int input[7] = { 0, };
	int lottery[7] = { 0, };
	int randomArray[51] = { 0, };
	srand(time(NULL));
	
	printf("로또 7개의 숫자를 입력하세요(1~50 중복입력불가) : ");

	for (int i = 0; i < 7; i++)
		scanf("%d", &input[i]);

	for (int i = 0; i < 7; i++)
	{
		randNum = rand() % 50 + 1;
		if(randomArray[randNum])
		{
			i--;
			continue;
		}
		lottery[i] = randNum;
		randomArray[randNum]++;
	}

	for (int i = 0; i < 7; i++)
	{
		isSame = 0;
		for (int j = 0; j < 7; j++)
		{
			if (input[i] == lottery[j])
			{
				isSame++;
			}
		}
		if (isSame)
			cnt++;
	}

	printf("==============================\n");
	printf("로또 추첨 번호 : ");
	for (int i = 0; i < 7; i++)
		printf("%d ", lottery[i]);

	printf("\n%d개 맞았습니다.\n", cnt);

	return 0;
}

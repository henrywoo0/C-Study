#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정수를 입력받아 두 수 사이의 정수의 합과 곱을 구하는 프로그램

int main(void)
{
	int start, end;
	int sum = 0, multi = 1;
	scanf("%d %d", &start, &end);

	for (int i = start; i <= end; i++)
	{
		sum += i;
		multi *= i;
	}

	printf("%d %d", sum, multi);

	return 0;
}

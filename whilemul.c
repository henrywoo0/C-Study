#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan, n = 0;
	printf("단을 입력하세요 : ");
	scanf("%d", &dan);
	while (++n < 10)
	{
		printf("%d X %d = %d\n", dan, n, dan * n);
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, j, a = 1;

	printf("수를 입력하세요 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a);
			a++;
		}

		printf("\n");
	}

	return 0;
}

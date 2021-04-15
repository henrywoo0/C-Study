#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 1; i < 10; i++)
	{
		for (j = 2; j <= 4; j++)
		{
			printf("%d * %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}

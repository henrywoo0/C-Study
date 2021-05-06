#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (i == j || i + j == 6)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}

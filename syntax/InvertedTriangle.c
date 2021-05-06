#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int k = 4; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

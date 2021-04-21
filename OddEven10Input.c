#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10];
	int odd = 0, even = 0, i;

	printf("입력정수 : ");

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", &arr[i]);
		if ((i + 1) % 2)
			odd += arr[i];
		else
			even += arr[i];
	}

	printf("odd : %d\n", odd);
	printf("even : %d\n", even);

	return 0;
}

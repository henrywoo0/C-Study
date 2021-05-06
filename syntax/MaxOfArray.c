#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int i;
	int arr[5];
	int max;

	printf("입력 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 5; i++) 
	{
		printf("%d ", arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}

	printf("\n최대값 : %d", max);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 세 자리 이하의 정수 100개를 차례로 입력받다가 999가 입력되면 프로그램을 종료하고
// 999를 제외한 최대값과 최소값 출력하는 프로그램

int main(void)
{
	int i;
	int max, min;
	int arr[100];

	printf("입력정수 : ");
	scanf("%d", &arr[0]);

	max = arr[0];
	min = arr[0];

	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 999)
			break;

		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("max : %d\n", max);
	printf("min : %d\n", min);

	return 0;
}

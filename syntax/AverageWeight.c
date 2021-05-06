#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	double weight[6];
	double sum = 0.0;
	double avg = 0.0;

	printf("체중 입력 : ");

	for (i = 0; i < sizeof(weight) / sizeof(weight[0]); i++)
	{
		scanf("%lf", &weight[i]);
		sum += weight[i];
	}

	avg = sum / (sizeof(weight) / sizeof(weight[0]));

	printf("평균체중 : %.1lf", avg);

	return 0;
}

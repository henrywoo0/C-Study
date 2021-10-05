#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int solution(int scores[], int scores_len)
{
	int sum = 0;

	for (int i = 0; i < scores_len; i++)
	{
		if (scores[i] >= 650 && scores[i] < 800)
			sum++;
	}

	return sum;
}

int main(void)
{
	int n;
	int scores[100] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &scores[i]);
	}

	printf("%d", solution(scores, n));

	return 0;
}

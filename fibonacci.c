#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int); // 함수 선언

int main(void)
{
	int n;
	scanf("%d", &n);
	fibonacci(n);

	return 0;
}

int fibonacci(int n) // 함수 정의
{
	// 0 1 1 2 3 5 8 ...
	int f1 = 0, f2 = 1, f3, i;
	if (n == 1) // 첫 번째는 0 리턴
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < n - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

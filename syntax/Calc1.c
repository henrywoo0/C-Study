#include <stdio.h>
#pragma warning (disable : 4996)

// 더하기 함수
int add(int a, int b)
{
	return a + b;
}

// 빼기 함수
int sub(int a, int b)
{
	return a - b;
}

// 곱하기 함수
int mul(int a, int b)
{
	return a * b;
}

// 나누기 
double div(int a, int b)
{
	if (b == 0)
	{
		printf("\nerror\n");
		exit(1);
	}
	return (double)a / b;
}

int main(void)
{
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("\n%d + %d = %d", a, b, add(a, b));
	printf("\n%d - %d = %d", a, b, sub(a, b));
	printf("\n%d * %d = %d", a, b, mul(a, b));
	printf("\n%d / %d = %.2lf", a, b, div(a, b));

	return 0;
}

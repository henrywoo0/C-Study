#include <stdio.h>
#pragma warning (disable : 4996)

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main(void)
{
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("\n%d + %d = %d", a, b, add(a, b));
	printf("\n%d - %d = %d", a, b, sub(a, b));
	printf("\n%d * %d = %d", a, b, mul(a, b));
	printf("\n%d / %d = %d", a, b, div(a, b));

	return 0;
}

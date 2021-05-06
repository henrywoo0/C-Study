#include <stdio.h>
#pragma warning (disable : 4996)

int n1, n2;

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

double div(int a, int b)
{
	if (b == 0)
	{
		printf("\nerror\n");
		exit(1);
	}
	return (double)a / b;
}

void input2() {
	printf("두 숫자 입력 : ");
	scanf("%d %d", &n1, &n2);
}

void output() {
	printf("%d\n", add(n1, n2));
	printf("%d\n", sub(n1, n2));
	printf("%d\n", mul(n1, n2));
	printf("%lf\n", div(n1, n2));
}

int main(void)
{
	printf("사칙연산 프로그램\n");
	input2();
	output();

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int maxNum(int n1, int n2, int n3);
int minNum(int n1, int n2, int n3);

int main(void)
{
	int num1, num2, num3;

	printf("세 수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("가장 큰 수 : %d\n",maxNum(num1, num2, num3));
	printf("가장 작은 수 : %d\n", minNum(num1, num2, num3));

	return 0;
}

int maxNum(int n1, int n2, int n3)
{
	if (n1 > n2)
		return n1 > n3 ? n1 : n3;
	else
		return n2 > n3 ? n2 : n3;
}

int minNum(int n1, int n2, int n3)
{
	if (n1 < n2)
		return n1 < n3 ? n1 : n3;
	else
		return n2 < n3 ? n2 : n3;
}

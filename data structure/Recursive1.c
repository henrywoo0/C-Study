#pragma warning (disable : 4996)
#include <stdio.h>

int recur(int n)
{
	if (n < 0)
		return 1;
	printf("함수 안의 함수 호출 : %d\n", n);
	recur(n - 1);
}

int main(void)
{
	recur(5);

	return 0;
}

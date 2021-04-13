#pragma warning (disable : 4996)
#include <stdio.h>

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d! = %d", num, fact(num));

	return 0;
}

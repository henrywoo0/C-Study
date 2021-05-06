#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int n)
{
	static int a = 0;
	a++;
	printf("n = %d, a = %d\n", n, a);
}

int main(void)
{
	int n = 5;
	func(n);
	func(n);

	return 0;
}

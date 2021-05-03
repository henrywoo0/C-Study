#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	int* pArr[3] = { &a, &b, &c };
	printf("%d\n", *pArr[0]);
	printf("%d\n", *pArr[1]);
	printf("%d\n", *pArr[2]);

	return 0;
}

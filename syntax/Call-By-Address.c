#include <stdio.h>

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int n1 = 3;
	int n2 = 5;

	printf("swap하기 전 : %d %d\n", n1, n2);

	Swap(&n1, &n2);

	printf("Swap 후 : %d %d\n", n1, n2);

	return 0;
}

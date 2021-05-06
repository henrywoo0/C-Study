#include <stdio.h>

int main(void)
{
	int n1 = 100, n2 = 200;
	int* p;

	p = &n1;
	printf("%p\n", p);
	printf("%d\n", *p);
	printf("%d\n", n1);
	(*p) = 300;
	printf("%d\n", *p);
	printf("%d\n", n1);

	return 0;
}

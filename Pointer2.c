#include <stdio.h>

int main(void)
{
	int n1 = 100;
	int* p;
	p = &n1;

	printf("주소(Address) : %p, %p\n", p, &n1);
	printf("내용(혹은 값)  : %d, %d\n", *p, n1);

	for (int i = 0; i < 5; i++)
		printf("%4d", (*p)++);

	printf("%4d\n", n1);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%p %p\n", &a[0], &a[1]);
	printf("Address of a =  %p\n", &a);
  printf("Address of a[0] = %p\n", &a[0]);

	return 0;
}

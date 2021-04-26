#include <stdio.h>

int main(void)
{
	int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%p %p\n", &a[0], &a[1]);
	printf("a주소 = %p\na[0]주소 = %p\n", &a, &a[0]);

	int* p = a;

	printf("a주소 = %d\n", p);
	printf("a주소 = %d\n", a);
	printf("a주소 = %d\n", &a[0]);
	printf("a[1]주소 = %d\n", &a[1]);
	printf("a[1]주소 = %d\n", a + 1); // a = 1000, a + 1 = 1004

	return 0;
}

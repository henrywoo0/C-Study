#include <stdio.h>

int main()
{
	int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%p %p\n", &a[0], &a[1]);
	printf("%d\n", &a[1] - &a[0]);
	printf("======================\n");
	

	// int형의 1은 4이다.
	// int형이니 배열에서 한 칸 이동하려면 1

	// 16진수 
	// -> 4bit 
	// -> 2의 4제곱 = 16
	// -> 0 ~ 15(F)

	int arr[5] = { 1, 2, 3, 4, 5 };
	int* pArr = arr;
	printf("%d\n", *pArr);
	printf("%d\n", *(++pArr));
	printf("%d\n", *(++pArr));
	printf("%d\n", *(pArr + 1));
	printf("%d\n", *(pArr + 2));

	return 0;
}

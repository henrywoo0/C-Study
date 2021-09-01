#include <stdio.h>

int main(void)
{
	int* p;			// 1차원 포인터
				// p는 어떤 변수의 주소를 저장하는 변수
	int (*ptr)[5];		// 배열 포인터
	int arr[5];		// 1차원 배열

	p = arr;
	ptr = &arr;

	printf("p=%p, ptr=%p\n", p, ptr);

	p++; 	// int형은 4byte이니까 4byte 증가
	ptr++; 	// 4byte*5개 = 20byte 증가

	printf("p=%p, ptr=%p\n", p, ptr);

	return 0;
}

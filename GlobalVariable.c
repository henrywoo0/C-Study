#include <stdio.h>
#pragma warning (disable : 4996)

int n; // 전역변수는 0으로 초기화된다.
void add(int); // 함수 선언

int main(void)
{
	printf("n = %d\n", n);
	add(3);
	printf("n = %d\n", n);
	n++;
	printf("n = %d\n", n);

	return 0;
}

void add(int x) { // 함수 정의
	// 전역변수 n에 x값이 누적되는 코드를 작성하시오.
	n += x;
}

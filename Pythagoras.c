#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 직각삼각형에서 직각을 낀 두 변의 길이를 입력받고, 빗변의 길이를 구하는 프로그램
// 피타고라스 정리 이용
// √(루트)는 소수점으로 출력됩니다

int main(void)
{
	double num1, num2;	// 직각삼각형에서 밑변과 높이의 길이
	double result;		// 직각삼각형에서 빗변의 길이

	printf("직각삼각형의 밑변과 높이의 길이를 입력하세요 : ");
	scanf("%lf %lf", &num1, &num2);

	result = sqrt(pow(num1, 2) + pow(num2, 2));

	printf("빗변의 길이는 %lf 입니다.\n", result);

	return 0;
}

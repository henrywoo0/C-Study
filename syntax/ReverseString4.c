#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열을 입력받아 문자열을 뒤집어 출력하는 프로그램을 작성하시오
// 입력 예 : Hello
// 출력 예 : olleH
// 힌트 : 널문자, 배열의 인덱스 활용

int main(void)
{
	char str[100];
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0')
		i++;

	for (i--; i >= 0; i--)
		printf("%c", str[i]);

	return 0;
}

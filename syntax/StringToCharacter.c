#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열로 입력받고 문자 단위로 출력해보자.

int main(void)
{
	char str[20];
	int i = 0;

	scanf("%s", str);
	// str앞에 &를 안 쓰는 이유
	// 배열의 이름이 주소이기 때문

	printf("문자 단위 출력\n");

	while (str[i] != '\0')
	{
		printf("%c", str[i++]);
	}

	return 0;
}

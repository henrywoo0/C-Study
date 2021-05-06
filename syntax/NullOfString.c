#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[] = "Hello World!\n";

	printf("str = %s\n", str);
	printf("str의 크기 : %d\n", sizeof(str));
	// 왜 13이라고 나올까?

	printf("%d\n", sizeof("Hello"));
	// 왜 6이라고 나올까?

	char str1[10];
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	str1[4] = 'd';

	printf("str1 = %s\n", str1);
	printf("str1의 크기 = %d\n", sizeof(str1));
	printf("널 문자의 값은 %d\n", str1[3]);

	return 0;
}

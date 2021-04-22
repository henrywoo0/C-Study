#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int index;
	char value;
	char str[30] = { 0, };

	printf("초기값 : ");
	scanf("%s", str);

	while (1)
	{
		printf("수정 희망 인덱스 : ");
		scanf("%d", &index);

		getchar();

		printf("수정 값 : ");
		scanf("%c", &value);

		getchar();

		str[index] = value;

		printf("%s\n\n", str);
	}

	return 0;
}

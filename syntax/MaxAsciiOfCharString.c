#include <stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	int max = 0;
	char str[100] = { 0, };

	printf("단어를 입력하세요 : ");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > max)
			max = str[i];
	}

	printf("아스키코드 값이 가장 큰 알파벳 : %c\n", max);

	return 0;
}

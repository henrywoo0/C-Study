#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 영어 문장을 입력받아
// 영어단어의 소문자의 길이(갯수)를 알려주는 프로그램을 만드시오.
// 예시 Hello 라면 4 출력
// I Love you 라면 소문자 개수 6 출력

int main() {
	int i, lower = 0;
	char word[50] = { 0, };
	scanf("%[^\n]", word);
	
	for (i = 0; i < strlen(word); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			lower++;
	}

	printf("소문자 개수 : %d\n", lower);

	return 0;
}

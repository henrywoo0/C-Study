#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(char sentence[])
{
	int len = strlen(sentence);
	int f = 0;
	int l = len - 1;

	while (f <= l)
	{
		if (sentence[f] == ' ' || sentence[f] == '.')
		{
			f++;
			continue;
		}
		if (sentence[l] == ' ' || sentence[l] == '.')
		{
			l--;
			continue;
		}
		if (sentence[f] != sentence[l])
			return false;
		f++;
		l--;
	}

	return true;
}

int main(void)
{
	char str[100] = "";

	scanf("%[^\n]", str);

	printf("%s", solution(str) ? "true" : "false");

	return 0;
}

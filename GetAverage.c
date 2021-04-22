#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	int avg;

	printf("입력점수 : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;

	if (avg >= 80)
		printf("합격! %d", avg);
	else
		printf("불합격! %d", 80 - avg);

	return 0;
}

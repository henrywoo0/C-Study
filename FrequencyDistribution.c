#include <stdio.h>

int main(void)
{
	int a[20] = { 56, 34, 68, 79, 31, 44, 54, 98, 100, 84,
				23, 78, 94, 92, 79, 65, 77, 79, 60, 84 };
	int i, j, histo[11] = { 0, };

	for (i = 0; i < 20; i++)
		histo[a[i] / 10]++;
	for (i = 0; i <= 10; i++)
	{
		printf("%3d : ", i * 10);
		for (j = 0; j < histo[i]; j++)
			printf("★");
		printf("\n");
	}

	return 0;
}

#include <stdio.h>

int main(void)
{
	int a[20] = { 56, 34, 68, 79, 31, 44, 54, 98, 100, 84,
				23, 78, 94, 92, 79, 65, 77, 79, 60, 84 };
	int i, j, rank[20] = { 0, };

	for (i = 0; i < 20; i++)
	{
		rank[i] = 1;
		for (j = 0; j < 20; j++)
		{
			if (a[i] < a[j])
				rank[i]++;
		}
	}

	printf("학생 등수\n");
	for (i = 0; i < 20; i++)
	{
		printf("학번 : %3d, 등수 : %3d\n", i + 1, rank[i]);
	}

	return 0;
}

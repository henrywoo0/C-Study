#include <stdio.h>

int main(void)
{
	int a[20] = { 56, 34, 68, 79, 31, 44, 54, 98, 100, 84,
				23, 78, 94, 92, 79, 65, 77, 79, 60, 84 };
	int i, j, rank[102] = { 0, }; // rank[0] ~ rank[101]

	for (i = 0; i < 10; i++)
		rank[a[i]]++;
	rank[101] = 1;
	for (i = 100; i >= 0; i--)
		rank[i] = rank[i] + rank[i + 1];
	printf("학번 점수 등수\n");
	for (i = 0; i < 20; i++)
		printf("%3d %5d %3d\n", i + 1, a[i], rank[a[i] + 1]);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice1, dice2;
	srand((unsigned)time(NULL));
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	printf("주사위 : %d %d\n", dice1, dice2);

	return 0;
}

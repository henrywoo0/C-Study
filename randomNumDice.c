#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice;
	srand((unsigned)time(NULL));
	dice = rand() % 6 + 1;

	printf("주사위 : %d\n", dice);

	return 0;
}

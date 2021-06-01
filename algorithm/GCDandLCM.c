#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, xy, z;
	int gcd = 0, lcm = 0;

	do {
		x = 0, y = 0;
		printf("두 수를 입력하세요 : ");
		scanf("%d %d", &x, &y);
		xy = x * y;
		if (x > 0 && y > 0)
		{
			while (1)
			{
				z = x % y;
				if (!z)
				{
					gcd = y;
					lcm = xy / y;
					break;
				}
				else
				{
					x = y;
					y = z;
				}
			}
			printf("최대공약수 = %d, 최소공배수 = %d\n", gcd, lcm);
		}
		else if (x != 0 || y != 0)
		{
			printf("양의 정수를 입력하세요. (Quit 0, 0)\n\n");
		}
	} while (x != 0 || y != 0);

	return 0;
}

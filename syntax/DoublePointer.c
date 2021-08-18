#include <stdio.h>

int main()
{
	int i = 7;
	int* p, ** pp;

	p = &i;
	pp = &p;

	printf("p\'s Address = %p\n", p);
	printf("pp\'s Address = %p\n", pp);

	(*p)++;

	printf("i=%d\n", i);
	printf("p\'s Address = %p\n", p);
	printf("pp\'s Address = %p\n", pp);

	return 0;
}

// (*p)++;
// *p++;

// 이 둘은 확연히 다른 것이다.
// *p++; 에서 연산자 우선순위에 의해 p++이 먼저 실행되고, 그 후에 *을 이용해 p가 어딘가를 가리키게 될 것이다. 즉, p가 가리키는 곳의 값을 1 증가시키는 것이 아니라, p의 주소값을 1 증가시키고 p를 가리키게 한다.
// 여기서 *p++; 을 실행하면 원래 정한 곳의 주소가 아닌 이상한 곳을 가리키게 되어 쓰레기값이 나와버린다.

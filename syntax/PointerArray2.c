#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Arr[3][10] = { "Kim", "Hong","Lee" };		// 2차원배열
	char* pArr[3] = { "Kim", "Hong","Lee" };		// 포인터배열
	//char* pArr[3] = { Arr[0], Arr[1], Arr[2] };	// 포인터배열
	
	printf("%s\n", pArr[0]);
	printf("%s\n", pArr[1]);
	printf("%s\n", pArr[2]);
	// arr[i] == *(arr + i)
	printf("%s\n", *pArr); // Kim
	printf("%s\n", *pArr + 1); // im
	printf("%s\n", *pArr + 2); // m

	printf("%s\n", *pArr); // Kim
	printf("%s\n", *(pArr + 1)); // Hong
	printf("%s\n", *(pArr + 2)); // Lee

	return 0;
}

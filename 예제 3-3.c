#include <stdio.h>

int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 1234512345;

	printf("short형의 변수 출력 : %d\n", sh);
	printf("int형의 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long 형 변수 출력 : %lld\n", lln);

	return 0;
}
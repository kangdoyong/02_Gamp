#include <stdio.h>

void main()
{
	// 2진수, 16진수 리터럴 데이터 표현법

	// 2진수 표현법, 0b 접두어
	int n1 = 0b11110000;
	printf("n1의 값은 %d \n", n1);

	// 16진수 표현법, 0x 접두어
	int n2 = 0xf0;
	printf("n2의 값은 %d \n", n2);

	int n3 = 0xba;
	printf("n3의 값은 %d \n", n3);
}
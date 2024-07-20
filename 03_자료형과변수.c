#include <stdio.h>

void main()
{
	// 부동소수점 형식
	// 소수점이 고정되어 있지 않고, 움직이면서 수를 표현한다는 뜻에서 지어진 이름

	// 이름				크기(byte)			유효 자리수
	// float				4					7
	// double				8					15
	
	// float은 값 뒤에 f, F를 붙여서 표현
	float myFloat = 3.14f;
	printf("myFloat의 값은 %f \n", myFloat);

	// 원하는 자리수까지 표시하고 싶다면 %.자리수f
	printf("myFloat의 값은 %.2f \n", myFloat);
	printf("myFloat의 크기는 %d \n", sizeof(myFloat));

	double myDouble = 123.23132;
	printf("myDouble의 값은 %lf \n", myDouble);
	printf("myDouble의 크기는 %d \n", sizeof(myDouble));
	


}

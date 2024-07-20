#include <stdio.h>

// 상수란?
// 변수와는 달리 저장된 값을 바꿀 수 없는 메모리 공간

void main()
{
	// 상수를 선언
	// 변경할 수 없는 공간일 뿐이지
	// 변수와 동일하게 어떤 타입의 데이터를 저장할 것인지 선언해주면 됨

	const float pi = 3.14f;
	// 초기화 한 후, 다른 값을 갖도록 변경할 수 없음
	//pi = 1.23f;
	
	// 상수 선언 시에는 초기화가 강제됨
	// const int a;
	// a = 1;

	printf("pi는 %.2f \n", pi);
	float piClone = pi;
	printf("pi clone은 %.2f \n", piClone);
}

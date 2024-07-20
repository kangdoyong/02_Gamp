#include <stdio.h>

// 열거형이란?
// 서로 연관된 상수들의 집합

void main()
{
	// 열거형 선언
	// enum 열거형이름 { 해당 열거형이 갖는 상수들을 순차적으로 나열 };
	// 상수를 문자열 형태로 표현 가능

	// 열거한 문자열 순서대로 넘버링이 자동적으로 적용됨
	// 0부터 시작
	enum ButtonType { YES = 3, NO, OK = 1, CANCLE };

	// 의미있는 상수 데이터들을 집합으로 모아두고, 문자열을 대체함으로써
	// 코드의 가독행 및 생산선을 향상

	// 열거형 변수 선언
	enum ButtonType myButtonType = YES;

	printf("myButtonType 은 %d n", myButtonType);
}
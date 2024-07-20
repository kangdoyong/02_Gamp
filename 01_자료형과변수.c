// 변수
// 우리가 이전까지 사용하던 리터럴 데이터는 사용이 끝나면 사라지는 데이터입니다.
// 하지만 프로그래밍을 하게되면 계속해서 유지해야 하는 데이터가 필요한 경우가 있음
// 이 때, 변수를 사용

// 값을 대입시켜 변화시킬 수 있는 요소이며, 데이터를 담는 일정한 크기의 공간 입니다.
// 크기는 변수 선언 시, 지정한 데이터 타입에 따라 결정

// 데이터 타입
// c언에서 사용할 수 있는 데이터 타입은 크게
// "정수 형식"과 "실수 형식"으로 나눌 수 있습니다.

// 정수 타입
// 이름			크기(byte)			표현할 수 있는 범위

// 부호 있는 정수 (signed) - 음수, 양수 표현 가능
// char				1				-128~127
// short			2				-32768~32767
// int				4				약 -21억 ~ 약 21억
// long				4				약 -21억 ~ 약 21억
// long long		8				약 -922경 ~ 약 922경

// 부호 없는 정수 (unsigned) - 양수만 표현 가능
// unsigned char			1				0 ~ 255
// unsigned short			2				0 ~ 65535
// unsigned int				4				0 ~ 약 42억
// unsigned long			4				0 ~ 약 42억
// unsigned long long		8				0 ~ 약 1844경
// (shift + alt + 방향키 누르면 여러 줄 같은 문자(unsigned) 쓸 수 있음)

#include <stdio.h>

void main()
{
	// 변수를 선언합니다.
	// 데이터타입 식별자(변수 이름)
	char myChar;
	// 선언한 변수에 값을 할당시킵니다.
	myChar = 'c';

	// 변수 myChar의 값을 출력
	printf("myChar의 값은 %d \n", myChar);
	// sizeof 연산자를 이용하여, 해당하는 변수나 타입 등의 크기를 반환 받을 수 있다.
	printf("myChar의 크기는 % d \n", sizeof(myChar));

	// 변수 선언과 동시에 값을 할당할 수 있음 (변수를 초기화한다고 표현)
	short myShort = 2305;
	int myInt = 23423232;
	long myLong = 2324424;
	long long myLL = 2342423424234;

	// short cut(단축키)
	// ctrl + c - 해당 라인 아무데나 커서를 두고 복사
	// ctrl + v - 붙여넣을 라인 아무데나 커서를 두고 붙여넣기
	// alt + shift + 방향키 - 여러줄 선택

	printf("short size : %d \n", sizeof(myShort));
	printf("int size : %d \n", sizeof(myInt));
	printf("long size : %d \n", sizeof(myLong));
	printf("long long size : %d \n", sizeof(myLL));

	// 변수의 선언과 정의, 초기화
	// 선언 : 어떠한 타입의 데이터를 사용하겠다 라고 컴파일러(컴퓨터)에게 알림
	// 식별자 : 선언한 변수를 사용할 때, 이용할 변수의 이름을 뜻하며,
	//			같은 코드 블록 내에서 동일한 이름의 식별자를 사용할 수 없음
	// 정의 : 선언한 변수에 대입 연산자 =를 사용하여 값을 할당
	// 초기화 : 변수 선언 시, 처음에는 쓰레기 값이 들어가게 됨
	//			이러한 쓰레기 값을 제거하기 위하여 주로 사용
	//			변수를 선언과 동시에 정의하는 행위를 초기화라고 표현
}
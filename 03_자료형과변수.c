#include <stdio.h>

void main()
{
	// �ε��Ҽ��� ����
	// �Ҽ����� �����Ǿ� ���� �ʰ�, �����̸鼭 ���� ǥ���Ѵٴ� �濡�� ������ �̸�

	// �̸�				ũ��(byte)			��ȿ �ڸ���
	// float				4					7
	// double				8					15
	
	// float�� �� �ڿ� f, F�� �ٿ��� ǥ��
	float myFloat = 3.14f;
	printf("myFloat�� ���� %f \n", myFloat);

	// ���ϴ� �ڸ������� ǥ���ϰ� �ʹٸ� %.�ڸ���f
	printf("myFloat�� ���� %.2f \n", myFloat);
	printf("myFloat�� ũ��� %d \n", sizeof(myFloat));

	double myDouble = 123.23132;
	printf("myDouble�� ���� %lf \n", myDouble);
	printf("myDouble�� ũ��� %d \n", sizeof(myDouble));
	


}

#include <stdio.h>;




int main(void)
{
	Notation();
	FloatError();

	return 0;
}


int Notation(void)
{

	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값 : %d \n", num1);
	printf("0x43의 10진수 정수 값 : %d \n", num2);
	printf(" 032의 10진수 정수 값 : %d \n", num3);
	printf(" 024의 10진수 정수 값 : %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%d+%d=%d \n", num3, num4, num3+num4);
	return 0;
}

int FloatError(void)
{
	int i;
	float num= 0.0;

	for(i =0; i<100; i++)
	{
		num+=0.1;
	}

	printf("0.1을 100번 더한 결과 : %f \n", num);
	return 0;

	// 어라! 10이 나와야 하는데. 10.000002가 나왔다! 
	// -> 컴퓨터는 실수를 정확히 표현하는게 아니라 아주 가까운, 문제가 없을 만큼의 근사치를 통해 실수를 표현한다.
	// 이러한 오차는 아주 작은것들이 모여 만들어지는 것으로 '부동 소수점 오차'라고 한다.
}
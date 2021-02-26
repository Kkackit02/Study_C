#include <stdio.h>

int num;
int num1 = 0, num2 = 0; // 변수 num1, num2의 선언
// 가능하다면 int num;로 쓰레기 값이 변수에 저장되지 않도록 변수 선언시 0으로 초기화하도록 하자.
int num3 = 30, num4 = 40; //변수 num3, num4의 선언 및 초기화

int main(void)

{
	SimpleAddOne();
	VarDeclAndlnit();
	return 0;

}


int SimpleAddOne(void)
{
	3+4;
	return 0;
}


int VarDeclAndlnit(void)
{
	
	num=20;
	printf("%d", num);

	printf("num1 : %d, num2: %d \n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1 : %d, num2: %d \n", num1, num2);
	printf("num3 : %d, num4: %d \n", num3, num4);
	return 0;

}
// 중괄호 내에 변수를 선언할 경우, 변수의 선언문은 중괄호의 앞부분에 위치해야한다.
	
/*
	-----------------------
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	--------< O K >--------
	-----------------------
	int num1;
	num1 = 0;
	int num2;
	num2 = 0;
	--------< N O >--------

*/


// 변수의 이름은 알파벳, 숫자, 언더바(_) 로 구성된다.
// C언어는 대소문자를 구분한다. num과 Num은 다른 변수
// 변수의 이름은 숫자로 시작 불가능, 키워드도 변수의 이름으로 사용 할 수 없다.
// 이름 사이에 공백이 삽입될 수 없다.
// 변수의 이름을 정할 때에는 변수의 역할에 어울리는, 의미있는 이름을 지어야한다 -> CleanCode 참고하기 + 팀 내 규칙



int SimpleAddTwo(void)
{
	int num1 = 3;
	int num2 = 4;
	
	int result =num1 + num2;

	printf("덧셈결과 : %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);
	return 0;




}

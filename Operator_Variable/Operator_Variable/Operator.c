#include <stdio.h>

int num;
int num1 = 0, num2 = 0; // 변수 num1, num2의 선언
// 가능하다면 int num;로 쓰레기 값이 변수에 저장되지 않도록 변수 선언시 0으로 초기화하도록 하자.
int num3 = 30, num4 = 40; //변수 num3, num4의 선언 및 초기화

int main(void)

{
	SimpleAddOne();
	VarDeclAndlnit();
	OperatorOne();
	OperatorTwo();
	OperatorThree();
	OperatorFour();
	OperatorFive();
	CommaOperate();
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


int OperatorOne(void) // 대입 연산자와 산술 연산자
{
	int num1 = 9, num2 = 2;

	printf("%d+%d=%d \n", num1, num2, num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%dX%d=%d \n", num1, num2, num1*num2);
	printf("%d/%d의 목=%d \n", num1, num2, num1/num2);
	printf("%d/%d의 나머지=%d \n", num1, num2, num1%num2);

	return 0;


	/*
	  복합 대입 연산자
	a = a+b  <>  a += b
	a = a-b  <>  a -= b
	a = a*b  <>  a *= b
	a = a/b  <>  a /= b
	a = a%b  <>  a %= b

	*/
}


int OperatorTwo(void) //+, - 연산자
{	
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1 : %d \n", num1);
	num2 = -num2;
	printf("num2 : %d \n", num2);
	return 0;

}

/*
num1=-num2;
num1-=num2;

헷갈리지않게 잘 표시할것.
num1 = -num2;
num1 -= num2;
*/

int OperatorThree(void) //증가, 감소 연산자
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("num2: %d \n", ++num2);
	printf("num2: %d \n\n", num2);
	return 0;
	// num1++ 후위증가(행동 후 증가)
	// ++num1 전위증가(증가 후 행동)
	// --도 동일(대신 감소)
	
}


int OperatorFour(void) //관게 연산자
{
	int num1 = 10;
	int num2 = 12;

	int result1, result2, result3;

	result1 = (num1==num2);
	result2 = (num1<=num2);
	result3 = (num1>num2);

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	return 0;

	/*
	A<B A가 B보다 작은가?
	A>B A가 B보다 큰가?
	A==B A와 B가 같은가?
	A!=B A와 B가 다른가?
	A<=B A가 B보다 같거나 작은가?
	A>=B A가 B보다 같거나 큰가?
	*/
}

int OperatorFive(void) // 논리연산자
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1==10 && num2==12);  // 논리AND : 둘 다 참이면 '참'을 반환 
	result2 = (num1<12 || num2>12);    // 논리OR : 둘 중 하나라도 참이면 '참'을 반환
	result3 = (!num1);				   // 논리NOT : 참이면 '거짓', 거짓이면 '참'을 반환
	//->> 논리연산자보다 관계연산자가 먼저 실행됨!!

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3); // C언어에서는 0이 아닌 모든 값을 참(true)로 간주

	return 0;
}


int CommaOperate(void) //콤마 연산자
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ",num2), printf("\n"); //Hello world, 2, 3
	return 0;
}



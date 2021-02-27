#include <stdio.h>;


int main(void)
{
	exam_01();
	exam_02();
}


int exam_01()
{
	//입력받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성해보자. 단 비트 연산자로만 풀기
	int num1, result;
	printf("문제 1의 정수를 입력해주십시오. \n");
	scanf("%d", &num1);
	printf("%d \n",num1);
	result = ~num1 + 1; 

	printf("문제 1의 정답 : %d \n", result);
	return 0;
}


int exam_02()
{
	//다음 연산의 결과를 출력하는 프로그램을 작성하자. 단 * 연산자와 / 연산자를 사용하지 않고 구현해야한다.
	int result = 3;

	result = result<<3;
	result = result>>2;

	printf("문제 2의 정답 : %d \n", result);
	return 0;
}
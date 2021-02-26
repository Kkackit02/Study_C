/*
제 목 : Hello world 출력하기 및 예제 2개
기 능 : 문자열의 출력
파일이름 : Hello.c
수정 날짜 : 2021. 02. 24
작성자 : 정근녕(Kkackit)
*/

#include <stdio.h> //헤더파일 선언


int main(void)
{

	printf("Hello world! \n");

	exam_1();
	exam_2();
	


	return 0; // 1: 함수를 호출한 영역으로 값을 전달(반환), 2: 현재 실행중인 함수의 종료

}

int exam_1(void)
{
	printf("홍길동 \n홍 길 동 \n홍  길  동\n");
	return 0;
	//printf를 한 번 사용할 것.

}


int exam_2(void)
{
	printf("Name : 정근녕\n");
	printf("Adress : 서울특별시 동작구");
	printf("Phone : 010-9066-XXXX\n");
	return 0;
	//printf를 세 번 사용할 것.
}

/* 출력 형태 , 함수 이름 , 입력 형태
{ 함수의 몸체 }

 출력의 형태라는 표현은 함수임을 강조할 때 사용, 실제로는 반환형(return type)이라는 표현이 자주 사용

 기본으로 제공되는 함수를 '표준함수'라고 함. 이 표준함수들의 모임을 표준 라이브러리라고 함.
 */
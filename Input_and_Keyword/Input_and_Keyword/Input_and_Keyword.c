#include <stdio.h>;


int main(void)
{
	SimpleAddOne();
	SimpleAddTwo();
	SimpleAddThree();
}


int SimpleAddOne(void)
{
	int num;

	scanf("%d", &num); //키보드로 입력된 정수를 변수 num에 저장하라
	//scanf 함수를 이용해 키보드를 이용한 다양한 데이터를 입력 받을 수 있음.

	//"%d' -> 10진수 정수 형태의 입력(%d는 서식문자), &num -> 변수 num에 저장하라.

	printf("num : %d \n", num);
	return 0;
}



int SimpleAddTwo(void)
{
	int result;
	int num1, num2;

	printf("정수 one : ");
	scanf("%d", &num1);
	printf("정수 two : ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	return 0;
}


int SimpleAddThree(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf 함수는 공백을 기준으로 데이터를 구분 -> 스페이스바, 탭, 엔터키를 정수 사이에 넣어야함

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);

	return 0;
}

/*


KeyWord

auto	_Bool	break	case
char	_Complex	const	continue
default	do	double	else
enum	extern	float	for
goto	if	_Imaginary	return
restrict	short	signed	sizeof
static	struct	switch	typedef
union	unsigned	void	volatile
while

-> 프로그래머가 다른 용도로 사용할 수 없도록 제한됨.
-> 이미 용도가 결정된 단어들

*/
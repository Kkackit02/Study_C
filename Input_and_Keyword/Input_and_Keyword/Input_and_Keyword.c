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

	scanf("%d", &num); //Ű����� �Էµ� ������ ���� num�� �����϶�
	//scanf �Լ��� �̿��� Ű���带 �̿��� �پ��� �����͸� �Է� ���� �� ����.

	//"%d' -> 10���� ���� ������ �Է�(%d�� ���Ĺ���), &num -> ���� num�� �����϶�.

	printf("num : %d \n", num);
	return 0;
}



int SimpleAddTwo(void)
{
	int result;
	int num1, num2;

	printf("���� one : ");
	scanf("%d", &num1);
	printf("���� two : ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	return 0;
}


int SimpleAddThree(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf �Լ��� ������ �������� �����͸� ���� -> �����̽���, ��, ����Ű�� ���� ���̿� �־����

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

-> ���α׷��Ӱ� �ٸ� �뵵�� ����� �� ������ ���ѵ�.
-> �̹� �뵵�� ������ �ܾ��

*/
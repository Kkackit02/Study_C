#include <stdio.h>

int num;
int num1 = 0, num2 = 0; // ���� num1, num2�� ����
// �����ϴٸ� int num;�� ������ ���� ������ ������� �ʵ��� ���� ����� 0���� �ʱ�ȭ�ϵ��� ����.
int num3 = 30, num4 = 40; //���� num3, num4�� ���� �� �ʱ�ȭ

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
// �߰�ȣ ���� ������ ������ ���, ������ ������ �߰�ȣ�� �պκп� ��ġ�ؾ��Ѵ�.
	
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


// ������ �̸��� ���ĺ�, ����, �����(_) �� �����ȴ�.
// C���� ��ҹ��ڸ� �����Ѵ�. num�� Num�� �ٸ� ����
// ������ �̸��� ���ڷ� ���� �Ұ���, Ű���嵵 ������ �̸����� ��� �� �� ����.
// �̸� ���̿� ������ ���Ե� �� ����.
// ������ �̸��� ���� ������ ������ ���ҿ� ��︮��, �ǹ��ִ� �̸��� ������Ѵ� -> CleanCode �����ϱ� + �� �� ��Ģ



int SimpleAddTwo(void)
{
	int num1 = 3;
	int num2 = 4;
	
	int result =num1 + num2;

	printf("������� : %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d��(��) %d�� ���� %d�Դϴ�.\n", num1, num2, result);
	return 0;
}


int OperatorOne(void) // ���� �����ڿ� ��� ������
{
	int num1 = 9, num2 = 2;

	printf("%d+%d=%d \n", num1, num2, num1+num2);
	printf("%d-%d=%d \n", num1, num2, num1-num2);
	printf("%dX%d=%d \n", num1, num2, num1*num2);
	printf("%d/%d�� ��=%d \n", num1, num2, num1/num2);
	printf("%d/%d�� ������=%d \n", num1, num2, num1%num2);

	return 0;


	/*
	  ���� ���� ������
	a = a+b  <>  a += b
	a = a-b  <>  a -= b
	a = a*b  <>  a *= b
	a = a/b  <>  a /= b
	a = a%b  <>  a %= b

	*/
}


int OperatorTwo(void) //+, - ������
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

�򰥸����ʰ� �� ǥ���Ұ�.
num1 = -num2;
num1 -= num2;
*/

int OperatorThree(void) //����, ���� ������
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
	// num1++ ��������(�ൿ �� ����)
	// ++num1 ��������(���� �� �ൿ)
	// --�� ����(��� ����)
	
}


int OperatorFour(void) //���� ������
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
	A<B A�� B���� ������?
	A>B A�� B���� ū��?
	A==B A�� B�� ������?
	A!=B A�� B�� �ٸ���?
	A<=B A�� B���� ���ų� ������?
	A>=B A�� B���� ���ų� ū��?
	*/
}

int OperatorFive(void) // ��������
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1==10 && num2==12);  // ��AND : �� �� ���̸� '��'�� ��ȯ 
	result2 = (num1<12 || num2>12);    // ��OR : �� �� �ϳ��� ���̸� '��'�� ��ȯ
	result3 = (!num1);				   // ��NOT : ���̸� '����', �����̸� '��'�� ��ȯ
	//->> �������ں��� ���迬���ڰ� ���� �����!!

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3); // C������ 0�� �ƴ� ��� ���� ��(true)�� ����

	return 0;
}


int CommaOperate(void) //�޸� ������
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ",num2), printf("\n"); //Hello world, 2, 3
	return 0;
}



#include <stdio.h>

int num;
int num1 = 0, num2 = 0; // ���� num1, num2�� ����
// �����ϴٸ� int num;�� ������ ���� ������ ������� �ʵ��� ���� ����� 0���� �ʱ�ȭ�ϵ��� ����.
int num3 = 30, num4 = 40; //���� num3, num4�� ���� �� �ʱ�ȭ

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

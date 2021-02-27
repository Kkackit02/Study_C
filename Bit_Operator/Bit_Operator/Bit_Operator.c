#include <stdio.h>;


int main(void)
{
	BitAndOperate();
	BitOrOperate();
	BitXorOperate();
	BitNotOperate();
	BitLeftShift();
	BitRightShift();
}




int BitAndOperate(void)
{
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00000000 00010100
	int num3 = num1 & num2;
	printf("AND ������ ��� : %d \n", num3); //-> 4 :
	//00001111 -> 15
	//00010100 -> 20
	//XXXXXOXX
	//00000100 -> 4

	return 0;
}

int BitOrOperate(void)
{
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00000000 00010100
	int num3 = num1|num2;
	printf("OR ������ ��� : %d \n", num3); // 31
	//00001111 -> 15
	//00010100 -> 20
	//XXXOOOOO
	//00011111 -> 31
	return 0;
}


int BitXorOperate(void)
{
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00000000 00010100
	int num3 = num1 ^ num2;
	printf("XOR ������ ��� : %d \n", num3); // 27
	//00001111 -> 15
	//00010100 -> 20
	//XXXOOXOO
	//00011011 -> 27
	return 0;
}

int BitNotOperate(void)
{
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = ~num1;
	printf("NOT ������ ��� : %d \n", num2); // -16
	//00001111 -> 15
	//-> ����!! 00010000 = 16
	//11110000 -> -16
	
	return 0;
}


int BitLeftShift(void)
{
	int num =15;  // 00000000 00000000 00000000 00001111

	int result1 = num<<1; //num�� ��Ʈ ���� �������� 1ĭ�� �̵�
	int result2 = num<<2; //num�� ��Ʈ ���� �������� 2ĭ�� �̵�
	int result3 = num<<3; //num�� ��Ʈ ���� �������� 3ĭ�� �̵�

	printf("1ĭ �̵� ��� : %d \n",result1); //30
	printf("1ĭ �̵� ��� : %d \n",result2); //60
	printf("1ĭ �̵� ��� : %d \n",result3); //120
	return 0;

	// ��Ʈ�� �������� ��ĭ �ű涧���� ���� ���� �ι谡 �ȴ�.
	// ���������� ��ĭ �ұ�� ���� ���� 2�� ����������.
	// �̵��ϸ鼭 ���� ����°� 0, �Ѿ�� ������ ������
}

int BitRightShift(void)
{
	int num = -16; // 11111111 11111111 11111111 11110000
	printf("2ĭ ������ �̵��� ��� : %d \n", num>>2);
	printf("3ĭ ������ �̵��� ��� : %d \n", num>>3);

	// ��Ʈ�� ���������� �̵���Ű�°� ��ǻ���� CPU���� ����� �ٸ���.
	// �̵��� 1�� ä��� CPU�� �ְ�, 0�� ä��� CPU�� �ִ�.

	// 0�� ä���� ��� 00111111 11111111 1111111 11111100 
	// 1�� ä���� ��� 11111111 11111111 1111111 11111100 -4 
	return 0;
}

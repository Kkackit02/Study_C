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
	printf("AND 연산의 결과 : %d \n", num3); //-> 4 :
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
	printf("OR 연산의 결과 : %d \n", num3); // 31
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
	printf("XOR 연산의 결과 : %d \n", num3); // 27
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
	printf("NOT 연산의 결과 : %d \n", num2); // -16
	//00001111 -> 15
	//-> 보수!! 00010000 = 16
	//11110000 -> -16
	
	return 0;
}


int BitLeftShift(void)
{
	int num =15;  // 00000000 00000000 00000000 00001111

	int result1 = num<<1; //num의 비트 열을 왼쪽으로 1칸씩 이동
	int result2 = num<<2; //num의 비트 열을 왼쪽으로 2칸씩 이동
	int result3 = num<<3; //num의 비트 열을 왼쪽으로 3칸씩 이동

	printf("1칸 이동 결과 : %d \n",result1); //30
	printf("1칸 이동 결과 : %d \n",result2); //60
	printf("1칸 이동 결과 : %d \n",result3); //120
	return 0;

	// 비트를 왼쪽으로 한칸 옮길때마다 정수 값이 두배가 된다.
	// 오른쪽으로 한칸 롬기면 정수 값이 2로 나누어진다.
	// 이동하면서 새로 생기는건 0, 넘어가는 값들을 버려짐
}

int BitRightShift(void)
{
	int num = -16; // 11111111 11111111 11111111 11110000
	printf("2칸 오른쪽 이동의 결과 : %d \n", num>>2);
	printf("3칸 오른쪽 이동의 결과 : %d \n", num>>3);

	// 비트를 오른쪽으로 이동시키는건 컴퓨터의 CPU마다 결과가 다르다.
	// 이동시 1을 채우는 CPU도 있고, 0을 채우는 CPU도 있다.

	// 0이 채워진 경우 00111111 11111111 1111111 11111100 
	// 1이 채워진 경우 11111111 11111111 1111111 11111100 -4 
	return 0;
}

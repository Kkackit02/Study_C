#include <stdio.h>


int main(void)
{
	exam_01();
	exam_02();
	exam_03();
	exam_04();
	exam_05();

}


int exam_01(void)
{
	int num1, num2, result1, result2;
	
	printf("Input num1, num2 \n");
	scanf("%d %d", &num1, &num2);

	result1 = num1-num2;
	result2 = num1*num2;

	printf("%d - %d = %d \n", num1, num2, result1);
	printf("%d * %d = %d \n", num1, num2, result2);
	return 0;
}


int exam_02(void)
{
	int num1, num2, num3, result;

	printf("Input num1, num2, num3 \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	
	printf("%dX%d+%d=%d \n", num1, num2, num3, result);
	
	return 0;
}


int exam_03(void)
{
	int num1, result;
	printf("Input num1 \n");
	scanf("%d", &num1);
	result = num1 * num1;
	printf("%d^2=%d \n", num1, result);

	return 0;
}

int exam_04(void)
{
	int num1, num2, result1, result2;
	printf("Input num1, num2 \n");
	scanf("%d %d", &num1, &num2);
	result1 = num1/num2;
	result2 = num1%num2;

	printf("%d / %d = %d...%d \n", num1, num2, result1, result2);

	return 0;
}


int exam_05(void)
{
	int num1, num2, num3, result;
	printf("Input num1, num2, num3 \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("(%d-%d)X(%d+%d)X%(%d%%%d)=%d \n",num1,num2,num2,num3,num3,num1,result); // "%%" ´Â % Ãâ·Â
	return 0;


}
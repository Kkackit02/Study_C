#include <stdio.h>;


int main(void)
{
	exam_01();
	exam_02();
}


int exam_01()
{
	//�Է¹��� ���� ���� ��ȣ�� �ٲ㼭 ����ϴ� ���α׷��� �ۼ��غ���. �� ��Ʈ �����ڷθ� Ǯ��
	int num1, result;
	printf("���� 1�� ������ �Է����ֽʽÿ�. \n");
	scanf("%d", &num1);
	printf("%d \n",num1);
	result = ~num1 + 1; 

	printf("���� 1�� ���� : %d \n", result);
	return 0;
}


int exam_02()
{
	//���� ������ ����� ����ϴ� ���α׷��� �ۼ�����. �� * �����ڿ� / �����ڸ� ������� �ʰ� �����ؾ��Ѵ�.
	int result = 3;

	result = result<<3;
	result = result>>2;

	printf("���� 2�� ���� : %d \n", result);
	return 0;
}
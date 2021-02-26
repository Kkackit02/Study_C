#include <stdio.h>

int main(void)
{
	printOne();
	printTwo();
	exam01();
	exam02();
}


int printOne(void)
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	return 0;	
}

int printTwo(void)
{
	printf("My age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	return 0;
}


int exam01(void)
{
	printf("제 이름은 홍길동입니다.\n");
	printf("제 나이는 %d이고요.\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123,456);
	return 0;
}

int exam02(void)
{
	printf("%d X %d =%d\n",4,5,4*5);
	printf("%d X %d =%d\n",7,9,7*9);
	return 0;
}


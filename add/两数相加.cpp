#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0, num2 = 0,sum=0;
	printf("请依次输入两个数字以相加>>\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("%d", sum);
	return 0;
}
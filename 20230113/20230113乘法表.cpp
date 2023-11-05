#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a=1;a<=9;a++)
	{
		for (b=9;b>=1;b--)
		{
			int d = 0;
			int c = 0;
			d = 10 - b;
			c = a * d;
			if (d >= a)
			{
				printf("%d*%d=%2d ", a, d, c);//运算式本身
			}
			else if (d < a)
			{
				printf("       ");//前面部分空格，从a*a开始才打印式子，其他时间打印空格
			}
		}
		printf("\n");
	}
	return 0;
}
打印99乘法表
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//先输入10个整数存在数组中
	int n = 0;
	int arr[10] = { 0 };
	for (n = 0; n < 10; n++)
	{
		scanf("%s", arr[n]);
	}
	//然后利用函数比较大小
	int max = 0;
	for (n = 0; n, 10; n++)
	{
		if (arr[n] >= arr[n + 1])
		{
			max = arr[n];
		}
		else if (arr[n + 1] >= arr[n])
		{
			max = arr[n + 1];
		}
	}
	printf("%d", max);
	return 0;
}
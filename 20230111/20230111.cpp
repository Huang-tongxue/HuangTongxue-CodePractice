#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
// 打印100内三的倍数
//#include<stdio.h>
//int main()
//{
//	for (int i = 3; i <= 100; i+=3)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
// // 输入三个数按从大到小的顺序打印
//#include<stdio.h>
//void ch(int* a, int* b)
//{
//	if (*a <= *b)
//	{
//		int t = 0;
//		t = *a;
//		*a = *b;
//		*b = t;
//	}
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d", &a );
//	scanf("%d", &b );
//	scanf("%d", &c );
//	ch(&a, &b);
//	ch(&a, &c);
//	ch(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// //打印100到200之间素数
//#include<stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	for (n = 101, i = 2; n<=200; n+=2)
//	{
//		for (i = 2; i <= n / 2; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//			if (i == n / 2 && n % i != 0)
//			{
//				printf("%d\n", n);
//			}
//		}
//
//	}
//	return 0;
//}
//打印闰年1000-2000
//#include<stdio.h>
//int main()
//{
//	int year = 1000, i = 0;
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		if ( year % 100 == 0  )
//		{
//			if (year % 400 != 0)
//			{
//				continue;
//			}
//		}
//		printf("%d  ", year);
//	}
//
//	return 0;
//}

//作业标题(656)
//最大公约数
//
//作业内容
//给定两个数，求这两个数的最大公约数
//
//例如：
//
//输入：20 40
//
//输出：20
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)//将a变为较小的数
	{
		int t = 0;
		t = a;
		a = b;
		b = t;
	}
	int n = 0;
	n = a;//变量n从a开始依次减小
	for ( ; n > 0; n--)//一次循环减小1
	{
		if (b % n == 0 && a % n == 0)//在循环过程如果两个数除以n'都没余数
		{
			printf("%d", n);//便打印n，此时其便是最大公约数
			break;//跳出循环
		}
	}
	return 0;
}
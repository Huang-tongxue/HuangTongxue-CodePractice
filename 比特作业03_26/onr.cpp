#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void pt(int n)
{
	if (n >= 10)
	{
		pt(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		pt(num);
	}
	return 0;
}




//#include<stdio.h>
//int P(int n)
//{
//	if (n > 1)
//	{
//		n = n * P(n - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("递归方法%d\n", P(n));//递归的方法
//	//非递归的方法
//	int sumx = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sumx = sumx * i;
//	}
//	printf("非递归方法%d", sumx);
//	return 0;
//}


//#include<stdio.h>
//int BandS(int n)
//{
//	int m = 0;
//	int sum = 0;
//	if (n >= 10)
//	{
//		m = n % 10;
//		sum = m + BandS(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num))
//	{
//		printf("%d\n", BandS(num));
//	}
//}



////递归实现n的k次方
//#include<stdio.h>
//int i = 0;
//int NK(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * NK(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	while (scanf("%d", &n) != EOF && scanf("%d", &k) != EOF)
//	{
//		printf("%d\n", NK(n, k));
//	}
//	return 0;
//}




//斐波那契数列
//int fib(int n)
//{
//	int a = 1, b = 1, c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		for (; n >= 3; n--)
//		{
//			c = a + b;
//			b = a;
//			a = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("您想要知道第几个数的值？");
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		printf("它是>>%d\n您想要知道第几个数的值？", fib(n));
//		scanf("%d", &n);
//	}
//}
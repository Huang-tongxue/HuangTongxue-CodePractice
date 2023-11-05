#define _CRT_SECURE_NO_WARNINGS 1
//求两个数的最大公约和最小公倍
//#include<stdio.h>
//int yue(int x,int y)
//{
//	int m = 0, n = 0;//m是余数，n是商
//	while (x % y != 0)
//	{
//		m = x % y;
//		n = x / y;
//		x = y;
//		y = m;
//	}
//	return y;
//}
//int bei(int x , int y)
//{
//	
//	int n = 0;
//	(x > y ? n = x : n = y);
//	if (n % x == 0 && n % y == 0)
//	{
//		return n;
//	}
//	else
//	{
//		while (n % x != 0 || n % y != 0)
//		{
//			n++;
//			if (n % x == 0 && n % y == 0)
//			{
//				return n;
//			}
//		}
//    }
//}
//int main()
//{
//	int a = 0, b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		printf("%d\n", yue(a, b) + bei(a, b));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[20] = {};
//    scanf("%s", arr);
//    while (arr[n] != 0)
//    {
//        if (arr[n] % 2 == 0)
//        {
//            printf("0");
//        }
//        else
//        {
//            printf("1");
//        }
//        n++;
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//描述
//输入两个整数a, b, 输出a 除以b的余数，5除以2的余数为1，10除以4的余数为2
//
//输入描述：
//输入两个整数，在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//
//    int a = 0, b = 0;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    a = a % b;
//    printf("%d", a);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n > 0) {
//        printf("Happy new year!Good luck!\n");
//        n--;
//    }
//    return  0;
//}
//描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//
//输出描述：
//输出一个值，为求和结果。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    long sum = 0;
//    scanf("%d", &n);
//    for (; n > 0; n--)
//    {
//        sum = sum + n;
//    }
//    printf("%ld", sum);
//    return 0;
//}
//描述
//输入一个整数a, 求个位数
//
//输入描述：
//输入一个整数, 在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a = a % 10;
//    printf("%d", a);
//    return 0;
//}
//描述
//牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。请你判断 x 是否在 l 和 r 之间 （即是否存在
//l≤x≤r ）
//输入描述：
//依次输入 x ，l ，r 三个整数。用空格隔开。
//输出描述：
//如果存在
//l≤x≤r  则输出 true ，否则输出 false
//示例1
//#include <stdio.h>
//
//int main()
//{
//    int x = 0;
//    int l = 0, r = 0;
//    scanf("%d", &x);
//    scanf("%d", &l);
//    scanf("%d", &r);
//    if (x >= l && x <= r)
//    {
//        printf("true");
//    }
//    if (x<l || x>r)
//    {
//        printf("false");
//    }
//    return 0;
//}
// 描述
//判断一个整数n是否是闰年
//输入描述：
//输入一个整数
//1≤n≤2018）
//输出描述：
//是闰年输出"yes" 否则输出"no"
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 100 == 0)
//	{
//		if (n % 400 == 0)
//		{
//			printf("yes");
//		}
//		else
//			printf("no");
//	}
//	else if (n % 4 == 0)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
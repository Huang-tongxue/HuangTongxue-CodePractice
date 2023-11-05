#define _CRT_SECURE_NO_WARNINGS 1
//总成绩 = 实验成绩 * 20 % +课堂表现成绩 * 10 % +过程考核成绩 * 20 % +期末上机考试成绩 * 50 % ，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
//输入描述：
//一行，包括四个整数（百分制），用空格分隔，分别表示实验成绩，课堂表现成绩，过程考核成绩，期末上机考试成绩。
//输出描述：
//一行，总成绩，保留小数点一位
//输入：100 100 90 80
//输出：88.0
//#include<stdio.h>
//int main()
//{
//	float a = 0, b = 0, c = 0, d = 0;
//	scanf("%f %f %f %f", &a, &b, &c, &d);
//	float sum = 0;
//	sum = a / 5 + b / 10 + c / 5 + d / 2;
//	printf("%.1f", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    float a = 0, b = 0, c = 0, d = 0;
//    scanf("%f %f %f %f", &a, &b, &c, &d);
//    float sum = 0;
//    sum = (a + b - c) * d;
//    printf("%.0f", sum);
//    return 0;
//}
//#include <stdio.h>
//
//int max3(int a,int b,int c)
//{
//    if (a >= b)
//    {
//        if (a >= c)
//        {
//            return a;
//        }
//        else
//        {
//            return c;
//        }
//    }
//    else if (b >= a)
//    {
//        if (b >= c)
//        {
//            return b;
//        }
//        else
//        {
//            return c;
//        }
//    }
//}
//int main()
//{
//    float m = 0.0;
//    float a = 0.0, b = 0.0, c = 0.0;
//    scanf("%f %f %f", &a, &b, &c);
//    m =(float)max3(a + b, b, c) / (float)((float)max3(a, b + c, c) +(float) max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int add(int a,int b)//两个数相加，用函数来实现
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d", (add(a, b)));
//	return 0;
//}
//***********************//判断两个数大小
//#include <stdio.h>
//int main() {
//    int n = 0;
//    while (n < 3) {
//        int a = 0, b = 0;
//        scanf("%d %d", &a, &b);
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a = b)
//            printf("%d=%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        n++;
//    } return 0;
//}
//*******
//**************************
//一次性输入十个数，并相隔空格并依次输出

//int main()
//{
//    int n = 0;
//    int score[20] = { 0 };
//    while (n < 10)
//    {
//        scanf("%d", &score[n]);
//        n++;
//    }
//    int j = 0;
//    while (j < 10)
//    {
//        printf("%d", score[j]);
//        j++;
//    }
//
//    return 0;
//}
//*********************************************
//#include <stdio.h>//输入数字并判断奇偶性
//
//int main() {
//    int num = 0, n = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        if (num % 2)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//        n++;
//
//    }
//}
//******************************
//输入描述：
//多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
//输出描述：
//针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。
//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) != EOF)
//    {
//        int n = 0;
//        for (n = 0; n < num; n++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//******************************************************
//描述
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数）。

//#include <stdio.h>
//
//int main()
//{
//    float sum = 0, n = 0;
//    float ave = 0;
//    while (scanf("%f", &ave) != EOF && n < 5)
//    {
//        sum += ave;
//        n++;
//    }
//    printf("%.1f", (sum / 5));
//    return 0;
//}
//**************************************


#define _CRT_SECURE_NO_WARNINGS 1
//描述
//输入一个十六进制数a，和一个八进制数b，输出a + b的十进制结果（范围 - 231~231 - 1）。
//输入描述：
//一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
//输出描述：
//一行，a + b的十进制结果。
//示例1
//输入：
//0x12 05
//复制
//输出：
//23
//复制
//备注：
//十六进制Hexadecimal一般以0x开头，例如0xFF。八进制Octal，一般以0开头，例如07。
//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%x", &a);
//    scanf("%o", &b);
//    printf("%d", a + b);
//    return 0;
//}
//描述
//给你两个整数，要求输出这两个整数的和
//
//
//输入描述：
//输入两个整数 a, b （0 <= a, b <= 1000）
//输出描述：
//输出一个整数.
//示例1
//输入：
//1 2
//复制
//输出：
//3
//#include <stdio.h>
//
//int main() {
//    int a = 0, sum = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        sum = sum + a;
//    }
//    printf("%d", sum);
//    return 0;
//}
//描述
//输入两个整数a, b, 输出a / b的值，只保留整数部分
//输入描述：
//输入两个整数, 在int范围内
//输出描述：
//输出一个整数
//示例1
//输入：
//5 2
//复制
//输出：
//2
//#include <stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    a = a / b;
//    printf("%d", a);
//    return 0;
//}
//描述
//给定一个浮点数，要求得到该浮点数的个位数。
//
//数据范围： 0 < n \le 200 \0 < n≤200
//	输入描述：
//	一行，包括一个浮点数。
//	输出描述：
//	一行，包含一个整数，为输入浮点数对应的个位数。
//	示例1
//	输入：
//	13.141
//	复制
//	输出：
//	3
//#include <stdio.h>
//
//int main() {
//    float a = 0;
//    scanf("%f", &a);
//    int b = 0;
//    b = (int)a % 10;
//    printf("%d", b);
//    return 0;
//}
//描述
//牛牛正在给他的朋友们买电影票，已知一张电影票价是100元，计算 x 位朋友的总票价是多少？
//输入描述：
//输入一个正整数 x ，表示牛牛的朋友个数
//输出描述：
//输出总票价 （牛牛不需要给自己买票）
//示例1
//输入：
//1
//复制
//输出：
//100
//#include<stdio.h>
//int main() {
//    int x = 0;
//    int sum = 0;
//    scanf("%d", &x);
//    sum = 100 * x;
//    printf("%d", sum);
//    return 0;
//}
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的正方形图案。
//输入描述：
//多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数。
//
//输出描述：
//针对每行输入，输出用“ * ”组成的对应边长的正方形，每个“ * ”后面有一个空格。
//
//示例1
//输入：
//4
//复制
//输出：
//* ***
//****
//****
//****
//#include <stdio.h>
//int main() {
//    int l = 0;//定义l为边长
//    int i = 0, j = 0;//
//    while (scanf("%d", &l) != EOF) //要求多组输入，应用库函数scanf的返回值特点
//    {
//        for (i = 0; i < l; i++)//用for循环限制纵向行数
//        {
//            for (j = 0; j < l; j++)//限制横向个数
//            {
//                printf("* ");
//            }
//            printf("\n");//换行
//        }
//    }
//    return 0;
//}
//描述
//今天是圣诞节，牛牛要打印一个漂亮的圣诞树送给想象中的女朋友，请你帮助他实现梦想。
//输入描述：
//输入圣诞树的大小 nn
//1≤n≤81≤n≤8
//输出描述：
//输出对应的圣诞树
//#include<stdio.h>
//int main()
//{
//	/*打印一个基础图形*/
//	/*每个图形由上一个图形三个叠加而成，因此循环要建立在此规则上*/
//	/*图形分树干和树枝*/
//	//树干部分
//	printf("  *  \n * * \n* * *");
//	int n = 1;
//	scanf("%d", &n);
//	int i = 0;
//	while (i < (1<<n))
//	{
//		printf("  *  \n * * \n* * *");
//		i++;
//	}
//	return 0;
//}
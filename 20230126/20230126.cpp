#define _CRT_SECURE_NO_WARNINGS 1
//描述
//输入一个整数，求其十位数
//
//
//输入描述：
//输入一个整数，在int范围内
//输出描述：
//输出一个整数
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    n = n % 100;
//    int g = 0;
//    g = n % 10;
//    n = n - g;
//    n = n / 10;
//    printf("%d", n);
//    return 0;
//}
//描述
//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//
//数据范围：
//0
//≤
//?
//≤
//31
//
//0≤n≤31
//输入描述：
//一行输入整数n（0 <= n < 31）。
//	输出描述：
//	输出对应的2的n次方的结果。
//	示例1
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", 2 << (n - 1));
//    return 0;
//}

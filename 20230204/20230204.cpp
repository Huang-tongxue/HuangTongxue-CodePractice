#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    float r1 = 0.0, r2 = 0;
//    scanf("%f  %f", &r1, &r2);
//    float c = 0;
//    c = (r1 * r2) / (r1 + r2);
//    printf("%.1f", c);
//    return 0;
//}
//描述
//牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。
//
//π×h×r2，其中
//π  取 3.14 ，
//h  和r  是整数。
//输入描述：
//输入杯子的高度 h ，底面半径 r 。
//输出描述：
//输出牛牛最少要喝多少杯水
//int main()
//{
//	float r = 0, h = 0, v = 0;
//	int n = 0;
//	scanf("%f %f", &h, &r);
//	v = r * r * h * 3.14;
//	float V = 10000;
//	n = V / v;
//
//	if (n * v !=V)
//	{
//		n++;
//	}
//	printf("%d", n);
//}
//描述
//牛牛刚接触等差数列， 他知道等差数列是每项与前一项的差值都相等的数列，已知第一项 a 和第二项 b 的值，他想知道第三项是多少。
//输入描述：
//输入等差数列的第一、二项 a ， b
//输出描述：
//输出等差数列第三项的值
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d", &a, &b);
//	c = b + (b - a);
//	printf("%d", c);
//	return 0;
//}
//描述
//牛牛有一个半径为 r 的球，他想知道这个球的体积。
//
//球的体积公式是
// r 是一个整数
//输入描述：
//输入球的半径
//输出描述：
//输出球的体积
//int main()
//{
//	int r = 0;
//	float v = 0.0;
//	scanf("%d", &r);
//	v = 3.14 * 4 / 3 * r * r * r;
//	printf("%.2f", v);
//	return 0;
//}
//描述
//小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
//
//输入描述：
//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//
//输入格式：hour : minute k(如hour或minute的值为1，输入为1，而不是01)
//
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//
//输出描述：
//对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。
//int main() {
//    int h = 0, m = 0, k = 0;
//    scanf("%d:%d", &h, &m);
//    scanf("%d", &k);
//    int H = 0, M = 0;
//    H = k / 60;
//    M = k % 60;
//    h = h + H;
//    m = m + M;
//    if (h > 23) {
//        h = h % 24;
//    }
//    if (m >= 60) {
//        H = m / 60;//很容易忽略掉分钟位置进上来的一个
//        m = m % 60;
//        h = h + H;
//    }
//    printf("%#02d:%#02d", h, m);
//    return 0;
//}
//描述
//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//
//输入描述：
//每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//
//输出描述：
//对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。

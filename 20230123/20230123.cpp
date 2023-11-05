#define _CRT_SECURE_NO_WARNINGS 1
//输入描述：
//输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
//输出描述：
//输出一个数字，表示开学日期是星期几。
//#include<stdio.h>
//int main() {
//    int day = 0;
//    int week = 0;
//    scanf("%d", &week);
//    scanf("%d", &day);
//    day = day % 7;
//    week = week + day;
//    if (week > 7)
//    {
//        week = week - 7;
//    }
//    printf("%d", week);
//    return 0;
//}
//描述
//给定秒数 seconds ，把秒转化成小时、分钟和秒。
//
//数据范围：
//	0 < seconds < 100000000
//	输入描述：
//	一行，包括一个整数，即给定的秒数。
//	输出描述：
//	一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
//#include<stdio.h>
//int main()
//{
//    int second = 0;
//    scanf("%d", &second);
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    h = second / 3600;
//    m = (second % 3600) / 60;
//    s = (second % 3600) % 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
//描述
//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
//
//输入描述：
//多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
//输出描述：
//针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    int end = 0;
//    while ((scanf("%d", &n)) != EOF && (scanf("%d", &h)) != EOF && (scanf("%d", &m)) != EOF)
//    {
//        end = n - (m / h);
//        if (m % h != 0)
//        {
//            end--;
//        }
//        printf("%d\n", end);
//    }
//    return 0;
//}
//描述
//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c, c = 5 / 9 * (f - 32)
//输入描述：
//输入一个浮点数f(1 <= f <= 100000)
//输出描述：
//输出浮点数, 保留3位小数
//#include <stdio.h>
//
//int main()
//{
//    float f = 0;
//    scanf("%f", &f);
//    float c = 0;
//    c = (5.0 / 9) * (f - 32);
//    printf("%.3f", c);
//    return 0;
//}
//描述
//牛牛有一个半径为 r 的圆，请你计算这个圆的面积。
//其中
//π  取 3.14
//输入描述：
//输入一个半径 r
//输出描述：
//输出圆的面积
//#include <stdio.h>
//
//int main() {
//    double s = 0;
//    int  r = 0;
//    scanf("%d", r);
//    s = r * r * 3.14;
//    printf("%lf", s);
//    return 0;
//}
// 描述
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐修改后得到的数字。
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        int w = n % 10;
//        if (0 == w % 2)
//        {
//            w = 0;
//        }
//        else
//        {
//            w = 1;
//        }
//        ret += w * pow(10, i++);
//        n /= 10;
//    }
//
//    printf("%d\n", ret);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a = 4.5;
//	float b = 0.25;
//	float c = 0;
//	c = a * b;
//	printf("%f", c);
//}

#define _CRT_SECURE_NO_WARNINGS 1
//描述
//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。
//
//数据范围：
//	0 < a, b, c≤100000
//	输入描述：
//	一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//	输出描述：
//	一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float ci = 0;
//    float s = 0;
//    float a = 0, b = 0, c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    ci = a + b + c;
//    float d = ci / 2.0;
//    s = sqrt(d * (d - a) * (d - b) * (d - c));
//    printf("circumference=%.2f area=%.2f", ci, s);
//    return 0;
//}
//输入描述：
//两行，
//
//第1行，正整数n（1≤n≤100）
//
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述：
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    float score = 0;
//    float l = 0, r = 0;
//    float sum = 0;
//    scanf("%d", &n);
//    int tm = n;
//    scanf("%f", &l);
//    scanf("%f", &r);
//    int t = 0;
//    sum = l + r;
//    if (r < l)
//    {
//        t = r;
//        l = r;
//        r = t;
//    }
//    while ((n - 2) > 0)
//    {
//        scanf("%f", &score);
//        sum = sum + score;
//        if (score < l)
//        {
//            l = score;
//        }
//        if (score > r)
//        {
//            r = score;
//        }
//        n--;
//    }
//    float a = 0;
//    a = sum / tm;
//    printf("%.2f %.2f %.2f", r, l, a);
//    return 0;
//}

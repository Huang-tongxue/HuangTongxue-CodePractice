#define _CRT_SECURE_NO_WARNINGS 1
//�ܳɼ� = ʵ��ɼ� * 20 % +���ñ��ֳɼ� * 10 % +���̿��˳ɼ� * 20 % +��ĩ�ϻ����Գɼ� * 50 % ����������KiKi�ĸ���ɼ��������KiKi���ܳɼ���
//����������
//һ�У������ĸ��������ٷ��ƣ����ÿո�ָ����ֱ��ʾʵ��ɼ������ñ��ֳɼ������̿��˳ɼ�����ĩ�ϻ����Գɼ���
//���������
//һ�У��ܳɼ�������С����һλ
//���룺100 100 90 80
//�����88.0
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
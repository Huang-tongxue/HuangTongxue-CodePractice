#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int add(int a,int b)//��������ӣ��ú�����ʵ��
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
//***********************//�ж���������С
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
//һ��������ʮ������������ո��������

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
//#include <stdio.h>//�������ֲ��ж���ż��
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
//����������
//�������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������
//���������
//���ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�
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
//����
//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС������
//
//����������
//һ�У���������5����������Χ0~100�����ÿո�ָ���
//���������
//һ�У����5������ƽ����������һλС������

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


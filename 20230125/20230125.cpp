#define _CRT_SECURE_NO_WARNINGS 1
//����
//������������a, b, ���a ����b��������5����2������Ϊ1��10����4������Ϊ2
//
//����������
//����������������int��Χ��
//���������
//���һ������
//#include <stdio.h>
//
//int main()
//{
//
//    int a = 0, b = 0;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    a = a % b;
//    printf("%d", a);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n > 0) {
//        printf("Happy new year!Good luck!\n");
//        n--;
//    }
//    return  0;
//}
//����
//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//
//����������
//����һ��������n(1 �� n �� 109)
//
//���������
//���һ��ֵ��Ϊ��ͽ����
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    long sum = 0;
//    scanf("%d", &n);
//    for (; n > 0; n--)
//    {
//        sum = sum + n;
//    }
//    printf("%ld", sum);
//    return 0;
//}
//����
//����һ������a, ���λ��
//
//����������
//����һ������, ��int��Χ��
//���������
//���һ������
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    a = a % 10;
//    printf("%d", a);
//    return 0;
//}
//����
//ţţ�Ӽ����������� x �����ұ߽� l �� r �����������������ж� x �Ƿ��� l �� r ֮�� �����Ƿ����
//l��x��r ��
//����������
//�������� x ��l ��r �����������ÿո������
//���������
//�������
//l��x��r  ����� true ��������� false
//ʾ��1
//#include <stdio.h>
//
//int main()
//{
//    int x = 0;
//    int l = 0, r = 0;
//    scanf("%d", &x);
//    scanf("%d", &l);
//    scanf("%d", &r);
//    if (x >= l && x <= r)
//    {
//        printf("true");
//    }
//    if (x<l || x>r)
//    {
//        printf("false");
//    }
//    return 0;
//}
// ����
//�ж�һ������n�Ƿ�������
//����������
//����һ������
//1��n��2018��
//���������
//���������"yes" �������"no"
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 100 == 0)
//	{
//		if (n % 400 == 0)
//		{
//			printf("yes");
//		}
//		else
//			printf("no");
//	}
//	else if (n % 4 == 0)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
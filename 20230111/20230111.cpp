#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
// ��ӡ100�����ı���
//#include<stdio.h>
//int main()
//{
//	for (int i = 3; i <= 100; i+=3)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
// // �������������Ӵ�С��˳���ӡ
//#include<stdio.h>
//void ch(int* a, int* b)
//{
//	if (*a <= *b)
//	{
//		int t = 0;
//		t = *a;
//		*a = *b;
//		*b = t;
//	}
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d", &a );
//	scanf("%d", &b );
//	scanf("%d", &c );
//	ch(&a, &b);
//	ch(&a, &c);
//	ch(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// //��ӡ100��200֮������
//#include<stdio.h>
//int main()
//{
//	int n = 0, i = 0;
//	for (n = 101, i = 2; n<=200; n+=2)
//	{
//		for (i = 2; i <= n / 2; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//			if (i == n / 2 && n % i != 0)
//			{
//				printf("%d\n", n);
//			}
//		}
//
//	}
//	return 0;
//}
//��ӡ����1000-2000
//#include<stdio.h>
//int main()
//{
//	int year = 1000, i = 0;
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		if ( year % 100 == 0  )
//		{
//			if (year % 400 != 0)
//			{
//				continue;
//			}
//		}
//		printf("%d  ", year);
//	}
//
//	return 0;
//}

//��ҵ����(656)
//���Լ��
//
//��ҵ����
//���������������������������Լ��
//
//���磺
//
//���룺20 40
//
//�����20
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)//��a��Ϊ��С����
	{
		int t = 0;
		t = a;
		a = b;
		b = t;
	}
	int n = 0;
	n = a;//����n��a��ʼ���μ�С
	for ( ; n > 0; n--)//һ��ѭ����С1
	{
		if (b % n == 0 && a % n == 0)//��ѭ�������������������n'��û����
		{
			printf("%d", n);//���ӡn����ʱ��������Լ��
			break;//����ѭ��
		}
	}
	return 0;
}
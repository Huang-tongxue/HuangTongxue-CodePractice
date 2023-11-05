#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//½×³ËµÝ¹é
//int fac(int n)
//{
//	if (n != 1)
//	{
//		return n * fac(n - 1);
//	}
//	else return 1;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	return 0;
//}
// ³Ë·¨±í
//#include<stdio.h>
//int main()
//{
//	int n = 0;//
//	scanf("%d", &n);
//	int a = 0;
//	int b = 0,p = 0;
//	for (a = 1;a<=n;a++)
//	{
//		for (b =1;b<=n;b++)
//		{
//			p = a * b;
//			if (b < a)
//			{
//				printf("            ");
//			}
//			else if (b >= a && b <= n)
//			{
//				printf("%3d *%3d=%3d", a, b, p);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ÅÐ¶ÏËØÊý
//#include<stdio.h>
//int is_su(int n)
//{
//	int i = 2;
//	while (i <= n)
//	{
//		if (i == n)
//		{
//		return 1;
//		}
//		else if (n % i == 0)
//		{
//			return 0;
//		}
//		
//		i++;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	for (n = 101;n<=200;n += 2)
//	{
//		if (is_su(n) == 1)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}
// º¯ÊýÊµÏÖÅÐ¶ÏÈòÄê
//int is_run(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 == 0)
//		{
//			if (n % 400 == 0)
//			{
//				return 1;
//			}
//			else
//				return 0;
//		}
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)
//	{
//		if (is_run(year) == 1)
//		{
//			printf("ÊÇ\n");
//		}
//		else
//		{
//			printf("·ñ\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//void change(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 4, b = 5;
//	printf("a = %d  b = %d\n", a, b);
//	change(&a, &b);
//	printf("a = %d  b = %d", a, b);
//	return 0;
//}

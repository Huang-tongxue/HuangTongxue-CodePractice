#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	float j = 0;
//	int a = 7; float x = 2.5, y = 4.7;
//	j=x + a % 3 * (int)(x + y) % a / 4;
//	printf("%f", j);
//	return 0;
//}
//***************
//int main()
//{
//	int a, b, c;
//	a = b = c=1;
//	if (a++ || ++b)
//		c++;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d", a);
//	return 0;
//}*****************
//int main()
//{
//	int a =0, b =0, c = 0;
//	if (a++ && ++b)
//		c++;
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//
//	return 0;
//}
//*****************
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, m = 2, n = 2;
//	(m = a>b ) && (n = c > d);
//	printf("%d", n);
//	return 0;
//}
//****************************
//int main()
//{
//	int n = 0;
//	while (n++ <= 2);
//	printf("%d", n);
//	return 0;
//}
//****************
//int main()
//{
//	int y = 1, x;
//	for (y = 1; y < 10;)
//		y = ((x = 3 * y, x + 1), x - 1);
//	printf("%d,%d", x, y);
//	return 0;
//}
//***********************
//int main()
//
//{
//
//	char c = 'a';
//
//	if ('a' < c <= 'z') printf("LOW");
//
//	else printf("UP");
//
//	return 0;
//
//}
//******************************************
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char src[40];
//	char dest[100];
//
//	memset(dest, '\0', sizeof(dest));
//	strcpy(src, "This is runoob.com");
//	strcpy(dest, src);
//
//	printf("最终的目标字符串： %s\n", dest);
//
//	return(0);
//}
//*************************************
//char st[] = "hello,friend!";
//
//void func2(int i);
//
//void func1(int i)
//
//{
//
//	printf("%c", st[i]);
//
//	if (i < 3) { i += 2; func2(i); }
//
//}
//
//void func2(int i)
//
//{
//
//	printf("%c", st[i]);
//
//	if (i < 3) { i += 2; func1(i); }
//
//}
//
//int main()
//
//{
//
//	int i = 0;
//
//	func1(i);
//
//	printf("\n");
//
//	return 0;
//
//}
//**************************************************
//void f(int a[], int i, int j)
//
//{
//
//	int t;
//
//	if (i < j)
//
//	{
//
//		t = a[i];
//
//		a[i] = a[j];
//
//		a[j] = t;
//
//		f(a, i + 1, j - 1);
//
//	}
//
//}
//
//int main()
//
//{
//
//	int i, a[5] = { 1,2,3,4,5 };
//
//	f(a, 0, 4);
//
//	for (i = 0; i < 5; i++)
//
//		printf("%d,", a[i]);
//
//	return 0;
//
//}
//****************************************
//void fun(int k)
//
//{
//
//	int m = 0, n = 0, i;
//
//	do {
//
//		i = k % 10;
//
//		if (i == 0) m++;
//
//		if (i == 1) n++;
//
//		k =k/10;
//
//	} while (k);
//
//	printf("m=%d,n=%d\n", m, n);
//
//}
//
//void main()
//
//{
//
//	int num;
//
//	scanf("%d", &num);
//
//	fun(num);
//
//}
//**************************




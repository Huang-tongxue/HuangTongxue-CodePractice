#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

void Change(int* p, int* q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

int mian()
{
	int a = 5, b = 3;
	printf("a=%d,b=%d\n", a, b);
	Change(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	printf("\n");
//}
//void BubbleSort(int bubble[],int sz)
//{
//	for (int i = 0,flag = 1; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (bubble[j] > bubble[j + 1])
//			{
//				int t = 0;
//				t = bubble[j + 1];
//				bubble[j + 1] = bubble[j];
//				bubble[j] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			return;
//		}
//	}
//}
//
//int main(void)
//{
//	int bubble[5] = { 9,8,7,5,6 };
//	int sz = sizeof(bubble) / sizeof(*bubble);
//	print(bubble, sz);
//	BubbleSort(bubble,sz);
//	print(bubble, sz);
//	return 0;
//}




//#define MAX 10
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	
//}
//
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	printf("\n");
//}
//
//void reverse(int arr[])
//{
//	int i = 0, j = MAX - 1;
//	while (i <= j)
//	{
//		int a = arr[j];
//		arr[j] = arr[i];
//		arr[i] = a;
//		i++; j--;
//	}
//}
//int main(void)
//{
//	int Zint[MAX] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(Zint) / sizeof(*Zint);
//	print(Zint, sz);
//	reverse(Zint);
//	print(Zint, sz);
//	init(Zint, sz);
//	print(Zint, sz);
//	return 0;
//}


//int main(void)
//{
//	char A[] = "12345";
//	char B[] = "67890";
//	printf("%s\n", A);
//	printf("%s\n", B);
//	int sz = sizeof(A) / sizeof(*A);
//	int i = 0;
//	char* a = A, * b = B;
//	for (i = 0; i < sz; i++,a++,b++)
//	{
//		char t;
//		t = *a;
//		*a = *b;
//		*b = t;
//	}
//	printf("%s\n", A);
//	printf("%s\n", B);
//	return 0;
//}
//{
//	printf("%d", sizeof("abc"));
//	return 0;
//}



////第一个题，用函数实现，
//void Month(int n)
//{
//	if (n < 0 || n>12)
//
//	{
//		printf("输入数值有误！！\n");
//		return;
//	}
//	char months[] = "JanFebMarAprMayJunJulAugSepOctNovDec"; 
//	char* p = months;
//	for (int i = 3; i < n*3; i++)
//	{
//		p++;
//	}
//	for (int j = 0 ; j < 3; j++)
//	{
//		printf("%c", *p);
//		p++;
//	}
//	printf("\n");
//}
//
//
//int main(void)
//{
//	//1
//	int n = 0;
//	printf("Please input month:");
//	scanf("%d", &n);
//	Month(n);
//	return 0;
//}

////存期1，利率，利息
//void Power(int Sum,int year, double lilv)
//{
//	for (int i = 0; i < year; i++)
//	{
//		Sum = Sum + Sum * lilv;
//
//	}
//	printf("%lf", Sum);
//}


//double Power(double x, int y)
//{
//	assert(x);
//	if (y == 0)
//	{
//		return 1;
//	}
//	else
//		x = (100 + x)/100;
//	for (int j = 0; j < y; j++)
//	{
//		x = x * x;
//	}
//	return x;
//}
//int main()
//{
//	int year = 4;
//	double Sum = 100.0;
//	double l = 2.1;
//	Sum = Sum * Power(l, year);
//	printf("%.3lf\n", Sum);
//	return 0;
//}

//double Sum(double depost)
//{
//	double interest;
//	interest = depost * 2.1 / 100;
//	return (depost + interest);
//}
//int main()
//{
//	double Depost = 50000.0;
//	int year = 4;
//	for (int i = 0; i < year; i++)
//	{
//		Depost = Sum(Depost);
//	}
//	printf("%.3lf\n", Depost);
//	return 0;
//}
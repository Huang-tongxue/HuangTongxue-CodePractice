#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////n的阶乘
//int one(int n)
//{
//	int sum = 1, i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", one(n));//调用求n的阶乘的函数
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int A5[5] = {0};
//	while (  i <= 4)
//	{
//		scanf("%d", A5[i]);
//		i++;
//	}
//	int min = 9999,max = -999;
//	for (i = 0; i <= 4; i++)
//	{
//		if (A5[i] > max)
//		{
//			max = A5[i];
//		}
//		if (A5[i] < min)
//		{
//			min = A5[i];
//		}
//	}
//	printf("Min = %d  Max = %d\n", min ,max);
//	int x1 = 0, x2 = 0;//两个下标的存储点
//	for (i = 0; i + 1<= 4; i++)
//	{
//		if (A5[i] > A5[i + 1])
//		{
//			x1 = i + 1;
//			x2 = i;
//		}
//		if (A5[i] < A5[i + 1])
//		{
//			x1 = i;
//			x2 = i + 1;
//		}
//	}
//	printf("下标分别是x1 = %d,x2 = %d\n", x1, x2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A[5] = { 5,6,78,95,62};
//	int B[5] = { 9,25,64,85,91};
//	printf("A =");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\nB =");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		int t = 0;
//		t = A[i];
//		A[i] = B[i];
//		B[i] = t;
//	}
//	printf("A =");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\nB =");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	return 0;
//}
//*****************
//#include<stdio.h>
//int v(x)
//{
//	if (x <= -5)
//	{
//		int y = 0;
//		y = 2 * x;
//		return y;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", v(x));
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
//	int a = 3, b = 5;
//	printf("a = %d b =%d\n", a, b);
//	change(&a, &b);
//	printf("a = %d b =%d", a, b);
//
//}
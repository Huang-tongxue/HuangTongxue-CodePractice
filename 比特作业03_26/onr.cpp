#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void pt(int n)
{
	if (n >= 10)
	{
		pt(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		pt(num);
	}
	return 0;
}




//#include<stdio.h>
//int P(int n)
//{
//	if (n > 1)
//	{
//		n = n * P(n - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�ݹ鷽��%d\n", P(n));//�ݹ�ķ���
//	//�ǵݹ�ķ���
//	int sumx = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sumx = sumx * i;
//	}
//	printf("�ǵݹ鷽��%d", sumx);
//	return 0;
//}


//#include<stdio.h>
//int BandS(int n)
//{
//	int m = 0;
//	int sum = 0;
//	if (n >= 10)
//	{
//		m = n % 10;
//		sum = m + BandS(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num))
//	{
//		printf("%d\n", BandS(num));
//	}
//}



////�ݹ�ʵ��n��k�η�
//#include<stdio.h>
//int i = 0;
//int NK(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * NK(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	while (scanf("%d", &n) != EOF && scanf("%d", &k) != EOF)
//	{
//		printf("%d\n", NK(n, k));
//	}
//	return 0;
//}




//쳲���������
//int fib(int n)
//{
//	int a = 1, b = 1, c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		for (; n >= 3; n--)
//		{
//			c = a + b;
//			b = a;
//			a = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("����Ҫ֪���ڼ�������ֵ��");
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		printf("����>>%d\n����Ҫ֪���ڼ�������ֵ��", fib(n));
//		scanf("%d", &n);
//	}
//}
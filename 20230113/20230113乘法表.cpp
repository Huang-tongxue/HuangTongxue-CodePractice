#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a=1;a<=9;a++)
	{
		for (b=9;b>=1;b--)
		{
			int d = 0;
			int c = 0;
			d = 10 - b;
			c = a * d;
			if (d >= a)
			{
				printf("%d*%d=%2d ", a, d, c);//����ʽ����
			}
			else if (d < a)
			{
				printf("       ");//ǰ�沿�ֿո񣬴�a*a��ʼ�Ŵ�ӡʽ�ӣ�����ʱ���ӡ�ո�
			}
		}
		printf("\n");
	}
	return 0;
}
��ӡ99�˷���
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//������10����������������
	int n = 0;
	int arr[10] = { 0 };
	for (n = 0; n < 10; n++)
	{
		scanf("%s", arr[n]);
	}
	//Ȼ�����ú����Ƚϴ�С
	int max = 0;
	for (n = 0; n, 10; n++)
	{
		if (arr[n] >= arr[n + 1])
		{
			max = arr[n];
		}
		else if (arr[n + 1] >= arr[n])
		{
			max = arr[n + 1];
		}
	}
	printf("%d", max);
	return 0;
}
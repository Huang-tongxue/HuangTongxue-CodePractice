#define _CRT_SECURE_NO_WARNINGS 1
//31����1��2��3��..., 1000��1000�������У�����λ��������ʮλ����7����(��170��270��375��)��ʾ������
//������͡�
//#include<stdio.h>
//int main()
//{
//	int n = 0, sum = 0;
//	for(n = 1; n <= 1000; n++)
//	{
//		if (n / 10 == 0)
//		{
//			continue;
//		}
//		if ((n / 10) % 10 == 7)
//		{
//			sum = sum + n;
//		}
//	}
//	printf("%d", sum);
//	return 0;//52450
//}
//32����һά�����е�n��1 < n <= 10���������з�����, �������
//	���磺a[5] = { 1,2,3,4,5 } ��Ϊ  a[5] = { 5,4,3,2,1 }�����Ϊ��54321��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[] = { 56,25,48,65,21,35,57,96 };
//	n = sizeof(arr) / sizeof(arr[0]);
//	printf("����ԭ���ǣ�");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int t = 0;
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++; right--;
//	}
//	printf("\n�������֮���ǣ�");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//31����100 - 999��Χ������ʮλ���Ͱ�λ����Ϊ9������, ����Ļ�����, ��ͳ�����ǵĸ�����
//����ʾ��100 - 999��Χ�ڵ�����, ʮλ���Ͱ�λ����Ϊ9��������990��991��.....�ȡ�
//#include<stdio.h>
//int main()
//{
//	int n = 0, count = 0,t = 0;
//	for (n = 100, count = 0; n <= 999; n++)
//	{
//		t = n;
//		n = n / 10;
//		if (n % 10 == 9)
//		{
//			n = n / 10;
//			if (n % 10 == 9)
//			{
//				printf("%d\n", t);
//				count++;
//			}
//		}
//		n = t;
//	}
//	printf("count = %d", count);
// return 0;
//}
//32���Ӽ�������10���������ݣ���������a �У��������ֵ��������Ԫ�ص��±�λ�ã��������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {10,52,62,98,5,6,32,54,85,48};
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	scanf("%s", arr[i]);
//	//}
//	int max = -999,x = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			x = i;
//		}
//	}
//	printf("������ %d,�±���%d", max, x);
//	return 0;
//}
//37������һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E����
//90������Ϊ��A����80��89��Ϊ��B����70��79��Ϊ��C����60��69Ϊ��D����60������Ϊ��E��
#include<stdio.h>
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >=90 && score <=100 )
		{
			printf("A\n");
		}
		if (score >= 80&& score <=89 )
		{
			printf("B\n");
		}
		if (score >= 70&& score <= 79)
		{
			printf("C\n");
		}
		if (score >= 60&& score <= 69)
		{
			printf("D\n");
		}
		if (score <= 59)
		{
			printf("E\n");
		}
		else
		{
			printf("�ɼ�����������������");
		}
	}
	return 0;
}
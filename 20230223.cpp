#define _CRT_SECURE_NO_WARNINGS 1
//ð������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 18,54,43,64,15,6,75,8,9,52 };
//	for (int n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	printf("\n");
//	int i = 0, j = 0,sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);//ͨ��sizeof�����ʮ��Ԫ��
//	for (i = 0;i < sz;i ++)//ѭ��ʮ�ˣ�ÿ��һ������һ��
//	{
//		for (int n = 0,j = sz - i;j >= 0 ;j--)//ÿ��һ������һ�飬������һ������������arr[n+1]���ܳ�������
// //��Ȼ�ͻ���Խ�����������ױ���***********
//		{
//			if(n + 1 <= sz - 1)//��������
//			if (arr[n] > arr[n + 1])
//			{
//				int t = 0;
//				t = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = t;
//			}
//			n++;
//		}
//	}
//	for (int n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	printf("\n");
//	return 0;
//}
//�������򷨳���
#include<stdio.h>
int main()
{
	int arr[10] = { 18,54,43,64,15,6,75,8,9,52 };//�´���һ������
	//��һ����Ĭ������ԭ����˳�����Դӵڶ�������ʼ
	//����Ԫ��һ��һ����ʼ�Ƚϣ�֪������û����С��֮���֮��嵽ǰ��
	for (int n = 0; n < 10; n++)//�ȴ�ӡһ��
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 1;
	while (n < sz  )
	{
		int tem = n;
		if (n < 0)
		{
			n = tem;
			n++;
			break;
		}
		int t = 0;
		t = arr[n];
		if (arr[n - 1] > arr[n])
		{
			arr[n] = arr[n - 1];
			arr[n - 1] = t;
		}
		else if(n >= 0)//������оͼ��������ң�ֱ����һ��Ԫ��
		{
			n--;
			continue;
		}

	}
	for (int n = 0; n < 10; n++)
		{
			printf("%d ", arr[n]);
		}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

///������
typedef struct ST
{
	int age;//4
	float tall;//8
	char name[];//C99�涨���������飬�ṹ�����һ������
}ST;

void BubbleSort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz -1; i++)//n�������ܹ�����n-1��
	{
		int  flag = 1;//Ĭ��Ϊ�Ѿ��������
		int tmp;//��ʱ�������ڽ���
		for (int j = 0; j < sz - i-1 ; j++)
		{
			if (arr[j] > arr[j + 1])//���������������λ��
			{
				flag = 0;//λ�÷����仯����Ҫ�ж�
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			
		}
		if (flag == 1)
		{
			return;
		}
	}

}

//void BubbleSort(int arr[], int len)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < len - 1; i++)//ȷ����������
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0; j < len - 1 - i; j++)//ȷ���Ƚϴ���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;//������
//			}
//		}
//		if (flag == 0)//���û�н�����Ԫ�أ����Ѿ�����
//		{
//			return;
//		}
//	}
//}

///��ӡ���
void MyPrint(int arr[MAX])
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
}


int main(void)
{
	int TextData1[MAX] = { 0,1,2,3,4,5,6,7,8,9 };
	int TextData2[MAX] = { 9,8,7,4,5,6,3,2,1,0 };
	///����֮ǰ
	MyPrint(TextData1);//��ӡ�鿴
	MyPrint(TextData2);
	int sz = sizeof(TextData2) / sizeof(TextData2[0]);//�󳤶�
	///����֮��
	BubbleSort(TextData1, sz);//�ٴδ�ӡ
	BubbleSort(TextData2, sz);
	MyPrint(TextData1);
	MyPrint(TextData2);


	//����һ��forѭ����break��continue��return������
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 6; i++)//��ѭ��
	//{
	//	for (j = 0; j < 6; j++)//��ѭ�� 
	//	{
	//		if (i == 2 && j == 4)
	//		{
	//			continue;
	//		}
	//		if (i == 3 && j == 3)
	//		{
	//			break;
	//		}
	//	}
	//	if (i == 4)
	//	{
	//		break;
	//	}
	//}
	//printf("i = %d\n", i);
	//printf("j = %d\n", j);
	//�����ܽᣬ���ϴ�����continue��forѭ���л���������ѭ���еĺ����������䣬����������������䣬��������Ƕ��
	//��break����������ѭ����ʣ�µ�������䣬Ҳ����������䣬��������Ƕ��
	return 0;
}
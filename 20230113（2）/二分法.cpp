#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ����(664)
//���ֲ���
//
//��ҵ����
//��д������һ���������������в��Ҿ����ĳ����
//
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include<stdio.h>
#include<string.h>
int main()
{
	int zhao = 0;
	printf("��Ҫ�ҵ����ǣ�\n>>__");
	scanf("%d", &zhao);
	int n = 0, sz = 0;
	int left = 0, right = 0;
	int mid = 0,w=0;
	int arr[] = { 12,13,15,16,18,19,20,25,29,26,36,37,58,69,78,89,92,93,95,96,97,98,99 };
	sz = (sizeof(arr)) / (sizeof(arr[0]));
	for (n = 0; (arr[mid] != zhao) && (n < sz); n++)
	{
		left = 0;
		right = sz-1;
		mid = left + (right - left) / 2;
		if (arr[mid] > zhao)
		{
			right = mid;
		}
		if (arr[mid] < zhao)
		{
			left = mid;
		}
		if (arr[mid] == zhao)
		{
			printf("�ҵ����±���%d", mid);
			w = 1;
			break;
		}
	
	}
	if (n != 1)
	{
		printf("û�ҵ�");
	}
	return 0;
}
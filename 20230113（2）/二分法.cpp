#define _CRT_SECURE_NO_WARNINGS 1

//作业标题(664)
//二分查找
//
//作业内容
//编写代码在一个整形有序数组中查找具体的某个数
//
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include<stdio.h>
#include<string.h>
int main()
{
	int zhao = 0;
	printf("你要找的数是？\n>>__");
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
			printf("找到了下标是%d", mid);
			w = 1;
			break;
		}
	
	}
	if (n != 1)
	{
		printf("没找到");
	}
	return 0;
}
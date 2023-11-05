#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
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
//	sz = sizeof(arr) / sizeof(arr[0]);//通过sizeof算出有十个元素
//	for (i = 0;i < sz;i ++)//循环十趟，每走一趟少找一组
//	{
//		for (int n = 0,j = sz - i;j >= 0 ;j--)//每走一趟少找一组，但是有一个特殊条件，arr[n+1]不能超过数组
// //不然就会有越界的情况，容易报错***********
//		{
//			if(n + 1 <= sz - 1)//限制条件
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
//插入排序法尝试
#include<stdio.h>
int main()
{
	int arr[10] = { 18,54,43,64,15,6,75,8,9,52 };//新创建一个数组
	//先一个数默认数组原来有顺序所以从第二个数开始
	//它和元素一个一个开始比较，知道碰到没有再小的之后的之后插到前面
	for (int n = 0; n < 10; n++)//先打印一遍
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
		else if(n >= 0)//如果不行就继续往下找，直到第一个元素
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
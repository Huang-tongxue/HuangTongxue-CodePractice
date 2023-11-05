#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

///定义区
typedef struct ST
{
	int age;//4
	float tall;//8
	char name[];//C99规定，柔性数组，结构体最后一个变量
}ST;

void BubbleSort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz -1; i++)//n个数据总共排序n-1趟
	{
		int  flag = 1;//默认为已经排序完成
		int tmp;//临时变量用于交换
		for (int j = 0; j < sz - i-1 ; j++)
		{
			if (arr[j] > arr[j + 1])//如果不满足升序则换位置
			{
				flag = 0;//位置发生变化仍需要判断
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
//	for (i = 0; i < len - 1; i++)//确定排序趟数
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0; j < len - 1 - i; j++)//确定比较次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;//加入标记
//			}
//		}
//		if (flag == 0)//如果没有交换过元素，则已经有序
//		{
//			return;
//		}
//	}
//}

///打印输出
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
	///排序之前
	MyPrint(TextData1);//打印查看
	MyPrint(TextData2);
	int sz = sizeof(TextData2) / sizeof(TextData2[0]);//求长度
	///排序之后
	BubbleSort(TextData1, sz);//再次打印
	BubbleSort(TextData2, sz);
	MyPrint(TextData1);
	MyPrint(TextData2);


	//测试一下for循环中break和continue和return的区别
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 6; i++)//外循环
	//{
	//	for (j = 0; j < 6; j++)//内循环 
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
	//调试总结，以上代码中continue在for循环中会跳出本次循环中的后面的所有语句，但不会跳过调整语句，不会跳过嵌套
	//而break会跳出本次循环的剩下的所有语句，也包括调整语句，不会跳过嵌套
	return 0;
}
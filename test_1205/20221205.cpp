#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int iq;
//	printf("输入，回车后开始\n");
//	scanf("%d", &iq);
//	while (iq != -1)
//	{
//		if (iq >= 140)
//		{
//			printf("你是天才\n");
//		}
//		else
//		{
//			printf("你不是天才\n");
//		}
//		scanf("%d", &iq);
//		if (iq == -1)
//			break;
//	}
//	return 0;
//}
//eof 是文件结束标志，printf在没搜索到结果时返回值时-1，本质未eof
//这个方式经常用来结束文件
//int main()
//{
//	printf("   **   \n   **   \n********\n********\n   **   \n   **   ");
//	return 0;
//}
//数组4个元素，只给了三个元素，一个元素没给值，那默认初始化为\0
//************************************
//int main()
//{
//	int arr[4] = { 'a','b','c' };
//	printf("%d", strlen(arr[4]);
//	return 0;
//}
//**************************************
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 != 0)
//	{
//		printf("NO");
//	}
//	else
//	{
//		printf("YES");
//	}
//	return 0;
//}
//*************************************
// 平均身高
//int main()
//{
//	int n = 0;
//	float a = 0, sum = 0;
//	for (n = 0; n < 5; n++)
//	{
//		scanf("%f", &a);
//		sum = sum + a;
//	}
//	printf("%.2f", sum/5);
//	return 0;
//}
//*******************************
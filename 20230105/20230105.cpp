#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
//int main()//isalpha库函数的应用
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if (isalpha(ch))
//		{
//			printf("YES");
//		}
//		else
//		{
//			printf("NO");
//		}
//	}
//	return 0;
//}
//用给出的一个字符打印金字塔
//int main()
//{
//	char ch = 0;
//	scanf("%c",&ch);
//	//打印的部分分为两部分
//	//空格和字符
//	//空格部分
//	//换行
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 5 - i; j++)//空格
//		{
//			printf(" ");
//		}
//		for (int n = 0; n <= i; n++)//字符
//		{
//			printf(" %c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int arr1[] = { 78,56,36,25,68,69,64,61,77,22,33,66 };
	int arr0[] = {0};
	int i = 0;
	i = sizeof(arr1) / sizeof(arr0);
	int n = 0;
	while (n<i)
	{
		printf("%c", arr1[n]);
		n++;
	}
	return 0;
}
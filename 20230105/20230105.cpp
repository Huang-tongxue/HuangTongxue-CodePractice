#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
//int main()//isalpha�⺯����Ӧ��
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
//�ø�����һ���ַ���ӡ������
//int main()
//{
//	char ch = 0;
//	scanf("%c",&ch);
//	//��ӡ�Ĳ��ַ�Ϊ������
//	//�ո���ַ�
//	//�ո񲿷�
//	//����
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 5 - i; j++)//�ո�
//		{
//			printf(" ");
//		}
//		for (int n = 0; n <= i; n++)//�ַ�
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
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i;
	char m;
	int arr[3];
	printf("�Ƿ�����������������Y/N\n");
	scanf("%c", &m);
	if (m == 'Y')
	{
		printf("������������Կ�ʼ\n");
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (i = 0; i < 3; i++)
		{
			printf("%d\n", arr[i]);
		}
		printf("����������������\n");
		printf("�ַ���������Կ�ʼ\n������3���ַ�:"); //�ַ���������� 
		char ch[3];
		for (i = 0; i < 3; i++)
		{
			getchar();
			scanf("%c", &ch[i]);
		}
		for (i = 0; i < 3; i++)
		{
			printf("%c\n", ch[i]);
		}
		printf("��һ���ַ���%c\n", ch[0]);
		printf("�ڶ����ַ���%c\n", ch[1]);
		printf("�������ַ���%c\n", ch[2]);
		printf("�ַ�������������\n");
	}
	else
		return 0;
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <windows.h>
int ip = 1;
void menu1()
{
	printf("********************\n");
	printf("**** ���������� ****\n");
	printf("********************\n���룺");
}
void password()//�����
{
	char pass[10] ={0};
	scanf("%s", pass);
	printf("  �����óɹ�!\n!������ʼ��Ϸ��\n");
	printf("���������룺");
	char word[10] ={0};
	int i = 0;
	while (i < 3)
	{
		scanf("%s", word);
		if ((strcmp(word,pass))==0)
		{
			printf("������ȷ\n��Ϸ��ʼ\n");
			break;
		}
		else if (i != 3)
		{
			printf("����������ٴγ���\n");
		}
		i++;
		if (i == 3)
		{
			printf("���δ������룬�����ѽ�������");
			Sleep(900);
			int* p = &ip;
			*p = 0;
			break;
		}
	}
}
int menu2()//�˵���2
{
	printf("*******************************\n");
	Sleep(1000);
	printf("*********1.��ʼ��Ϸ************\n");
	Sleep(1000);
	printf("*********2.�˳���Ϸ************\n");
	Sleep(1000);
	printf("*******************************\n");
	printf("������1��2������");
	int i = 0;//������ʱ����������ѡ��
	scanf("%d", &i);//��ʼѡ��
	switch (i)
	{
		case(1):
			printf("Loding");
			for (int i = 0; i <= 6; i++)
			{
				printf(". ");
				Sleep(900);
			}
			system("cls");
			printf("��Ϸ�����ɹ�");
			printf("\a");
			Sleep(2000);//��ͣһ�ᣬȻ������
			system("cls");
			printf("��ʼ����>>___");
			break;
		case(2):
			printf("��Ϸ�ѽ���......");
			exit(0);//������������
			break;
		default:
			printf("��������������");
			int menu2();
			break;
			
	}
	return 0;
}
void game()//��Ϸ��
{
	//���������
	int num = 0,c=0;
	srand((unsigned int)time(NULL));
	num = (rand()%100)+1;
	int n = 0;
	do
	{
		while ((scanf("%d", &c)))
		{
			if (c > num)
			{
				system("cls");
				printf("�´���\n");
			}
			if (c < num)
			{
				system("cls");
				printf("��С��\n");
			}
			if (c == num)
			{
				system("cls");
				printf("�¶��ˣ�����ϲ!!!\n");
				break;
			}
		}
		printf("�Ƿ�����һ�Σ�����0��1\n>>__");
		scanf("%d", &n);
		if (n == 1)
		{
			srand((unsigned int)time(NULL));
			printf("��ʼ��������__");
		}
	} while (n == 1);
	if (n == 0)
	{
		printf("\n");
		printf("***********************************************************\n");
		printf("*********>>>>>>>>>>>>>>>> E N D <<<<<<<<<<<<<<<<<<<<*******\n");
		printf("***********************************************************\n");
	}
}
int main()
{
	menu1();
	password();
	if (ip == 0)
	{
		return 0;
	}
	system("cls");
	menu2();
	game();
	return 0;
}
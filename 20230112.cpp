#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <windows.h>
int ip = 1;
void menu1()
{
	printf("********************\n");
	printf("**** 请设置密码 ****\n");
	printf("********************\n密码：");
}
void password()//密码块
{
	char pass[10] ={0};
	scanf("%s", pass);
	printf("  ！设置成功!\n!解锁后开始游戏！\n");
	printf("请输入密码：");
	char word[10] ={0};
	int i = 0;
	while (i < 3)
	{
		scanf("%s", word);
		if ((strcmp(word,pass))==0)
		{
			printf("输入正确\n游戏开始\n");
			break;
		}
		else if (i != 3)
		{
			printf("输入错误，请再次尝试\n");
		}
		i++;
		if (i == 3)
		{
			printf("三次错误输入，程序已结束运行");
			Sleep(900);
			int* p = &ip;
			*p = 0;
			break;
		}
	}
}
int menu2()//菜单块2
{
	printf("*******************************\n");
	Sleep(1000);
	printf("*********1.开始游戏************\n");
	Sleep(1000);
	printf("*********2.退出游戏************\n");
	Sleep(1000);
	printf("*******************************\n");
	printf("请输入1或2》——");
	int i = 0;//创建临时变量，用于选择
	scanf("%d", &i);//开始选择
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
			printf("游戏启动成功");
			printf("\a");
			Sleep(2000);//暂停一会，然后清屏
			system("cls");
			printf("开始猜数>>___");
			break;
		case(2):
			printf("游戏已结束......");
			exit(0);//正常结束程序
			break;
		default:
			printf("错误！请重新输入");
			int menu2();
			break;
			
	}
	return 0;
}
void game()//游戏块
{
	//生成随机数
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
				printf("猜大了\n");
			}
			if (c < num)
			{
				system("cls");
				printf("猜小了\n");
			}
			if (c == num)
			{
				system("cls");
				printf("猜对了！！恭喜!!!\n");
				break;
			}
		}
		printf("是否再来一次？输入0或1\n>>__");
		scanf("%d", &n);
		if (n == 1)
		{
			srand((unsigned int)time(NULL));
			printf("开始猜数》》__");
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
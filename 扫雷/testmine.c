#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Rowe 10
#define Cole 10
#define Rowes Rowe + 2
#define Coles Cole + 2
#include<time.h>
#include<windows.h>
void Menu()//菜单界面
{
	printf("Welcom Minesweeping!!\n");
	printf("Choose the difficulty of the game.\n\n\n");
	printf("1:Easy\n2:Middle\n3:Hard\n");
}
void CreateChessboard(char arr[Rowes][Coles],int r,int c,char ch)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = ch;
		}
	}
}
//打印棋盘
void PrintChessboard(char arr[Rowes][Coles])
{
	printf("012345678910\n ");
	for (int i = 1; i < Rowe; i++)
	{
		printf("%d", i);
		for (int j =1;j< Coles;j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	// 主菜单
	Menu();
	//创建两个棋盘，一个放置炸弹，一个显示数字
	char mine[Rowes][Coles] = { 0 };
	char show[Rowes][Coles] = { 0 };
	//布置棋盘
	CreateChessboard(mine[Rowes][Coles], Rowes, Coles,0 );
	CreateChessboard(show[Rowes][Coles], Rowes, Coles,'*');
	PrintChessboard(mine[Rowes][Coles]);
	PrintChessboard(show[Rowes][Coles]);
	return 0;
}
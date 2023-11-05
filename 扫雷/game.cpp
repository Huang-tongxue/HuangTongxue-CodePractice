#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Menu(void)///菜单界面
{
	printf("**************** Welcom Minesweeping!! ***************\n");
	printf("************ Choose the difficulty of the game *******\n");
	printf("**************** 1:Easy  2:Middle  3:Hard ************\n");
	printf("************************ 0.LEAVE *********************\n");
	printf("请选择：(1`2`3`0)_______");
}
void CreateChessboard(char arr[Rowes][Coles], int r, int c, char ch)///将ch字符放入arr中
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			arr[i][j] = ch;
		}
	}
}
///打印棋盘
void PrintChessboard(char arr[Rowes][Coles])
{
	printf("0123456789\n");
	for (int i = 1; i <= Rowe; i++)
	{
		printf("%d", i);
		for (int j = 1; j <= Cole; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void SetMine(char arr[Rowes][Coles])
{
	for (int i = 0; i < Boome; i++)
	{
		int r = 0, c = 0;
		r = rand() % Rowe + 1;///行坐标
		c = rand() % Cole + 1;///列坐标都随机
		if (arr[r][c] != '1')///如果不是雷，则变成雷，用字符1来表示
		{
			arr[r][c] = '1';
		}
		else
		{
			i--;///如果已经是雷则--再次生成
		}
	}
}
int do_or_try(char mine [Rowes][Coles],char show[Rowes][Coles], int r, int c, char ch)///传入D则是选定是雷，传入T则标记成@
{
	if (ch == 'T')
	{
		show[r][c] = '!';
		return 1;
		PrintChessboard(show);
	}
	if (ch == 'D')
	{
		if (show[r][c]=='@')
		{
			printf("\a你已经标记此处是雷，您确定要继续吗？\n输入D继续\n输入F取消");
			int t = 0;///临时变量，用于判断

			scanf("%c", &t);
			if (t == 'D')
			{
				if (mine[r][c] == '1')
				{
					printf("很遗憾\n你踩到地雷了\n游戏结束...\n");
					PrintChessboard(mine);
					return 0;
				}
				else if (mine[r][c] == '0')
				{
					int count;

					count = RoundMine(show, r, c);
					show[r][c] = count + '0';
					printf("\n");
					PrintChessboard(show);
					return 1;
				}
			}
			if (t == 'F')
			{
				printf("您已经取消了选择，请重新输入坐标并确认\n");
				return 2;///取消了选择,然后重新选择
			}
		}
		else
		{
			if (mine[r][c] == '1')
			{
				printf("很遗憾\n你踩到地雷了\n游戏结束...\n");
				PrintChessboard(mine);
				return 0;
			}
			else 
			{
				int count;

				count = RoundMine(mine, r, c);
				show[r][c] = count + '0';
				printf("\n");
				PrintChessboard(show);
				return 1;
			}
		}
	}
	return 1;
}
int RoundMine(char arr[Rowes][Coles], int r, int c)///整一个函数用于探测这一个坐标的周围的雷的数量
{
	return(
	arr[r][c + 1] +
	arr[r][c - 1] +
	arr[r - 1][c] +
	arr[r + 1][c] +
	arr[r - 1][c - 1] +
	arr[r + 1][c + 1] +
	arr[r + 1][c - 1] - '0' * 8);
}
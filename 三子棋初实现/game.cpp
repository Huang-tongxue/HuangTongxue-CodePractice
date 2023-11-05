#include"head.h"
void Menu(void)//菜单界面
{
	printf("*************************\n");
	printf("***** 1.玩家对战 ********\n");
	printf("***** 2.人机对战 ********\n");
	printf("***** 3.退出游戏 ********\n");
	printf("*************************\n");
}


void ShowBoard(char board[][Col])//展示棋盘
{
	printf("\n\n");
	printf("   1    2    3\n");
	int i = 0, j = 0;
	for (i = 0; i < Row; i++)
	{
		printf("%d", i + 1);
		for (j = 0; j < Col; j++)
		{
			printf("|");
			if (board[i][j] == '0')
			{
				printf("   ");
			}
			else
			{
				printf(" %c ", board[i][j]);
			}
			printf("|");
		}
		if(i != 2)
		printf("\n---------------");
		printf("\n");
	}
	printf("\n\n");
}


//电脑落子
void Computer(char board[][Col])
{
	printf("Computer:");
	do
	{
		//生成随机数选择坐标
		int row = (rand() % 3);//随机数生成横坐标
		int col = (rand() % 3);//随机数生成纵坐标
		// 坐标行和列都为零到二，对应玩家认为的一到三
		//判断这个位置能不能防置
		if (board[row][col] != '0')// 若果不能则重新生成
		{
			continue;//不能放置，跳过后边的语句重新生成
		}
		else//如果为空则可以放
		{
			board[row][col] = '*';
			printf(" 电脑放置的坐标为(%d ,%d)\n", row + 1, col + 1);
			break;
		}

	} while(1);
	ShowBoard(board);
}


void PlayerOne(char board[][Col])//玩家一操作函数
{
	printf("PlayerOne:\n");//玩家一用‘#’
	do
	{
		int row = 0, col = 0;
		
		printf("请输入你要放置棋子的坐标[][]:\n");
		printf("第几行___?\n");
		scanf("%d",&row);
		printf("第几列___?\n");
		scanf("%d", &col);
		//判断这个位置能不能防止
		if (board[row - 1][col - 1] != '0')
		{
			printf("这个位置无法放置，非法坐标请重新选择：\n");
			continue;
		}
		else
		{
			board[row - 1][col - 1] = '#';
			printf("放置成功！！");
			ShowBoard(board);
			break;
		}
	} while (1);
}

void PlayerTwo(char board[][Col])
{
	printf("PlayerTwo:\n");//玩家一用‘#’
	do
	{
		int row = 0, col = 0;

		printf("请输入你要放置棋子的坐标[][]:\n");
		printf("第几行___?\n");
		scanf("%d", &row);
		printf("第几列___?\n");
		scanf("%d", &col);
		//判断这个位置能不能防止
		if (board[row - 1][col - 1] != '0')
		{
			printf("这个位置无法放置，非法坐标请重新选择：\n");
			continue;
		}
		else
		{
			board[row - 1][col - 1] = '*';
			printf("放置成功！！");
			ShowBoard(board);
			break;
		}
	} while (1);
}

//判断输赢以及平局
char IsWin(char board[][Col])
{
	//行3
	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1]
			&& board[i][1] == board[i][2]
			&& board[i][0] == board[i][2]
			&& board[i][0] != '0')
		{
			return board[i][0];
		}
	}
	//列3
	for (int i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i]
			&& board[1][i] == board[2][i]
			&& board[2][i] == board[0][i]
			&& board[0][i] != '0')
		{
			return board[1][i];
		}
	}
	//斜线2
	if (board[0][0] == board[1][1]
		&& board[1][1] == board[2][2]
		&& board[0][0] == board[2][2]
		&& board[0][0] != '0'
		|| board[0][2] == board[1][1]
		&& board[1][1] == board[2][0]
		&& board[0][2] == board[2][0]
		&& board[1][1] != '0')
	{
		return board[0][0];
	}
	return '0';
}

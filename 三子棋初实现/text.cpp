#include"head.h"

int main(void)
{
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		int Slect = 0;
		scanf("%d", &Slect);
		char Board[Row][Col] = { 0 };
		//初始化
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				Board[i][j] = '0';
			}
		}
		switch (Slect)
		{
		case 1:{
			ShowBoard(Board);
			printf("您已经选择玩家对战模式\n玩家1使用‘#'\n################\n玩家2使用‘*’\n****************\n");
			int num = 0;//记录回合数
			do
			{
				PlayerOne(Board); num++;
				if (IsWin(Board) == '#')
				{
					printf("游戏结束\n玩家1胜利！！\n");
					break;
				}
				if (num == 9)
				{
					printf("游戏结束\n!平局!\n");
					break;
				}
				PlayerTwo(Board); num++;
				if (IsWin(Board) == '*')
				{
					printf("游戏结束\n玩家2胜利！！\n");
					break;
				}
			} while (1);
		}
			break;
		case 2:{
			printf("您已经选择人机对战模式！\n");
			printf("‘*’为电脑，‘#’为玩家\n");
			int num = 0;//num用于记录回合数
			do
			{
				Computer(Board);//电脑落子
				num++;
				if (IsWin(Board) == '*')//判断输赢
				{
					printf("电脑胜利！！\n");
					break;
				}
				// 平局结束游戏
				if (num == 9)
				{
					printf("平局了\n");
					break;
				}
				PlayerOne(Board);//玩家落子
				num++;
				if (IsWin(Board) == '#')
				{
					printf("玩家1胜利！！\n");
					break;
				}
				//任意一方胜利结束游戏
				//没有胜利则继续
			} while (1);
		}
			break;
		case 3:{
			printf("游戏已结束\n");
			return 0;
		}
			break;
		default:{
			printf("输入的为无效值，请重新选择！！\n");
		}
			break;
		}
	} while (1);
	return 0;
}
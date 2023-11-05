#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main(void)
{
	srand((unsigned int)time(NULL));///生成随机数
	/// 主菜单
	Menu();
	///开始选择
	while (1)
	{
		int t = 0;///用于玩家选择的判断
		
		scanf("%d", &t);
		if (t == 1)///第一难度选择
		{
			system("cls");
			printf("E a s y!!\n");
			printf("Game is start!\n");
			printf("Loding ");
			for (int i = 0; i < 6; i++)///实现一个等待界面
				{
					printf(". ");
					Sleep(900);
				}
			system("cls");
			break;
		}
		else if (t == 2)///第二难度选择
		{
			system("cls");
			printf("M i d d l e!!\n");
			break;
		}
		else if (t == 3)///第三难度选择
		{
			system("cls");
			printf("H a r d!!\n");
			break;
		}
		else if (t == 0)
		{
			system("cls");
			exit(0);///结束程序
		}
		else
		{
			system("cls");
			printf("选择错误，非有效选项，请重新选择！！！");
			continue;
		}
	}
	///创建两个棋盘，一个放置炸弹，一个显示数字
	char mine[Rowes][Coles] = { 0 };///e代表简单级别，s是代表棋盘已经加了外围边框
	char show[Rowes][Coles] = { 0 };
	///布置棋盘
	CreateChessboard(mine, Rowe, Cole, 0);
	CreateChessboard(show, Rowe, Cole, '*');
	PrintChessboard(mine);///打印棋盘，检验
	PrintChessboard(show);///打印棋盘检验
	SetMine(mine);///生成地雷放到mine中
	PrintChessboard(mine);
	///开始游戏
	///玩家回合
	int r = 0, c = 0;
	char DoOrTry = 0;
	int DidCount = 0;///已经排除的数量

	while (Rowe * Cole - Boome - DidCount != 0)///进行标记或选择，也就是玩家操作时间
	{
		scanf("%d %d %c", &r, &c, &DoOrTry);///玩家选择行和列进行排雷或者标记
		
		int t = 0;///创建临时变量

		t = do_or_try(mine, show, r, c, DoOrTry);
		if (t == 0)///踩到雷了返回0
		{
			break;
		}
		else if (t == 2)///取消选择  返回2
		{
			continue;
		}
		else if (t == 1)///排除了一个位置
		{

			DidCount++;
			continue;
		}
		if (Rowe * Cole - Boome - DidCount == 0)
		{
			printf("\n 您已经排除所有雷，恭喜！！");
		}
	}
	/*Menu();*/

	/*int t = 0;*/

	/*scanf("%d", &t);///还未实现的跳转功能
	if (t == 1)
	{
		;
	}*/
	//PrintChessboard(show);///打印棋盘检验
	return 0;
}
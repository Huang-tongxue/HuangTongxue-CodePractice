#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Menu(void)///�˵�����
{
	printf("**************** Welcom Minesweeping!! ***************\n");
	printf("************ Choose the difficulty of the game *******\n");
	printf("**************** 1:Easy  2:Middle  3:Hard ************\n");
	printf("************************ 0.LEAVE *********************\n");
	printf("��ѡ��(1`2`3`0)_______");
}
void CreateChessboard(char arr[Rowes][Coles], int r, int c, char ch)///��ch�ַ�����arr��
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			arr[i][j] = ch;
		}
	}
}
///��ӡ����
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
		r = rand() % Rowe + 1;///������
		c = rand() % Cole + 1;///�����궼���
		if (arr[r][c] != '1')///��������ף������ף����ַ�1����ʾ
		{
			arr[r][c] = '1';
		}
		else
		{
			i--;///����Ѿ�������--�ٴ�����
		}
	}
}
int do_or_try(char mine [Rowes][Coles],char show[Rowes][Coles], int r, int c, char ch)///����D����ѡ�����ף�����T���ǳ�@
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
			printf("\a���Ѿ���Ǵ˴����ף���ȷ��Ҫ������\n����D����\n����Fȡ��");
			int t = 0;///��ʱ�����������ж�

			scanf("%c", &t);
			if (t == 'D')
			{
				if (mine[r][c] == '1')
				{
					printf("���ź�\n��ȵ�������\n��Ϸ����...\n");
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
				printf("���Ѿ�ȡ����ѡ���������������겢ȷ��\n");
				return 2;///ȡ����ѡ��,Ȼ������ѡ��
			}
		}
		else
		{
			if (mine[r][c] == '1')
			{
				printf("���ź�\n��ȵ�������\n��Ϸ����...\n");
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
int RoundMine(char arr[Rowes][Coles], int r, int c)///��һ����������̽����һ���������Χ���׵�����
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
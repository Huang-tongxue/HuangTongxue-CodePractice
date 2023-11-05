#include"head.h"
void Menu(void)//�˵�����
{
	printf("*************************\n");
	printf("***** 1.��Ҷ�ս ********\n");
	printf("***** 2.�˻���ս ********\n");
	printf("***** 3.�˳���Ϸ ********\n");
	printf("*************************\n");
}


void ShowBoard(char board[][Col])//չʾ����
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


//��������
void Computer(char board[][Col])
{
	printf("Computer:");
	do
	{
		//���������ѡ������
		int row = (rand() % 3);//��������ɺ�����
		int col = (rand() % 3);//���������������
		// �����к��ж�Ϊ�㵽������Ӧ�����Ϊ��һ����
		//�ж����λ���ܲ��ܷ���
		if (board[row][col] != '0')// ������������������
		{
			continue;//���ܷ��ã�������ߵ������������
		}
		else//���Ϊ������Է�
		{
			board[row][col] = '*';
			printf(" ���Է��õ�����Ϊ(%d ,%d)\n", row + 1, col + 1);
			break;
		}

	} while(1);
	ShowBoard(board);
}


void PlayerOne(char board[][Col])//���һ��������
{
	printf("PlayerOne:\n");//���һ�á�#��
	do
	{
		int row = 0, col = 0;
		
		printf("��������Ҫ�������ӵ�����[][]:\n");
		printf("�ڼ���___?\n");
		scanf("%d",&row);
		printf("�ڼ���___?\n");
		scanf("%d", &col);
		//�ж����λ���ܲ��ܷ�ֹ
		if (board[row - 1][col - 1] != '0')
		{
			printf("���λ���޷����ã��Ƿ�����������ѡ��\n");
			continue;
		}
		else
		{
			board[row - 1][col - 1] = '#';
			printf("���óɹ�����");
			ShowBoard(board);
			break;
		}
	} while (1);
}

void PlayerTwo(char board[][Col])
{
	printf("PlayerTwo:\n");//���һ�á�#��
	do
	{
		int row = 0, col = 0;

		printf("��������Ҫ�������ӵ�����[][]:\n");
		printf("�ڼ���___?\n");
		scanf("%d", &row);
		printf("�ڼ���___?\n");
		scanf("%d", &col);
		//�ж����λ���ܲ��ܷ�ֹ
		if (board[row - 1][col - 1] != '0')
		{
			printf("���λ���޷����ã��Ƿ�����������ѡ��\n");
			continue;
		}
		else
		{
			board[row - 1][col - 1] = '*';
			printf("���óɹ�����");
			ShowBoard(board);
			break;
		}
	} while (1);
}

//�ж���Ӯ�Լ�ƽ��
char IsWin(char board[][Col])
{
	//��3
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
	//��3
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
	//б��2
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

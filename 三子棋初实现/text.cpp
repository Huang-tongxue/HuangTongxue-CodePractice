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
		//��ʼ��
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
			printf("���Ѿ�ѡ����Ҷ�սģʽ\n���1ʹ�á�#'\n################\n���2ʹ�á�*��\n****************\n");
			int num = 0;//��¼�غ���
			do
			{
				PlayerOne(Board); num++;
				if (IsWin(Board) == '#')
				{
					printf("��Ϸ����\n���1ʤ������\n");
					break;
				}
				if (num == 9)
				{
					printf("��Ϸ����\n!ƽ��!\n");
					break;
				}
				PlayerTwo(Board); num++;
				if (IsWin(Board) == '*')
				{
					printf("��Ϸ����\n���2ʤ������\n");
					break;
				}
			} while (1);
		}
			break;
		case 2:{
			printf("���Ѿ�ѡ���˻���սģʽ��\n");
			printf("��*��Ϊ���ԣ���#��Ϊ���\n");
			int num = 0;//num���ڼ�¼�غ���
			do
			{
				Computer(Board);//��������
				num++;
				if (IsWin(Board) == '*')//�ж���Ӯ
				{
					printf("����ʤ������\n");
					break;
				}
				// ƽ�ֽ�����Ϸ
				if (num == 9)
				{
					printf("ƽ����\n");
					break;
				}
				PlayerOne(Board);//�������
				num++;
				if (IsWin(Board) == '#')
				{
					printf("���1ʤ������\n");
					break;
				}
				//����һ��ʤ��������Ϸ
				//û��ʤ�������
			} while (1);
		}
			break;
		case 3:{
			printf("��Ϸ�ѽ���\n");
			return 0;
		}
			break;
		default:{
			printf("�����Ϊ��Чֵ��������ѡ�񣡣�\n");
		}
			break;
		}
	} while (1);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main(void)
{
	srand((unsigned int)time(NULL));///���������
	/// ���˵�
	Menu();
	///��ʼѡ��
	while (1)
	{
		int t = 0;///�������ѡ����ж�
		
		scanf("%d", &t);
		if (t == 1)///��һ�Ѷ�ѡ��
		{
			system("cls");
			printf("E a s y!!\n");
			printf("Game is start!\n");
			printf("Loding ");
			for (int i = 0; i < 6; i++)///ʵ��һ���ȴ�����
				{
					printf(". ");
					Sleep(900);
				}
			system("cls");
			break;
		}
		else if (t == 2)///�ڶ��Ѷ�ѡ��
		{
			system("cls");
			printf("M i d d l e!!\n");
			break;
		}
		else if (t == 3)///�����Ѷ�ѡ��
		{
			system("cls");
			printf("H a r d!!\n");
			break;
		}
		else if (t == 0)
		{
			system("cls");
			exit(0);///��������
		}
		else
		{
			system("cls");
			printf("ѡ����󣬷���Чѡ�������ѡ�񣡣���");
			continue;
		}
	}
	///�����������̣�һ������ը����һ����ʾ����
	char mine[Rowes][Coles] = { 0 };///e����򵥼���s�Ǵ��������Ѿ�������Χ�߿�
	char show[Rowes][Coles] = { 0 };
	///��������
	CreateChessboard(mine, Rowe, Cole, 0);
	CreateChessboard(show, Rowe, Cole, '*');
	PrintChessboard(mine);///��ӡ���̣�����
	PrintChessboard(show);///��ӡ���̼���
	SetMine(mine);///���ɵ��׷ŵ�mine��
	PrintChessboard(mine);
	///��ʼ��Ϸ
	///��һغ�
	int r = 0, c = 0;
	char DoOrTry = 0;
	int DidCount = 0;///�Ѿ��ų�������

	while (Rowe * Cole - Boome - DidCount != 0)///���б�ǻ�ѡ��Ҳ������Ҳ���ʱ��
	{
		scanf("%d %d %c", &r, &c, &DoOrTry);///���ѡ���к��н������׻��߱��
		
		int t = 0;///������ʱ����

		t = do_or_try(mine, show, r, c, DoOrTry);
		if (t == 0)///�ȵ����˷���0
		{
			break;
		}
		else if (t == 2)///ȡ��ѡ��  ����2
		{
			continue;
		}
		else if (t == 1)///�ų���һ��λ��
		{

			DidCount++;
			continue;
		}
		if (Rowe * Cole - Boome - DidCount == 0)
		{
			printf("\n ���Ѿ��ų������ף���ϲ����");
		}
	}
	/*Menu();*/

	/*int t = 0;*/

	/*scanf("%d", &t);///��δʵ�ֵ���ת����
	if (t == 1)
	{
		;
	}*/
	//PrintChessboard(show);///��ӡ���̼���
	return 0;
}
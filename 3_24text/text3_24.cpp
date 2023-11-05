#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAXLENG 20
typedef int ElemType;

//����һ���ṹ�����
typedef struct LinkNode
{
	ElemType data;
	struct LinkNode* next;
}LinkNode;

//�˵�
void menu(void)
{
	printf("*********************************************\n");
	printf("******1.��ʼ¼��         2.����        ******\n");
	printf("******3.�ж��Ƿ�Ϊ��     4.�󳤶�      ******\n");
	printf("******5.���             6.��Ų���    ******\n");
	printf("******7.���ݲ���         8.����        ******\n");
	printf("******0.�˳�                           ******\n");
	printf("*********************************************\n");
}
//��һ��������ʵ�ֳ�ʼ�����Ա��������ÿ�
void InitList(LinkNode*& L)
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}

//�ڶ���������ʵ���������Ա�
void DestroyList(LinkNode* &L)
{
	LinkNode* pr = L, *p = L->next;
	while (p != NULL)
	{
		free(pr);
		pr = p;
		p = p->next;
	}
	free(pr);
}

//������������ʵ���ж��Ƿ�Ϊ�ձ�
bool ListEmpty(LinkNode* L)
{
	return(L->next == NULL);//���ָ����Ϊ�գ���˵��������ֻ������ͷ��㣬����ֵΪ1
}


//���ĸ�����ʵ�������Ա���
int ListLength(LinkNode* L)
{
	//���ж��Ƿ�Ϊ�ձ�
	if (ListEmpty(L) == 1)
	{
		printf("\n������Ϊ������\n");
		return 0;
	}//�����ǿձ��ٽ��м���
	LinkNode* s;
	s = L;
	int leng = 0;
	while (s->next != NULL)
	{
		leng++;
		s = s->next;
	}
	return leng;
}

// ���������ʵ�֣�������Ա�
void DisList(LinkNode* L)
{
	if (ListEmpty(L) == 1)
	{
		printf("\n���󣬸�����Ϊ�գ���\n");
	}
	else
	{
		LinkNode* s;
		s = L;
		while (s->next != NULL)
		{
			printf("%-3d", s->next->data);
			s = s->next;
		}
		printf("\n����ɹ���\n");
	}
	printf("\n");
}

//������������ʵ�ֲ���ĳ��Ԫ��(��i��Ԫ�أ���Ԫ��ֵ�����ص�e
bool GetElem(LinkNode* L, int i, ElemType& e)
{
	//���ж��Ƿ���ڵ�i��Ԫ��
	if (ListLength(L) < i)
	{
		printf("\n��������������������ڵ�i��Ԫ��\n");
		return false;
	}
	//������ڵ�i��Ԫ��
	else
	{
		LinkNode* s;
		s = L;
		int j = 1;
		while (j <= i && s->next != NULL)
		{
			s = s->next;
			j++;
		}
		e = s->data;
		printf("\n�ҵ��ˣ�����ֵΪ��%d��\n", e);
		return true;
	}
}

//���߸�������ʵ��Ԫ��ֵ�Ĳ���,����ʾ���߼���ţ��Լ��������ݵĸ���
void LocateElem(LinkNode* L ,int search)
{
	LinkNode* s;
	s = L;
	int i = 1; int count = 0;//i������¼�߼���ţ�count ��������
	int arr[MAXLENG] = {};//��������߼����
	while (s->next != NULL)
	{
		s = s->next;
		if (s->data == search)
		{ 
			arr[count] = i;
			count++;
		}
		i++;
	}
	if (count == 0)
	{
		printf("��Ǹ��û�Ժ��ҵ�%d\n", search);
	}
	else if (count != 0)
	{
		printf("\n��ϲ�ҵ���! ����%d����%d�����߼���ŷֱ�Ϊ:",count,search);
		for (int j = 0; j < count; j++)
		{
			printf("��%d�� ", arr[j]);
		}
		printf("\n");
	}
}

//�ڰ˸�������ʵ�����ݵĲ���
bool ListInsert(LinkNode*& L, int i, ElemType e)//������e���뵽L�������߼���ŵ�i��λ��
{
	//���ж��Ƿ����i-1��λ��
	if (ListLength(L) < i - 1)
	{
		printf("\n�����ڸ�λ�ã���\n");
		return false;
	}
	else
	{
		LinkNode* s = L,*in;
		in = (LinkNode*)malloc(sizeof(LinkNode));
		in->data = e;//��������
		while (--i)//��sָ��i-1
		{
			s = s->next;
		}
		//��ʼ����
		in->next = s->next;
		s->next = in;
		printf("\n����ɹ�����\n");
		return true;
	}
}
int main(void)
{
	LinkNode* L;
	InitList(L);//��ʼ��
	do
	{
		menu();
		int choose = 0;int data = 0;

		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			printf("��ʼ¼��\n");
			LinkNode* b, * s;
			//��������
			s = L;
			scanf("%d", &data);
			while (data >= 0)
			{
				b = (LinkNode*)malloc(sizeof(LinkNode));
				b->data = data;
				s->next = b;
				s = s->next;
				printf("����¼�룬�������롰-1���˳�\n");
				scanf("%d", &data);
			}s->next = NULL;
		}
			break;
		case 2:
			DestroyList(L);
			break;
		case 3:
		{
			if (ListEmpty(L))
			{
				printf("\n����ֵΪ1����Ϊ�ձ�\n");
			}
			else
			{
				printf("\n����ֵΪ0�����ǿձ�\n");
			}
		}
			break;
		case 4:
		{
			if (int leng = ListLength(L))
			{
				printf("\n����Ϊ%d\n", leng);
			}
			else
			{
				printf("\n��ĳ���Ϊ��\n");
			}
		}
			break;
		case 5:
			DisList(L);//���Ǵ�ӡ
			break;
		case 6:
		{
			printf("�밴�����·�ʽʹ�ã���\n");
			printf("bool GetElem(LinkNode* L, int i, ElemType& e)\n");
			printf("��Ҫ���ҵڼ���Ԫ�أ�");
			int num = 0;
			scanf("%d", &num);
			printf("�������ص�e��");
			ElemType e;
			GetElem(L, num, e);
		}
			break;
		case 7:
		{
			printf("void LocateElem(LinkNode* L ,int search)\n");
			int search = 0;
			printf("��������Ҫ���ҵ�ֵ:__");
			scanf("%d", &search);
			LocateElem(L, search);

		}
			break;
		case 8:
		{
			printf("bool ListInsert(LinkNode*& L, int i, ElemType e)\n");
			ElemType init; int num2;
			printf("������___���룿\n");
			scanf("%d", &init);
			printf("���������ŵ��ڼ���λ�ã��������߼����кţ�\n");
			scanf("%d", &num2);
			ListInsert(L, num2, init);
			break;
		}
		case 0:
			return 0;
		default:
			printf("��Чֵ\n");
			break;
		}
	} while (1);
	return 0;
}
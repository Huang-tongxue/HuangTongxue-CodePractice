#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;

void CreatListH(LinkNode* &L,int arr[3],int leng)
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	for (int i = 0; i < leng; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = arr[i];
		s->next = L->next;
		L->next = s;
		s = L;
	}
}


void CreatListT(LinkNode* &L, int arr[],int leng)
{
	LinkNode* f, * b;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	f = L;
	for (int i = 0; i < leng; i++)
	{
		b = (LinkNode*)malloc(sizeof(LinkNode));
		b->data = arr[i];
		f->next = b;
		f = f->next;
	}
	f->next = NULL;
}


void PrintList(LinkNode* L)//������Ա�
{
	LinkNode* s;
	s = L;
	while (s->next != NULL)
	{
		printf("%d", s->next->data);
		s = s->next;
	}
	printf("\n");
}


void DestroyList(LinkNode*& L)//����
{
	LinkNode* pre = L, * p = pre->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}


void LiseEmpty(LinkNode* L)
{
	//return( L->next == NULL);//��Ϊ�շ���
}

int ListLength(LinkNode* L)//��������
{
	int count = 0;
	LinkNode* s;
	s = L;
	while (s->next != NULL)
	{
		s = s->next;
		count++;
	}
	return count;
}


//���ж����Ա����Ƿ��е�i�����ݽ��
//���û���򷵻ش��󣬲�����
//����У�����data��ֵ��e
//��j�ۼƱ������ݽڵ����j<i�����
//��������ֵΪe

int GetElem(LinkNode* L, int i)
{
	if (i > ListLength(L))
	{
		printf("\n���󣬲����ڸý�㣡\n");
		return false;
	}
	else
	{
		int j = 0;
		LinkNode* s;
		s = (LinkNode*)malloc(sizeof(LinkNode));
		
		while (j < i)
		{
			s = L->next;
			j++;
			if (j = i)
				return s->data;
		}
	}
}

int main()
{
	int arr[3] = { 1,2,3 };
	LinkNode* L,*H;
	int leng;
	leng = sizeof(arr) / sizeof(arr[0]);
	CreatListH(L, arr, leng);
	CreatListH(H, arr, leng);
	PrintList(L);
	PrintList(H);
	printf("%d", ListLength(L));
	printf("\n%d\n", GetElem(L, 3));//��ӡL�����е�3��Ԫ��
	printf("\n%d\n", GetElem(H, 3));
	int e = 0;
	e = GetElem(L, 2);
	printf("\n%d\n", e);
	return 0;
}
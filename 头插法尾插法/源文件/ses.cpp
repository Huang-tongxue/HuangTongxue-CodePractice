#include"2023_03_21.h"
void CreatListH(LinkNode*& L, int arr[5],int leng)//头插法存入数据
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->Data = 0;
	L->next = NULL;
	for (int i = 0; i < leng; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->Data = arr[i];
		s->next = L->next;
		L->next = s;
	}
}

void CreatLinsT(LinkNode*& L, int arr[],int leng)
{
	LinkNode* f, * b;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	f = L;
	for (int i = 0; i < leng; i++)
	{
		b = (LinkNode*)malloc(sizeof(LinkNode));
		b->Data = arr[i];
		f->next = b;
		f = f->next;//指向下一个
	}
	f->next = NULL;
}


void MyPrint(LinkNode* L)
{
	LinkNode* p;
	p = L;
	while (p->next != NULL)
	{
		printf(" %d", p->next->Data);
		p = p->next;
	}

	printf("\n");
}
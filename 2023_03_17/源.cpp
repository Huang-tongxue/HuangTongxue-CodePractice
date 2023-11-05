#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define Large 10
typedef struct Lnode//定义一个结构体类型
{
	ElemType data;
	struct Lnode* next;
}LinkNode;

void CreatListF(LinkNode* &L, ElemType Data[], int num)///头插法
{
	LinkNode* s = NULL;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = Data[i];
		s->next = L->next;
		L->next = s;
	}
}

void CreatListR(LinkNode* &L, ElemType Data[], int num)///尾插法
{
	LinkNode* f = NULL, * b = NULL;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	int i;
	f = L;
	for (i = 0; i < num; i++)
	{
		b = (LinkNode*)malloc(sizeof(LinkNode));
		b->data = Data[i];
		f->next = b;
		f = b;
	}
	f->next = NULL;
}


void MyPrintf(ElemType Data[Large], int num)//打印检查数组
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d ", Data[i]);
	}
	printf("\n");
}


void PrintfList(LinkNode* L)
{
	LinkNode* p;
	p = L;
	while (p->next != NULL)
	{
		printf("%d ", p->next->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	LinkNode* L = NULL;
	LinkNode* T = NULL;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	T = L;
	int num = Large;
	ElemType Data[Large] = { 1,2,3,4,5,6,7,8,9,10 };///数据存储区块
	///1
	MyPrintf(Data, num);
	///2
	CreatListF(L, Data, num);
	PrintfList(L);
	///3
	LinkNode* R = NULL;
	R = (LinkNode*)malloc(sizeof(LinkNode));
	T = R;
	CreatListR(R, Data, num);
	PrintfList(R);
	return 0;
}
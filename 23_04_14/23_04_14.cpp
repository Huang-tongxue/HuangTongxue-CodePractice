#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;
void InSert(LinkNode*& L, int x)
{
	LinkNode* p = L->next;
	LinkNode* pr = L;
	while (p->data < x && p->next != NULL)
	{
		pr = p;
		p = p->next;
	}
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = p;
	pr->next = s;
}

void Back(LinkNode*& L)
{
	LinkNode* H;
	H = (LinkNode*)malloc(sizeof(LinkNode));
	H->next = NULL;
	LinkNode* p;
	p = L->next;
	while (p != NULL)
	{
		LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = p->data;
		s->next = H->next;
		H->next = s;
		p = p->next;
	}
	p = H->next;
	LinkNode* t = L->next;
	while (p != NULL)
	{
		t->data = p->data;
		t = t->next;
		p = p->next;
	}
	//调用销毁函数销毁临时的H
}

void Creat(LinkNode* L)
{
	printf("请开始录入数据，输入-1停止>>\n");
	LinkNode* p = L, * q;
	int data;
	scanf("%d", &data);
	while (data != -1)
	{
		q = (LinkNode*)malloc(sizeof(LinkNode));
		q->data = data;
		q->next = p->next;
		p->next = q;
		scanf("%d", &data);
	}
	
}


void Show(LinkNode* L)
{
	LinkNode* p = L->next;
	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main(void)
{
	LinkNode* L;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	Creat(L);//头插法创建
	Show(L);
	InSert(L, 5);//插入5
	//Show	
	Show(L);
	Back(L);
	Show(L);
	return 0;
}

//typedef struct node* p;
//
//struct node
//{
//	int data;
//	p next;
//};
//
//void Creat(p  & L)
//{
//	p m;
//	node* m;
//}
//
//
//int main(void)
//{
//	struct node* L;
//	Creat(L);
//	return 0;
//}
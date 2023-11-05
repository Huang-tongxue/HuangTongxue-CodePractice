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


void PrintList(LinkNode* L)//输出线性表
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


void DestroyList(LinkNode*& L)//销毁
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
	//return( L->next == NULL);//不为空返回
}

int ListLength(LinkNode* L)//求链表长度
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


//先判断线性表中是否有第i个数据结点
//如果没有则返回错误，并提醒
//如果有，将其data赋值给e
//用j累计遍历数据节点个数j<i则继续
//函数返回值为e

int GetElem(LinkNode* L, int i)
{
	if (i > ListLength(L))
	{
		printf("\n错误，不存在该结点！\n");
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
	printf("\n%d\n", GetElem(L, 3));//打印L链表中第3个元素
	printf("\n%d\n", GetElem(H, 3));
	int e = 0;
	e = GetElem(L, 2);
	printf("\n%d\n", e);
	return 0;
}
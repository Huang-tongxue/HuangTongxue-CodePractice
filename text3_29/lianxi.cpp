#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX 10


typedef struct LinkNode//定义一个结构体变量，单链表形式
{
	int data;
	struct LinkNode* next;
}LinkNode;
void CreatListH(LinkNode*& L, int arr[MAX], int leng)//头插法存入数据
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->data = 0;
	L->next = NULL;
	for (int i = 0; i < leng; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = arr[i];
		s->next = L->next;
		L->next = s;
	}
}
void sort(LinkNode*& L)//排序
{
	LinkNode* p, * pre, * q;
	p = L->next->next;//p指向第二个数据结点
	L->next->next = NULL;
	while (p != NULL)//如果是空则说明已经有序，L只有一个数据节点
	{
		q = p->next;//q指向第三个结点
		pre = L;//pre指向头结点
		while (pre->next != NULL && pre->next->data < p->data)
		{
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = q;
	}

}
void Show(LinkNode* L)//打印该链表
{
	LinkNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d ", p->data);
	}
	printf("\n");
}

void Split(LinkNode*& L, LinkNode*& L1, LinkNode*& L2)//一分为二
{
	LinkNode* p = L->next ,* q, * r1;
	L1 = L;
	r1 = L1;
	L2 = (LinkNode*)malloc(sizeof(LinkNode));
	L2->next = NULL;
	while (p != NULL)
	{
		r1->next = p;
		r1 = r1->next;
		p = p->next;
		q = p->next;
		p->next = L2->next;
		L2->next = p;
		p = q;
	}
	r1->next = NULL;
}


//int main(void)
//{
//	int arr[MAX] = { 10,6,3,5,2,4,8,7,1,9 };
//	LinkNode* p, * q;
//	LinkNode* L;
//	CreatListH(L,arr,MAX);
//	p = L->next;//p在前，指向首节点
//	q = L->next;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		if (q->data <= p->data )
//		{
//			while (q->next != p)//经q挪动到p前,也就是将q作为最大数据节点的pre
//			{
//				q = q->next;
//			}
//		}
//		if (p->next == NULL)//p结点已经遍历完成,此时它是空闲的
//		{
//			p = q->next;//q已经记住了最大结点的前一个结点，p去指向最大节点
//			q->next = p->next;
//			p->next = NULL;
//			free(p);
//		}
//	}
//	return 0;
//}

//void DelmaxnodeTwo(LinkNode* L)//尝试两个指针实现删除最大值
//{
//	LinkNode* p, * q;
//	p = L->next;//p在前，指向首节点
//	q = L->next;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		if (q->data <= p->data )
//		{
//			while (q->next != p)//经q挪动到p前,也就是将q作为最大数据节点的pre
//			{
//				q = q->next;
//			}
//		}
//		if (p->next == NULL)//p结点已经遍历完成,此时它是空闲的
//		{
//			p = q->next;//q已经记住了最大结点的前一个结点，p去指向最大节点
//			q->next = p->next;
//			p->next = NULL;
//			free(p);
//		}
//	}
//}

void Sort(LinkNode* &L)
{
	LinkNode* p//大遍历
		, * pr//找前驱结点，小遍历
		, * b;//标记p下一个节点

}

int main(void)
{
	LinkNode* L;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	int arr[MAX] = { 10,6,3,5,2,4,8,7,1,9 };
	CreatListH(L, arr, MAX);
	//DelmaxnodeTwo(L);
	Show(L);
	sort(L);
	Show(L);
	LinkNode* L1,* L2;
	Split(L, L1, L2);
	Show(L1);
	Show(L2);
	return 0;
}
////数据结构p52  2.6
//typedef struct LinkNode//定义一个结构体变量，单链表形式
//{
//	int data;
//	struct LinkNode* next;
//}LinkNode;
//
//void CreatListH(LinkNode*& L, int arr[4], int leng)//头插法存入数据
//{
//	LinkNode* s;
//	L = (LinkNode*)malloc(sizeof(LinkNode));
//	L->data = 0;
//	L->next = NULL;
//	for (int i = 0; i < leng; i++)
//	{
//		s = (LinkNode*)malloc(sizeof(LinkNode));
//		s->data = arr[i];
//		s->next = L->next;
//		L->next = s;
//	}
//}
//
//int main(void)
//{
//	int arr1[4] = { 1,3,5,7 };
//	int arr2[4] = { 2,4,6,8 };
//	LinkNode* L1, * L2;
//	CreatListH(L1, arr1, 4);
//	CreatListH(L2, arr2, 4);
//	LinkNode* L3 = (LinkNode*)malloc(sizeof(LinkNode));
//	for (int i = 0; i < 8; i++)
//	{
//
//	}
//	return 0;
//}

//void Change(int* p, int* q)
//{
//	int t;
//	t = *p;
//	*p = *q;
//	*q = t;
//}
//
//int main()
//{
//	int a = 5, b = 3;
//	printf("a=%d,b=%d\n", a, b);
//	Change(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
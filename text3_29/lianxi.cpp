#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX 10


typedef struct LinkNode//����һ���ṹ���������������ʽ
{
	int data;
	struct LinkNode* next;
}LinkNode;
void CreatListH(LinkNode*& L, int arr[MAX], int leng)//ͷ�巨��������
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
void sort(LinkNode*& L)//����
{
	LinkNode* p, * pre, * q;
	p = L->next->next;//pָ��ڶ������ݽ��
	L->next->next = NULL;
	while (p != NULL)//����ǿ���˵���Ѿ�����Lֻ��һ�����ݽڵ�
	{
		q = p->next;//qָ����������
		pre = L;//preָ��ͷ���
		while (pre->next != NULL && pre->next->data < p->data)
		{
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = q;
	}

}
void Show(LinkNode* L)//��ӡ������
{
	LinkNode* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d ", p->data);
	}
	printf("\n");
}

void Split(LinkNode*& L, LinkNode*& L1, LinkNode*& L2)//һ��Ϊ��
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
//	p = L->next;//p��ǰ��ָ���׽ڵ�
//	q = L->next;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		if (q->data <= p->data )
//		{
//			while (q->next != p)//��qŲ����pǰ,Ҳ���ǽ�q��Ϊ������ݽڵ��pre
//			{
//				q = q->next;
//			}
//		}
//		if (p->next == NULL)//p����Ѿ��������,��ʱ���ǿ��е�
//		{
//			p = q->next;//q�Ѿ���ס��������ǰһ����㣬pȥָ�����ڵ�
//			q->next = p->next;
//			p->next = NULL;
//			free(p);
//		}
//	}
//	return 0;
//}

//void DelmaxnodeTwo(LinkNode* L)//��������ָ��ʵ��ɾ�����ֵ
//{
//	LinkNode* p, * q;
//	p = L->next;//p��ǰ��ָ���׽ڵ�
//	q = L->next;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		if (q->data <= p->data )
//		{
//			while (q->next != p)//��qŲ����pǰ,Ҳ���ǽ�q��Ϊ������ݽڵ��pre
//			{
//				q = q->next;
//			}
//		}
//		if (p->next == NULL)//p����Ѿ��������,��ʱ���ǿ��е�
//		{
//			p = q->next;//q�Ѿ���ס��������ǰһ����㣬pȥָ�����ڵ�
//			q->next = p->next;
//			p->next = NULL;
//			free(p);
//		}
//	}
//}

void Sort(LinkNode* &L)
{
	LinkNode* p//�����
		, * pr//��ǰ����㣬С����
		, * b;//���p��һ���ڵ�

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
////���ݽṹp52  2.6
//typedef struct LinkNode//����һ���ṹ���������������ʽ
//{
//	int data;
//	struct LinkNode* next;
//}LinkNode;
//
//void CreatListH(LinkNode*& L, int arr[4], int leng)//ͷ�巨��������
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
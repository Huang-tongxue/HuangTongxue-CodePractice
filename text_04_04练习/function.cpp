#include"��ͷ.h"


//β�巨
void CreatListT(LinkNode* &L)
{
	LinkNode* f, * b;
	f = L;
	int data = 0;
	do
	{
		scanf("%d", &data);
		if (data == 0)
			break;
		else
		{
			b = (LinkNode*)malloc(sizeof(LinkNode));
			b->data = data;
			f->next = b;
			f = b;
		}
		f->next = NULL;
	} while (data != 0);
}

//
void CreatListH(LinkNode*& L)
{
	L->next = NULL;
	LinkNode* p;
	int data;
	scanf("%d", &data);
	while (data != 0)
	{
		p = (LinkNode*)malloc(sizeof(LinkNode));
		p->data = data;
		p->next = L->next;
		L->next = p;
		scanf("%d", &data);
	}
}


//һ��Ϊ��
//void File(LinkNode*& L, LinkNode* &L1, LinkNode* &L2)
//{
//	//׼���׶�
//	LinkNode* p = L->next, * q, * t;
//	L1 = L;
//	t = L1;
//	L2 = (LinkNode*)malloc(sizeof(LinkNode));
//	L2->next = NULL;
//	//��β��ͷ
//	while (p != NULL)
//	{
//		t->next = p;
//		t =  p;
//		p = p->next;
//		q = p->next;
//		p->next = L2->next;
//		L2->next = p;
//		p = q;
//	}
//	t->next = NULL;
//}


//չʾ
void Show(LinkNode* L)
{
	LinkNode* s;
	s = L;
	while (s->next != NULL)
	{
		printf("%d ", s->next->data);
		s = s->next;
	}
	printf("\n");
}
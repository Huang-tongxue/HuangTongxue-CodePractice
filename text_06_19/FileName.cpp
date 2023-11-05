#include"FileName.h"
////实现中缀转后缀表达式
//
////在一个函数里给符号赋值
//int ComparativePriority(char In, char top)
//{
//	int 
//}


typedef struct
{
	char data[MaxSize];
	int front;
	int rear;
}SqQueue;
bool enQueue(SqQueue*& q, char e)
{
	if ()
		return false;
	;
	q->data[q->rear] = e;
	return true;
}





//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LinkNode;
//
//void DelSameval(LinkNode* head)
//{
//	assert(head);
//
//	LinkNode* phead = head->next;
//	
//	int val = NULL;
//	while (phead)
//	{
//		LinkNode* p = phead;
//		val = p->data;
//		while (p)
//		{
//			if (p->next != NULL && p->next->data == val)
//			{
//				LinkNode* tem = p->next;
//				p->next = tem->next;
//
//				tem->data = NULL;
//				tem->next = NULL;
//				free(tem);
//			}
//			p = p->next;
//		}
//		phead = phead->next;
//	}
//}
//void PushHead(LinkNode* head,int val)
//{
//	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
//	
//	if (s == NULL)
//	{
//		perror("malloc failed!");
//		return;
//	}
//	
//	s->data = val;
//	s->next = head->next;
//	head->next = s;
//}
//
//int main(void)
//{
//	LinkNode* T = NULL;
//	T = (LinkNode*)malloc(sizeof(LinkNode));
//	T->next = NULL;
//	T->data = NULL;
//	int val = 0;
//		PushHead(T, 1);
//		PushHead(T, 2);
//		PushHead(T, 3);
//		PushHead(T, 4);
//		PushHead(T, 5);
//		PushHead(T, 1);
//		PushHead(T, 2);
//	//scanf_s("%d", &val);
//	//while (val != -1)
//	//{
//	//	PushHead(T, val);
//	//	scanf_s("%d", &val);
//	//}
//	DelSameval(T);
//	LinkNode* p = T->next;
//	while (p)
//	{
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//}
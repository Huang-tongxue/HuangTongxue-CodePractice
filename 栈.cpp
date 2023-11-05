#include"ջ.h"

void text()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	printf("%d", STTop(&st));
	STPop(&st);
	STPush(&st, 3);
	STPush(&st, 4);
	printf("%d", STTop(&st));
	STPop(&st);
	printf("%d", STTop(&st));
	STPop(&st);
	printf("%d", STTop(&st));
	STPop(&st);


}

int main(void)
{
	
	//text();

	ST* st = (ST*)malloc(sizeof(SLNData) * 0);
	STInit(st);
	STPush(st, 123);
	STPush(st, 12);
	STPush(st, 13);
	STPush(st, 23);
	printf("%d\n", STTop(st));
	STPop(st);
	printf("%d\n", STTop(st));
	STPop(st);
	printf("%d\n", STTop(st));
	STPop(st);
	printf("%d\n", STTop(st));
	STDestroy(st);
	return 0;
}



















//void SLNodeInit(SLNode* L)
//{
//	assert(L);
//
//	L->data = NULL;
//	L->next = NULL;
//}
////ͷ�巨
//void SLNodePushFront(SLNode** L,SLNData x)
//{
//	SLNode* phead = L;
//	if (L->data == NULL)
//	{
//		L->data = x;
//		return;
//	}
//
//	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//
//	newnode->data = x;
//	newnode->next = phead;
//	L = newnode;
//}
//void PopFront(SLNode** L)
//{
//	assert(L);
//	SLNode* phead = *L;
//	printf("%d\n", phead->data);
//	SLNode* newhead = phead->next;
//	free(phead);
//	L = &newhead;
//}
//void TextSLNode(SLNode* L)
//{
//	
//	SLNodePushFront(&L, 1);
//	SLNodePushFront(&L, 2);
//	SLNodePushFront(&L, 3);
//	SLNodePushFront(&L, 4);
//	PopFront(&L);
//	PopFront(&L);
//
//}
//int main(void)
//{
//	SLNode* L = (SLNode*)malloc(sizeof(SLNode));
//	SLNodeInit(L);
//	TextSLNode(L);
//	return 0;
//}
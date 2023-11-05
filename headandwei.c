#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
typedef ElemType int
#define Large 10
typedef struct Lnode//定义一个结构体类型
{
	ElemType data;
	struct Lnode* next;
}LinkNode;

void CreatListF(LinkNode *&L, ElemType Data[], int num)///取地址符加不进去，头插法
{
	LinkNode* s = NULL;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = Data[i];
		s->next =L ->next;
		L->next = s;
	}
}

void CreatListR(LinkNode* &L,ElemType Data[],int num)///尾插法
{
	LinkNode* f = NULL,* b = NULL;
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


void MyPrintf(ElemType Data[Large],int num)//打印检查数组
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d ", Data[i]);
	}
	printf("\n");
}

int main()
{
	LinkNode* L;
	LinkNode* T = NULL;
	T = L;
	int num = Large;
	ElemType Data[Large] = {1,2,3,4,5,6,7,8,9,10};///数据存储区块
	///1
	MyPrintf(Data, num);
	printf("\n");
	///2
	CreatListF(L, Data, num);
	while (T->next != NULL)
	{
		T = T->next;
		printf("%d", T->data);
	}
	///3
	LinkNode* R;
	T = R;
	CreatListR(R, Data, num);
	while (T->next != NULL)
	{
		T = T->next;
		printf("%d", T->data);
	}
	return 0;
}

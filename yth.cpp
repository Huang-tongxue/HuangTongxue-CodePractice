////ÐÖµÜÁ´´æ´¢½á¹¹
//typedef struct
//{
//	ElemType data;
//	struct tnode* hp;
//	struct tnode* vp;
//}TSBNode;
//Ë«Ç×´æ´¢½á¹¹
//typedef struct
//{
//	ElemType data;
//	int parent;
//}PTree[MaxSize];
//
//typedef struct node
//{
//	ElemType data;
//	struct node* lchild;
//	struct node* rchild;
//}BTNode;
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MaxSize 3
#define MaxSons 3
#define ElemType char
//º¢×ÓÁ´´æ´¢½á¹¹
typedef struct node
{
	ElemType data;
	struct node* sons[MaxSons];
}TSonNode;

int TreeHightl(TSonNode* t)
{
	TSonNode* p;
	int i,h, maxh = 0;
	if (t == NULL)
		return 0;
	else
	{
		for (i = 0; i < MaxSons; i++)
		{
			p = t->sons[i];
			if (p != NULL)
			{
				h = TreeHightl(p);
				if (maxh < h)
					maxh = h;
			}
		}
		return (maxh + 1);
	}
}

void CreatTree(TSonNode*& T)
{
	ElemType ch;
	scanf("%c", &ch);
	if (ch == '#')
	{
		T = NULL;
	}
	else
	{
		T = (TSonNode*)malloc(sizeof(TSonNode));
		T->data = ch;
		for (int i = 0; i < MaxSons; i++)
		{
			CreatTree(T->sons[i]);
		}
	}
}
void PrintTree(TSonNode* T)
{
	if (T == NULL)
		printf("# ");
	else
	{
		printf("%c", T->data);
		printf("( ");
		for (int i = 0; i < MaxSons; i++)
		{
			PrintTree(T->sons[i]);
		}
		printf(" )");
	}
}

int main(void)
{
	TSonNode* T;
	CreatTree(T);
	PrintTree(T);
	printf("\n");
	printf("%d", TreeHightl(T));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//n 的阶乘
int pop(int n)
{
	if (n == 0)
		return 1;
	return n * pop(n - 1);
}
//求和从1加到n
int MySum(int n)
{
	if (n == 1)
		return 1;
	return n + MySum(n - 1);
}
//斐波那契数列
int FeiBo(int num)
{
	if (num == 1 || num == 2)
		return 1;
	else
		return (FeiBo(num - 1) + FeiBo(num - 2));
}
//汉诺塔
void Hano(int n, char X/*起始柱子*/, char Y/*中介柱子*/, char Z/*目标柱子*/)
{
	if (n == 1)
		printf("\t将第%d个盘片从%c移动到%c\n", n, X, Z);//当前X柱子面最前面只剩最小的一个了就直接挪到最后一个
	else
	{
		Hano(n - 1, X, Z, Y);//将n - 1个全部从起始柱子x移到中介柱子
		printf("\t将第%d个盘片从%c移动到%c\n",n,X,Z);
		Hano(n - 1, Y, X, Z);//将n - 1个全部从中介柱子移动到目标柱子
	}
}
typedef struct LinkNode
{
	int a;
	struct LinkNode* next;
}LinkNode;
void RecusiveCreatList(LinkNode*& L)//递归创建
{
	int a;
	scanf("%d", &a);
	if (a == 0)
		L = NULL;
	else
	{
		L = (LinkNode*)malloc(sizeof(LinkNode));
		assert(L);
		L->a = a;
		RecusiveCreatList(L->next);
	}
}
void RecusivePrintList(LinkNode* L)//递归打印
{
	if (L == NULL)
		printf("->NULL");
	else
	{
		printf("->%d", L->a);
		RecusivePrintList(L->next);
	}
}
int main(void)
{
	printf("%d\n", pop(5));//n的阶乘
	printf("%d\n", MySum(4));//从1加到n;
	printf("%d\n", FeiBo(5));//斐波那契数列第n个是多少
	Hano(3,'A', 'B', 'C');//汉诺塔
	//递归创建链表
	LinkNode* L;
	RecusiveCreatList(L);
	//递归打印链表
	RecusivePrintList(L);
	return 0;
}
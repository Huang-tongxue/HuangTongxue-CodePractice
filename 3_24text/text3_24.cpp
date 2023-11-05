#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAXLENG 20
typedef int ElemType;

//创建一个结构体变量
typedef struct LinkNode
{
	ElemType data;
	struct LinkNode* next;
}LinkNode;

//菜单
void menu(void)
{
	printf("*********************************************\n");
	printf("******1.开始录入         2.销毁        ******\n");
	printf("******3.判断是否为空     4.求长度      ******\n");
	printf("******5.输出             6.序号查找    ******\n");
	printf("******7.数据查找         8.插入        ******\n");
	printf("******0.退出                           ******\n");
	printf("*********************************************\n");
}
//第一个函数，实现初始化线性表，创建加置空
void InitList(LinkNode*& L)
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}

//第二个函数，实现销毁线性表
void DestroyList(LinkNode* &L)
{
	LinkNode* pr = L, *p = L->next;
	while (p != NULL)
	{
		free(pr);
		pr = p;
		p = p->next;
	}
	free(pr);
}

//第三个函数，实现判断是否为空表
bool ListEmpty(LinkNode* L)
{
	return(L->next == NULL);//如果指针域为空，则说明该链表只存在其头结点，返回值为1
}


//第四个函数实现求线性表长度
int ListLength(LinkNode* L)
{
	//先判断是否为空表
	if (ListEmpty(L) == 1)
	{
		printf("\n该链表为空链表\n");
		return 0;
	}//若不是空表再进行计算
	LinkNode* s;
	s = L;
	int leng = 0;
	while (s->next != NULL)
	{
		leng++;
		s = s->next;
	}
	return leng;
}

// 第五个函数实现，输出线性表
void DisList(LinkNode* L)
{
	if (ListEmpty(L) == 1)
	{
		printf("\n错误，该链表为空！！\n");
	}
	else
	{
		LinkNode* s;
		s = L;
		while (s->next != NULL)
		{
			printf("%-3d", s->next->data);
			s = s->next;
		}
		printf("\n输出成功！\n");
	}
	printf("\n");
}

//第六个函数，实现查找某个元素(第i个元素）的元素值并返回到e
bool GetElem(LinkNode* L, int i, ElemType& e)
{
	//先判断是否存在第i个元素
	if (ListLength(L) < i)
	{
		printf("\n输出的数据有误，链表不存在第i个元素\n");
		return false;
	}
	//如果存在第i个元素
	else
	{
		LinkNode* s;
		s = L;
		int j = 1;
		while (j <= i && s->next != NULL)
		{
			s = s->next;
			j++;
		}
		e = s->data;
		printf("\n找到了，它的值为“%d”\n", e);
		return true;
	}
}

//第七个函数，实现元素值的查找,并显示其逻辑编号，以及这类数据的个数
void LocateElem(LinkNode* L ,int search)
{
	LinkNode* s;
	s = L;
	int i = 1; int count = 0;//i用来记录逻辑序号，count 用来计数
	int arr[MAXLENG] = {};//用来存放逻辑序号
	while (s->next != NULL)
	{
		s = s->next;
		if (s->data == search)
		{ 
			arr[count] = i;
			count++;
		}
		i++;
	}
	if (count == 0)
	{
		printf("抱歉，没以后找到%d\n", search);
	}
	else if (count != 0)
	{
		printf("\n恭喜找到了! 共有%d个“%d”，逻辑序号分别为:",count,search);
		for (int j = 0; j < count; j++)
		{
			printf("“%d” ", arr[j]);
		}
		printf("\n");
	}
}

//第八个函数，实现数据的插入
bool ListInsert(LinkNode*& L, int i, ElemType e)//将数据e插入到L链表中逻辑序号第i的位置
{
	//先判断是否存在i-1的位置
	if (ListLength(L) < i - 1)
	{
		printf("\n不存在该位置！！\n");
		return false;
	}
	else
	{
		LinkNode* s = L,*in;
		in = (LinkNode*)malloc(sizeof(LinkNode));
		in->data = e;//存入数据
		while (--i)//将s指向i-1
		{
			s = s->next;
		}
		//开始插入
		in->next = s->next;
		s->next = in;
		printf("\n插入成功！！\n");
		return true;
	}
}
int main(void)
{
	LinkNode* L;
	InitList(L);//初始化
	do
	{
		menu();
		int choose = 0;int data = 0;

		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			printf("开始录入\n");
			LinkNode* b, * s;
			//存入数据
			s = L;
			scanf("%d", &data);
			while (data >= 0)
			{
				b = (LinkNode*)malloc(sizeof(LinkNode));
				b->data = data;
				s->next = b;
				s = s->next;
				printf("继续录入，或者输入“-1”退出\n");
				scanf("%d", &data);
			}s->next = NULL;
		}
			break;
		case 2:
			DestroyList(L);
			break;
		case 3:
		{
			if (ListEmpty(L))
			{
				printf("\n返回值为1，表为空表\n");
			}
			else
			{
				printf("\n返回值为0，表不是空表\n");
			}
		}
			break;
		case 4:
		{
			if (int leng = ListLength(L))
			{
				printf("\n表长度为%d\n", leng);
			}
			else
			{
				printf("\n表的长度为零\n");
			}
		}
			break;
		case 5:
			DisList(L);//就是打印
			break;
		case 6:
		{
			printf("请按照如下方式使用！！\n");
			printf("bool GetElem(LinkNode* L, int i, ElemType& e)\n");
			printf("您要查找第几个元素？");
			int num = 0;
			scanf("%d", &num);
			printf("它将返回到e中");
			ElemType e;
			GetElem(L, num, e);
		}
			break;
		case 7:
		{
			printf("void LocateElem(LinkNode* L ,int search)\n");
			int search = 0;
			printf("请输入你要查找的值:__");
			scanf("%d", &search);
			LocateElem(L, search);

		}
			break;
		case 8:
		{
			printf("bool ListInsert(LinkNode*& L, int i, ElemType e)\n");
			ElemType init; int num2;
			printf("您将把___放入？\n");
			scanf("%d", &init);
			printf("您将把他放到第几个位置（请输入逻辑序列号）\n");
			scanf("%d", &num2);
			ListInsert(L, num2, init);
			break;
		}
		case 0:
			return 0;
		default:
			printf("无效值\n");
			break;
		}
	} while (1);
	return 0;
}
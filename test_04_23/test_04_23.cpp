#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define Max 100 

typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;

void InitStack(LinkNode*& s)
{
	s = (LinkNode*)malloc(sizeof(LinkNode));
	s->next = NULL;
}

void DestroyStack(LinkNode*& s)
{
	LinkNode* pre = s, * p = s->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}

bool IsEmpty(LinkNode* s)
{
	return(s->next == NULL);
}

void Push(LinkNode*& s, int e)
{
	LinkNode* p;
	p = (LinkNode*)malloc(sizeof(LinkNode));
	p->data = e;

	p->next = s->next;
	s->next = p;
}

bool Pop(LinkNode*& s, int e)
{
	LinkNode* p;
	if (s->next == NULL)
	{
		return false;
	}
	p = s->next;
	e = p->data;
	s->next = p->next;
	free(p);
	return true;
}

bool GetTop(LinkNode* s, int& e)
{
	if (s->next == NULL)
	{
		return false;
	}
	e = s->next->data;
	return true;
}

bool Match(char arr[Max], int n)
{
	int i = 0; int e;
	bool match = true;
	LinkNode* st;
	InitStack(st);
	while (i < n && match)
	{
		if (arr[i] == '(')
		{
			Push(st, arr[i]);
		}
		else if (arr[i] == ')')
		{
			if (GetTop(st, e) == true)
			{
				if (e != '(')
					match = false;
				else
					Pop(st, e);
			}
			else
				match = false;
		}
		i++;
	}
	if (!IsEmpty(st))
		match = false;
	DestroyStack(st);
	return match;
}


int main(void)
{
	int size = 0;
	char* p;
	char arr[Max] = "(((())))";
	p = arr;
	while (*p != '\0')
	{
		p++;
		size++;
	}
	if (Match(arr, size))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
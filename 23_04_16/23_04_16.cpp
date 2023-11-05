#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define Max 100 

typedef struct
{
	int data[Max];
	int top;
}Sq;


void InitStack(Sq*& s)
{
	s = (Sq*)malloc(sizeof(Sq));
	s->top = -1;
}


void DesStack(Sq*& s)
{
	free(s);
}

bool IsEmpty(Sq* s)
{
	return(s->top == -1);
}

bool Push(Sq*& s, int e)
{
	if (s->top == Max - 1)
		return false;
	s->top++;
	s->data[s->top] = e;
	return true;
}


bool Get(Sq*& s, int &e)
{
	if (IsEmpty(s))
		return false;
	e = s->data[s->top];
	return true;
}

bool Pop(Sq*& s)
{
	if (IsEmpty(s))
		return false;
	s->data[s->top] == NULL;
	s->top--;
	return true;
}


bool Symmetry(int arr[Max])
{
	int i, e;
	Sq* st;
	InitStack(st);
	for (i = 0; arr[i] != '\0'; i++)
		Push(st, arr[i]);
	for (i = 0; arr[i] != '\0'; i++)
	{
		Get(st, e);
		if (arr[i] != e)
		{
			DesStack(st);
			return false;
		}
		DesStack(st);
		return true;
	}
}

void change(int num)
{
	printf("该整形数字的二进制为>>\n");
	if (num <= 2)
	{
		printf("%d\n", num);
		return;
	}
	int e;
	Sq* s;
	InitStack(s);
	while (num > 2)
	{
		e = num % 2;
		Push(s, e);
		num /= 2;
	}
	Push(s, num / 2);
	while (s->top != -1)
	{
		printf("%d", s->data[s->top]);
		Pop(s);
	}
}



int main(void)
{
	int arr[Max] = { 1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1 };
	if (Symmetry(arr))
	{
		printf("该字符为对称的。\n");
	}
	change(8);
	return 0;
}














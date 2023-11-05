#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct Linknode
{
	int data;
	Linknode* next;
}link;
int main()
{
	link* L;
	L = (link*)malloc(sizeof(link));
	
	link* f;
	link* b;
	int a = 0;
	scanf("%d", &a);
	f = L;
	while (a != 0)
	{
		b = (link*)malloc(sizeof(link));
		f -> next = b;
		b->data = a;
		f = f->next;
		b->next = NULL;
		scanf("%d", &a);
	}
	f = L;
	while (f->next != NULL)
	{
		f = f->next;
		printf("%d\n", f->data);
	}
	return 0;
}
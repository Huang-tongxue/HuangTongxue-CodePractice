#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#include"¶Ñ.h"

//void HeapInit(HP* php)
//{
//	assert(php);
//	php->a = NULL;
//	php->size = 0;
//	php->capacity = 0;
//}
//
//void HeapDestroy(HP* php);
//
//void AdjustDwon(HPDataType* a, int child)
//{
//	int parent = (child - 1) / 2;
//	//while (parent >= 0)
//	while (child > 0)
//	{
//		if (a[child] < a[parent])
//		{
//			HPDataType tmp = a[child];
//			a[child] = a[parent];
//			a[parent] = tmp;
//
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapPush(HP* php, HPDataType x)
//{
//	assert(php);
//
//	if (php->size == php->capacity)
//	{
//		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
//		HPDataType* tmp = (HPDataType*)realloc(php->a, newCapacity * sizeof(HPDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//
//		php->a = tmp;
//		php->capacity = newCapacity;
//	}
//
//	php->a[php->size] = x;
//	php->size++;
//
//	AdjustDwon(php->a, php->size - 1);
//}
//
//int main(void)
//{
//	HP PP;
//	HP* P = &PP;
//	HeapInit(P);
//	HeapPush(P,1);
//	HeapPush(P, 2);
//	HeapPush(P, 3);
//	return 0;
//}
//***********************************
 
 
 
 

typedef struct
{
	int* data;
	int size;
	int capacity;
}Pel;

void Init(Pel* P)
{
	P->data = NULL;
	P->capacity = 0;
	P->size = 0;
}
void Back(int* a, int child)
{
	int par = 0;
	while (child != 0)
	{
		par = (child - 1) / 2;
		if (a[child] > a[par])
		{
			int tem = a[child];
			a[child] = a[par];
			a[par] = tem;
		}
		else
		{
			break;
		}
		child = par;
	}
}

void Push(Pel* P, int x)
{
	assert(P);

	if (P->size == P->capacity)
	{
		int newcapacity = (P->capacity == 0) ? 4 : (P->capacity * 2);
		int* tem = (int*)realloc(P->data,newcapacity * sizeof(int));	
		P->capacity = newcapacity;
		if (tem == NULL)
		{
			perror("realloc failed!!\n");
			return;
		}
		P->data = tem;
	}
	P->data[P->size] = x;
	P->size++;
	
	
	Back(P->data, P->size - 1);
}

int main(void)
{
	Pel* P = (Pel*)malloc(0);
	Init(P);
	Push(P, 3);
	Push(P, 2);
	Push(P, 1);
	Push(P, 7);
	Push(P, 6);
	Push(P, 5);
	for (int i = 0; i < P->size; i++)
		printf("%d", P->data[i]);
}
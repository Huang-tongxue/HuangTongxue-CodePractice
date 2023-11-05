#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
//无头不循环单链表
#define MaxSize 3
typedef int SLNData;
typedef struct Stack
{
	SLNData *data ;
	int top;
	int capacity;
}ST;

SLNData STTop(ST* st);//取栈顶元素
int STSize(ST* st);
void STPop(ST* st);
bool STEmpty(ST* st);
void STPush(ST* st, SLNData x);
void STInit(ST* st);
void STDestroy(ST* st);
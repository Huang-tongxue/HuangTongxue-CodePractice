#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
//��ͷ��ѭ��������
#define MaxSize 3
typedef int SLNData;
typedef struct Stack
{
	SLNData *data ;
	int top;
	int capacity;
}ST;

SLNData STTop(ST* st);//ȡջ��Ԫ��
int STSize(ST* st);
void STPop(ST* st);
bool STEmpty(ST* st);
void STPush(ST* st, SLNData x);
void STInit(ST* st);
void STDestroy(ST* st);
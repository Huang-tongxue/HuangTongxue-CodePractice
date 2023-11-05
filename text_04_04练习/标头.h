#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct LinkNode
{
	int data;
	struct LinkNode* next;
}LinkNode;

void CreatListH(LinkNode*& L);
void Show(LinkNode* L);
void CreatListT(LinkNode*& L);
void File(LinkNode*& L, LinkNode*& L1, LinkNode*& L2);

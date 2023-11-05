#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define MaxNumbers 10

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>

typedef int ElemType;
//��ʵ��
typedef struct HeapNode
{
	ElemType* datas;
	int Size;
	int Capacity;
}HP; 


void HPInit(HP* H);//��ʼ��
void HeapPrint(HP* H);//��ӡչʾ
void Swap(ElemType* a, ElemType* b);//����
void HeaPPushDecrease(HP* H, ElemType x);//�Ѳ��뽵��
void HeaPPushIncrease(HP* H, ElemType x);//�Ѳ�������
void SortIncrease(ElemType* Ooo);//��Ooo�������Out of order
void SortDownDecrease(HP* H, int num, int End);//���²���(��һ����Ƕ��)


void AdjustUpIncrease(ElemType* datas, int child);//����Ƕ��
void AdjustUpDecrease(ElemType* datas, int child);//����Ƕ��


void CreatArr(ElemType* arr);//��ʼ�����飨��������в����ĺ���)
void ArrShow(ElemType* arr);








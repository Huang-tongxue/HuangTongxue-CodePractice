#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define MaxNumbers 10

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>

typedef int ElemType;
//堆实现
typedef struct HeapNode
{
	ElemType* datas;
	int Size;
	int Capacity;
}HP; 


void HPInit(HP* H);//初始化
void HeapPrint(HP* H);//打印展示
void Swap(ElemType* a, ElemType* b);//交换
void HeaPPushDecrease(HP* H, ElemType x);//堆插入降序
void HeaPPushIncrease(HP* H, ElemType x);//堆插入升序
void SortIncrease(ElemType* Ooo);//将Ooo变成增序，Out of order
void SortDownDecrease(HP* H, int num, int End);//向下查找(上一个的嵌套)


void AdjustUpIncrease(ElemType* datas, int child);//升序嵌套
void AdjustUpDecrease(ElemType* datas, int child);//降序嵌套


void CreatArr(ElemType* arr);//初始化数组（对数组进行操作的函数)
void ArrShow(ElemType* arr);








#include<stdio.h>
 //SeqList.h
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;//定义SLDateType为int类型
typedef struct SeqList//定义结构体变量
{
	SLDateType* a;//，其中包含数据a
	int size;//，和有效数据个数
	int capacity;//和该结构体容量
}SeqList;//更改名称

// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps)//初始化
{
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * 4);//数据类型为整形数组，故大小为4个整形大小，数据类型用整形指针
	//如果申请空间失败
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SeqListDestroy(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopFront(SeqList* ps);
void SeqListPopBack(SeqList* ps);

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);
//int removeDuplicates(int* nums, int numsSize)
//{
//    int NewSize = 1;
//    if (numsSize <= 1)
//        return numsSize;
//    else
//    {
//        for (int front = 0,back = 0; front < numsSize ; front++)
//        {
//            if (nums[front] == nums[back])
//            {
//                if (front != back)
//                    nums[front] = NULL;
//                continue;
//            }
//            else
//            {
//                back++;
//                nums[back] = nums[front];
//                NewSize++;
//            }
//        }
//        return NewSize;
//    }
//}
//
//int main(void)
//{
//    int nums[3] = { 1,1,2 };
//    printf("%d",removeDuplicates(nums, 3));
//    
//    return 0;
//}





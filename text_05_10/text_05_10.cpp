#include<stdio.h>
 //SeqList.h
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;//����SLDateTypeΪint����
typedef struct SeqList//����ṹ�����
{
	SLDateType* a;//�����а�������a
	int size;//������Ч���ݸ���
	int capacity;//�͸ýṹ������
}SeqList;//��������

// �����ݵĹ���:��ɾ��� 
void SeqListInit(SeqList* ps)//��ʼ��
{
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * 4);//��������Ϊ�������飬�ʴ�СΪ4�����δ�С����������������ָ��
	//�������ռ�ʧ��
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

// ˳������
int SeqListFind(SeqList* ps, SLDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
// ˳���ɾ��posλ�õ�ֵ
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





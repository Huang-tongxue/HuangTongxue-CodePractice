#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


typedef struct LinkNode//����һ���ṹ�����
{
	int Data;//�������
	struct LinkNode* next;//ָ����
}LinkNode;//����


void MyPrint(LinkNode* L);
void CreatLinsT(LinkNode*& L, int arr[], int leng);//β�巨����
void CreatListH(LinkNode*& L, int arr[5], int leng);//ͷ�巨������������
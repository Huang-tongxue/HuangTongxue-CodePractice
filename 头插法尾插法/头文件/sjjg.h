#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


typedef struct LinkNode//定义一个结构体变量
{
	int Data;//存放数据
	struct LinkNode* next;//指针域
}LinkNode;//别名


void MyPrint(LinkNode* L);
void CreatLinsT(LinkNode*& L, int arr[], int leng);//尾插法声明
void CreatListH(LinkNode*& L, int arr[5], int leng);//头插法存入数据声明
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//n �Ľ׳�
int pop(int n)
{
	if (n == 0)
		return 1;
	return n * pop(n - 1);
}
//��ʹ�1�ӵ�n
int MySum(int n)
{
	if (n == 1)
		return 1;
	return n + MySum(n - 1);
}
//쳲���������
int FeiBo(int num)
{
	if (num == 1 || num == 2)
		return 1;
	else
		return (FeiBo(num - 1) + FeiBo(num - 2));
}
//��ŵ��
void Hano(int n, char X/*��ʼ����*/, char Y/*�н�����*/, char Z/*Ŀ������*/)
{
	if (n == 1)
		printf("\t����%d����Ƭ��%c�ƶ���%c\n", n, X, Z);//��ǰX��������ǰ��ֻʣ��С��һ���˾�ֱ��Ų�����һ��
	else
	{
		Hano(n - 1, X, Z, Y);//��n - 1��ȫ������ʼ����x�Ƶ��н�����
		printf("\t����%d����Ƭ��%c�ƶ���%c\n",n,X,Z);
		Hano(n - 1, Y, X, Z);//��n - 1��ȫ�����н������ƶ���Ŀ������
	}
}
typedef struct LinkNode
{
	int a;
	struct LinkNode* next;
}LinkNode;
void RecusiveCreatList(LinkNode*& L)//�ݹ鴴��
{
	int a;
	scanf("%d", &a);
	if (a == 0)
		L = NULL;
	else
	{
		L = (LinkNode*)malloc(sizeof(LinkNode));
		assert(L);
		L->a = a;
		RecusiveCreatList(L->next);
	}
}
void RecusivePrintList(LinkNode* L)//�ݹ��ӡ
{
	if (L == NULL)
		printf("->NULL");
	else
	{
		printf("->%d", L->a);
		RecusivePrintList(L->next);
	}
}
int main(void)
{
	printf("%d\n", pop(5));//n�Ľ׳�
	printf("%d\n", MySum(4));//��1�ӵ�n;
	printf("%d\n", FeiBo(5));//쳲��������е�n���Ƕ���
	Hano(3,'A', 'B', 'C');//��ŵ��
	//�ݹ鴴������
	LinkNode* L;
	RecusiveCreatList(L);
	//�ݹ��ӡ����
	RecusivePrintList(L);
	return 0;
}
#include"Heap.h"


int main(void)
{
	ElemType Ooo[MaxNumbers];
	CreatArr(Ooo);//��������


	//������ŵ������
	HP Decreas;
	HPInit(&Decreas);
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushDecrease(&Decreas, Ooo[i]);
	}
	//չʾ1
	HeapPrint(&Decreas);


	HP Increas;
	HPInit(&Increas);
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushIncrease(&Increas, Ooo[i]);
	}
	//չʾ2
	HeapPrint(&Increas);


	SortIncrease(Ooo);
	//չʾ3
	printf("���ճɹ���");
	ArrShow(Ooo);

	return 0;
}
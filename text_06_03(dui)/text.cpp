#include"Heap.h"


int main(void)
{
	ElemType Ooo[MaxNumbers];
	CreatArr(Ooo);//创建数组


	//将数组放到大堆中
	HP Decreas;
	HPInit(&Decreas);
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushDecrease(&Decreas, Ooo[i]);
	}
	//展示1
	HeapPrint(&Decreas);


	HP Increas;
	HPInit(&Increas);
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushIncrease(&Increas, Ooo[i]);
	}
	//展示2
	HeapPrint(&Increas);


	SortIncrease(Ooo);
	//展示3
	printf("最终成果：");
	ArrShow(Ooo);

	return 0;
}
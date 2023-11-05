#include"Heap.h"


void HPInit(HP* H)//初始化
{

	H->datas = NULL;
	H->Capacity = 0;
	H->Size = 0;
}

void Swap(ElemType* a, ElemType* b)
{
	assert(a);
	assert(b);

	ElemType t = *a;
	*a = *b;
	*b = t;
}

void AdjustUpIncrease(ElemType* datas,int child)
{
	assert(datas);

	int parents = (child - 1) / 2;
	while (child > 0)
	{
		if (datas[child] < datas[parents])
		{
			Swap(&datas[child], &datas[parents]);
		}
		else
		{
			break;
		}
		child = parents;
		parents = (child - 1) / 2;
	}
}

void AdjustUpDecrease(ElemType* datas, int child)//降序
{
	assert(datas);

	int parents = (child - 1) / 2;
	while (child > 0)
	{
		if (datas[child] > datas[parents])
		{
			Swap(&datas[child], &datas[parents]);
		}
		else
		{
			break;
		}
		child = parents;
		parents = (child - 1) / 2;
	}
}

void HeaPPushIncrease(HP* H, ElemType x)//堆插入升序
{
	assert(H);

	if (H->Capacity == H->Size)
	{
		int NewCapacity = (H->Capacity == 0) ? 4 : (H->Capacity) * 2;
		ElemType* tem = (ElemType*)realloc(H->datas, NewCapacity * sizeof(ElemType));
		if (tem == NULL)
		{
			perror("Realloc Failed!!!\n");
			return;
		}
		H->datas = tem;
		H->Capacity = NewCapacity;
	}

	H->datas[H->Size] = x;
	H->Size++;

	AdjustUpIncrease(H->datas,H->Size - 1);
}

void HeaPPushDecrease(HP* H, ElemType x)//堆插入降序
{
	assert(H);

	if (H->Capacity == H->Size)
	{
		int NewCapacity = (H->Capacity == 0) ? 4 : (H->Capacity) * 2;
		ElemType* tem = (ElemType*)realloc(H->datas, NewCapacity * sizeof(ElemType));
		if (tem == NULL)
		{
			perror("Realloc Failed!!!\n");
			return;
		}
		H->datas = tem;
		H->Capacity = NewCapacity;
	}

	H->datas[H->Size] = x;
	H->Size++;

	AdjustUpDecrease(H->datas, H->Size - 1);
}

void HeapPrint(HP* H)
{
	assert(H);

	printf("{");
	int i = 0;
	for (int i = 0; i < H->Size; i++)
	{
		printf("%3d", H->datas[i]);
		if (i + 1 != H->Size)
		printf(",");
	}
	printf("}\n");
}

void CreatArr(ElemType arr[MaxNumbers])//初始化数组
{

	int i = 0;
	for (i = 0; i < MaxNumbers; i++)
	{
		//arr[i] = i;
		scanf("%d", &arr[i]);

	}
	
	printf("Creat Sucess!!!\n");
}

//待调试
void SortDownDecrease(HP* H,int parent,int End)//向下查找
{
	assert(H);

	
	int child = parent * 2 + 1;
	while (child < End)
	{
		if (child + 1 < End && H->datas[child + 1] > H->datas[child])
		{
			child++;
		}

		if (H->datas[child] > H->datas[parent])
		{
			Swap(&H->datas[child], &H->datas[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
	//for (int i = 0; i < H->Size - 2; i++)
	//{
	//	if (H->datas[ta] < H->datas[tb])
	//	{
	//		Swap(&H->datas[ta], &H->datas[tb]);
	//	}
	//	Swap(&H->datas[ta], &H->datas[num]);
	//	num = ta;
	//	ta = num * 2;
	//	tb = ta + 1;
	//}

}

void SortIncrease(ElemType* Ooo)//将数组Ooo调整成增序
{
	//（原则就是不去影响堆原有结构）
	//插入大堆
	assert(Ooo);

	HP Tem;
	HPInit(&Tem);
	
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushDecrease(&Tem, Ooo[i]);
	}
	
	printf("创建堆的情况：");///
	HeapPrint(&Tem);///

	int End = Tem.Size - 1;

	while (End > 0)
	{
		//将最大的头放到尾
		Swap(&Tem.datas[0], &Tem.datas[End]);

		printf("头尾交换：");///*******
		HeapPrint(&Tem);///**********
		//尾隔离
		End--;
		//然后将头元素向下遍历
		SortDownDecrease(&Tem,0,End);

		printf("向下调整：");///*******
		HeapPrint(&Tem);///**********

		//再次交换头元素和尾元素，然后再次隔离，往复循环
		//直到遍历完整个堆
	}
	if (Tem.datas[0] > Tem.datas[1])
		Swap(&Tem.datas[0], &Tem.datas[1]);
	for (int i = 0; i < MaxNumbers; i++)
	{
		Ooo[i] = Tem.datas[i];
	}
	//此时整个数组变成了一个升序数组
	//free(&Tem);
}


void ArrShow(ElemType* arr)
{
	printf("{");
	for (int i = 0; i < MaxNumbers; i++)
	{
		printf("%3d", arr[i]);
		if(i + 1 != MaxNumbers)
		printf(",");
	}
	printf("}\n");
}
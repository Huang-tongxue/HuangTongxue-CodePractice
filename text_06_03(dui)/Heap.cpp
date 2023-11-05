#include"Heap.h"


void HPInit(HP* H)//��ʼ��
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

void AdjustUpDecrease(ElemType* datas, int child)//����
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

void HeaPPushIncrease(HP* H, ElemType x)//�Ѳ�������
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

void HeaPPushDecrease(HP* H, ElemType x)//�Ѳ��뽵��
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

void CreatArr(ElemType arr[MaxNumbers])//��ʼ������
{

	int i = 0;
	for (i = 0; i < MaxNumbers; i++)
	{
		//arr[i] = i;
		scanf("%d", &arr[i]);

	}
	
	printf("Creat Sucess!!!\n");
}

//������
void SortDownDecrease(HP* H,int parent,int End)//���²���
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

void SortIncrease(ElemType* Ooo)//������Ooo����������
{
	//��ԭ����ǲ�ȥӰ���ԭ�нṹ��
	//������
	assert(Ooo);

	HP Tem;
	HPInit(&Tem);
	
	for (int i = 0; i < MaxNumbers; i++)
	{
		HeaPPushDecrease(&Tem, Ooo[i]);
	}
	
	printf("�����ѵ������");///
	HeapPrint(&Tem);///

	int End = Tem.Size - 1;

	while (End > 0)
	{
		//������ͷ�ŵ�β
		Swap(&Tem.datas[0], &Tem.datas[End]);

		printf("ͷβ������");///*******
		HeapPrint(&Tem);///**********
		//β����
		End--;
		//Ȼ��ͷԪ�����±���
		SortDownDecrease(&Tem,0,End);

		printf("���µ�����");///*******
		HeapPrint(&Tem);///**********

		//�ٴν���ͷԪ�غ�βԪ�أ�Ȼ���ٴθ��룬����ѭ��
		//ֱ��������������
	}
	if (Tem.datas[0] > Tem.datas[1])
		Swap(&Tem.datas[0], &Tem.datas[1]);
	for (int i = 0; i < MaxNumbers; i++)
	{
		Ooo[i] = Tem.datas[i];
	}
	//��ʱ������������һ����������
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
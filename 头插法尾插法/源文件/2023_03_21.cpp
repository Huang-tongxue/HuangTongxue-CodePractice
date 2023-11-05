#include
//函数创建一个链表
//头插法存入数据
//尾插法存入数据

int main()
{
	LinkNode* L;
	LinkNode* T;
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int leng;
	leng = sizeof(arr1) / sizeof(arr1[0]);
	CreatListH(L,arr1,leng);
	CreatLinsT(T,arr2,leng);
	MyPrint(L);
	MyPrint(T);
	return 0;
}


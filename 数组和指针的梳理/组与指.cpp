#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	printf("1. %d\n", p);//打印的是地址,
	printf("2. %d\n", *p);//打印的是1
	printf("3. %d\n", *arr);//打印的是1
	printf("4. %d\n", *arr + 1);//打印的是2
	printf("5. %d\n", *(arr + 1));//2
	printf("6. %d\n", (*arr) + 1);//2
	printf("7. %d\n", *p + 1);//2
	printf("8. %d\n", *(p + 1));//2
	printf("9. %d\n", arr[1]);
	printf("\n\n\n");

	int arr2[3][5] = { {1,2,3,4,5} ,{6,7,8,9,10},{11,12,13,14,15} };
	printf("%d\n", arr2[0][2]);//3
	printf("%d\n", *(arr2 + 1)+1);//地址
	printf("%d\n", (*(arr + 1) + 1));//3
	printf("%d\n", *(arr2[0] + 1));//2
	printf("%d\n", *arr2[0] + 1);//2
	printf("\n\n");

	int one[3] = { 1,2,3 }; int two[3] = { 4,5,6, }; int thr[3] = { 7,8,9 };
	int* pa = one, * pb = two, * pc = thr;
	int* arr3[3] = { pa,pb,pc };
	int i;
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", *(*(arr3 + i) + j));
		}
		printf("\n");
	}
	return 0;
}
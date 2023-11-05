#define _CRT_SECURE_NO_WARNINGS 1
//31、在1，2，3，..., 1000的1000个整数中，把三位数中所有十位数是7的数(如170，270，375等)显示出来，
//并求其和。
//#include<stdio.h>
//int main()
//{
//	int n = 0, sum = 0;
//	for(n = 1; n <= 1000; n++)
//	{
//		if (n / 10 == 0)
//		{
//			continue;
//		}
//		if ((n / 10) % 10 == 7)
//		{
//			sum = sum + n;
//		}
//	}
//	printf("%d", sum);
//	return 0;//52450
//}
//32、将一维数组中的n（1 < n <= 10）个数进行反序存放, 并输出。
//	例如：a[5] = { 1,2,3,4,5 } 变为  a[5] = { 5,4,3,2,1 }，输出为：54321。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[] = { 56,25,48,65,21,35,57,96 };
//	n = sizeof(arr) / sizeof(arr[0]);
//	printf("数组原来是：");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int left = 0, right = n - 1;
//	while (left <= right)
//	{
//		int t = 0;
//		t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++; right--;
//	}
//	printf("\n数组变序之后是：");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//31、把100 - 999范围内所有十位数和百位数都为9的整数, 在屏幕上输出, 并统计它们的个数。
//（提示：100 - 999范围内的整数, 十位数和百位数都为9的整数有990、991、.....等。
//#include<stdio.h>
//int main()
//{
//	int n = 0, count = 0,t = 0;
//	for (n = 100, count = 0; n <= 999; n++)
//	{
//		t = n;
//		n = n / 10;
//		if (n % 10 == 9)
//		{
//			n = n / 10;
//			if (n % 10 == 9)
//			{
//				printf("%d\n", t);
//				count++;
//			}
//		}
//		n = t;
//	}
//	printf("count = %d", count);
// return 0;
//}
//32、从键盘输入10个整型数据，放入数组a 中，求其最大值及其所在元素的下标位置，并输出。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {10,52,62,98,5,6,32,54,85,48};
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	scanf("%s", arr[i]);
//	//}
//	int max = -999,x = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			x = i;
//		}
//	}
//	printf("数字是 %d,下标是%d", max, x);
//	return 0;
//}
//37、给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。
//90分以上为‘A’，80～89分为‘B’，70～79分为‘C’，60～69为‘D’，60分以下为‘E’
#include<stdio.h>
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >=90 && score <=100 )
		{
			printf("A\n");
		}
		if (score >= 80&& score <=89 )
		{
			printf("B\n");
		}
		if (score >= 70&& score <= 79)
		{
			printf("C\n");
		}
		if (score >= 60&& score <= 69)
		{
			printf("D\n");
		}
		if (score <= 59)
		{
			printf("E\n");
		}
		else
		{
			printf("成绩不符，请重新输入");
		}
	}
	return 0;
}
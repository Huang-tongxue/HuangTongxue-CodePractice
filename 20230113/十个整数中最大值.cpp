#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, max = 0;
	scanf("%d", &max);
	int n = 0;
	for (n = 0; n < 9; n++)
	{
		scanf("%d", &a);
		if (a > max)
		{
			max = a;
		}
		else
		{
			;
		}
	}
	printf("%d", max);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float sum = 0;
	int  n = 1;
	for (n = 1; n <= 100; n++)
	{
		if (n % 2 == 0)
		{
			sum = sum - (1 / n);
		}
		else if (n % 2 != 0)
		{
			sum = sum + (1 / n);
		}
	}
	printf("%f", sum);
	return 0;
}
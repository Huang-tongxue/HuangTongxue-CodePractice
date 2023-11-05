#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 1,t=0,b=1;
	for (n = 1; n <= 100; n++)
	{
		if (n / 10 == 9)
		{
			b++;
			continue;
		}
		if (n % 10 == 9)
		{
			b++;
		}
	}
	printf("%d", b);
	return 0;
}
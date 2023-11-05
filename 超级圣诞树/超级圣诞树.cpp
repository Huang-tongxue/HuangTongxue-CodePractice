#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int tm = 0;
	int t = 0;
	int i = 0;
	int n = 0;
	int l = 0;
	scanf("%d", &l);//输入要超找的范围1---l
	scanf("%d", &n);//输入要查找的数
	for (i = 1; i <= l; i++)
	{
		tm = i;
		if (tm >= 10)
		{
			while (tm / 10 != 0)
			{
				if (tm % 10 == n)
				{
					t++;
				}
				tm = tm / 10;
			}
			if (tm % 10 == n)
			{
				t++;
			}
			continue;
		}
		if ((tm < 10) && (tm % 10 == n))
		{
			t++;
		}
	}
	printf("%d", t);
	return 0;
}
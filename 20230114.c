#include<stdio.h>
int main()
{
	int n = 0,num=0;
	int a = 0,z = 0;
	scanf("%d", n);
	scanf("%d", z);
	for (a=1;a<=n;a++)
	{
		//²ð½â£¬È¡Óà
		if (a >= 10)
		{
			while (a / 10 > 0)
			{
				if (a % 10 == z)
				{
					num++;
					a = a / 10;
				}
			}
		}
		else if (a < 10)
		{
			if (a % 10 == z)
			{
				num++;
			}
		}

	}
	printf("%d", num);
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int i;
	char m;
	int arr[3];
	printf("是否进行数字型数组测试Y/N\n");
	scanf("%c", &m);
	if (m == 'Y')
	{
		printf("数字型数组测试开始\n");
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (i = 0; i < 3; i++)
		{
			printf("%d\n", arr[i]);
		}
		printf("数字型数组测试完毕\n");
		printf("字符型数组测试开始\n请输入3个字符:"); //字符型数组测试 
		char ch[3];
		for (i = 0; i < 3; i++)
		{
			getchar();
			scanf("%c", &ch[i]);
		}
		for (i = 0; i < 3; i++)
		{
			printf("%c\n", ch[i]);
		}
		printf("第一个字符是%c\n", ch[0]);
		printf("第二个字符是%c\n", ch[1]);
		printf("第三的字符是%c\n", ch[2]);
		printf("字符型数组测试完毕\n");
	}
	else
		return 0;
	return 0;
}
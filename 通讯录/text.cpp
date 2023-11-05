#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Menu(void)
{
	printf("******************\n");
	printf("****1.增加********\n");
	printf("****2.删除********\n");
	printf("****3.查找********\n");
	printf("****4.修改********\n");
	printf("****5.展示********\n");
	printf("****6.排序********\n");
	printf("****0.退出********\n");
	printf("******************\n");

}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main(void)
{
	int input = 0;
	do
	{
		Menu();
		printf("请选择->__");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Menu(void)
{
	printf("******************\n");
	printf("****1.����********\n");
	printf("****2.ɾ��********\n");
	printf("****3.����********\n");
	printf("****4.�޸�********\n");
	printf("****5.չʾ********\n");
	printf("****6.����********\n");
	printf("****0.�˳�********\n");
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
		printf("��ѡ��->__");
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
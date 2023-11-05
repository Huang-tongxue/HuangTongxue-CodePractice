#include<stdio.h>
#define MaxSons 3
#define TreeDataType char
typedef struct SonTree
{
	TreeDataType data;
	struct SonTree* Sons[MaxSons];
}ST;

ST* CreatSonTree(ST*& tr)
{
	scanf("%c", tr->data);
	if (tr->data == '*')
	{
		return NULL;
	}
	else
	{
		int i = 0;

	}
}
int main(void)
{
	
	return 0;
}
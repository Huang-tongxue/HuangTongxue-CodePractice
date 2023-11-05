#include"标头.h"

int main(void)
{
	LinkNode* H = (LinkNode*)malloc(sizeof(LinkNode));
	LinkNode* T = (LinkNode*)malloc(sizeof(LinkNode));
	CreatListH(H);//头插法是倒序存入
	Show(H);
	//CreatListT(T);//尾插法是顺序存入
	//Show(T);
	LinkNode* L1, * L2;
	File(H, L1, L2);
	Show(L1);
	Show(L2);
	return 0;
}
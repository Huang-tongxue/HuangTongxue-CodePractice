#include"��ͷ.h"

int main(void)
{
	LinkNode* H = (LinkNode*)malloc(sizeof(LinkNode));
	LinkNode* T = (LinkNode*)malloc(sizeof(LinkNode));
	CreatListH(H);//ͷ�巨�ǵ������
	Show(H);
	//CreatListT(T);//β�巨��˳�����
	//Show(T);
	LinkNode* L1, * L2;
	File(H, L1, L2);
	Show(L1);
	Show(L2);
	return 0;
}
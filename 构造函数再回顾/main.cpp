#include<iostream>
using namespace std;
class B
{
public:

private:
	int* _data;

};

class A
{
public:
	A(int a, double b, int aa );
	~A();
	void Print(void);

private:
	int _a = 6;
	double _b = 6.6;
	const int _aa = 6;
};

A::A(int a,double b,int aa) 
	:_a(a),_b(b),_aa(aa)
{
	_a = a;//最终决定的位置
	_b = b;
	//_aa = aa;报错，表达式必须是可修改的左值，于此引出初始化列表
}

A::~A()
{
	cout << "~A";
}

void A::Print(void)
{
	cout << _a << _b << _aa << endl;
}
int main(void)
{
	A T;
	T.Print();
	A TT(4,4.4,4);
	TT.Print();
}
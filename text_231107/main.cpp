#include "static_text.h"
#include<iostream>
using namespace std;

class A
{
public:
	static int _Creat;
	static int _NumNow;
	A();
	A(const A& other);
	~A();
	static void Print();//声明给静态，定义不用加static
	A operator= (const A aa);
private:
	int _num;
	
};

int A::_Creat = 0;
int A::_NumNow = 0;

A f2(void);
void func1(void);

A::A()
	:_num(0)
{
	cout << "A( )" << endl;
	_Creat++;
	_NumNow++;
}

A::A(const A& other)
{
	_num = other._num;
	cout << "A(const A& other)";
}

A::~A()
{
	cout << "~A( )" << endl;
	_NumNow--;
}

void  A::Print()
{
	cout << _NumNow << "," << _Creat << endl;
}

A A::operator= (const A aa)
{
	_num = aa._num;
	return *this;
}


using namespace std;
A f2(void)
{
	A a;
	return a;
}

void func1(void)
{
	cout << "/******************/" << endl;
	A aa0;
	A::Print();
	cout << "/******************/" << endl;
	A();
	A::Print();
	cout << "/******************/" << endl;
	A tem = f2();
	A::Print();
	cout << "/******************/" << endl;
	A() = f2();
	A::Print();



	cout << "/******************/" << endl;

}




int main(void)
{

	func1();
	return 0;
}
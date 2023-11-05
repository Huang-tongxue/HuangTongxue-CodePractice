#include<iostream>
#include"ClassDate.h"
using namespace std;
void Text1(void)
{
	Date h;
	Date h1;
	Date h2(2004, 7, 21);

	h1.Print();
	h2.Print();

	cout << (h1 > h2) << endl;
	cout << (h2 > h1) << endl;
	cout << h.GetMonthDay(2003, 1);

	h1 = h2 = Date(1, 1, 1);
	h1.Print();
	h2.Print();
}
void Text2(void)
{
	Date H(2023, 10, 11);
	H += 1;
	H.Print();
	H += 20;
	H.Print();
	H += 200;
	H.Print();
	H += 2000;
	H.Print();
	H += 20000;
	H.Print();

}

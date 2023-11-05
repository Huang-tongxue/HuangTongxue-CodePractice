#include<iostream>
#include"stack.h"
using namespace std;
int main(void)
{
	Stack H;

	H.Push(1);
	H.Push(2);
	H.Push(3);
	H.Push(4);
	H.Push(5);
	
	std::cout << H.GetTop() << std::endl;

	H.Pop();
	std::cout << H.GetTop() << std::endl;

	H.Pop();

	std::cout << H.GetTop() << std::endl;

	H.Pop();

	return 0;
}
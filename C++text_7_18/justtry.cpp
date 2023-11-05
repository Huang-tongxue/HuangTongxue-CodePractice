#include<iostream>
namespace Hanluo
{
	int data = 10;
	
};

int main()
{
	//输出流
	using std::cout;
	cout << "abcdefg!\n" << "higklmn!" << std::endl;
	cout << Hanluo::data << std::endl;
	//输入流
	std::cin >> Hanluo::data;
	cout << Hanluo::data;
}
#include<iostream>
namespace Hanluo
{
	int data = 10;
	
};

int main()
{
	//�����
	using std::cout;
	cout << "abcdefg!\n" << "higklmn!" << std::endl;
	cout << Hanluo::data << std::endl;
	//������
	std::cin >> Hanluo::data;
	cout << Hanluo::data;
}
#include"Date.h"
#include<iostream>
#include <iomanip>
using namespace std;
//����������const����ΪȨ�޵����ԣ�����constҲ���Ե���
Date::Date(int year, int month, int day)//���캯��
{

	m_year = year;
	m_month = month;
	m_day = day;
	//��������Ƿ�Ϸ�
	if (year < 1 || month > 12 || month < 1 || GetMonthDay(year, month) < day)
	{
		perror("Non compliant dates!!");
		Print();
		cout << "was not exist" << endl;
		exit(1);
	}
}
Date::~Date()//��������
{
	//std::cout << "~Date" << std::endl;
}
void Date::Print()//���
{
	cout 
		<< m_year << "��" 
		<< setw(2) << setfill('0') << m_month << "��" 
		<< m_day << "��" << endl;
}
bool Date::IsLeapYear(int year)//�����귵����
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}
int Date::GetMonthDay(int year, int month)//��ȡ�·�����
{
	int NotLeapYearMonthday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && IsLeapYear(year))
		return 29;
	else 
		return NotLeapYearMonthday[month - 1];
}

//���������
Date& Date::operator= (const Date H)//��ֵ���������
{
	if (this != &H)
	{
		m_year = H.m_year;
		m_month = H.m_month;
		m_day = H.m_day;
	}
	return *this;//Ϊ���ܹ����������ֵ
}
Date& Date::operator+=(int day)//�ӵ����������
{
	if (day < 0)//�����Ǹ����޷����У�ת��-=
	{
		return *this -= (-day);
	}
	m_day += day;
	while (m_day > GetMonthDay(m_year, m_month))
	{
		m_day -= GetMonthDay(m_year, m_month);
		++m_month;
		if (m_month == 13)
		{
			m_month = 1;
			++m_year;
		}
	}
	return *this;
}
Date  Date::operator+ (int day) const
{
	//���ܸı�ԭ���ı���
	//������Ҫ��һ����ʱ��
	//Ϊ���и�ֵ���������a=b+c������ֵ��������
	Date tem;
	tem = *this;
	tem += day;
	return tem;

}
Date& Date::operator-=(int day)
{
	if (day < 0)//�����Ǹ����޷����У�ת��+=
	{
		return *this += (-day);
	}
	m_day -= day;
	while (m_day < 1)
	{
		m_month--;
		if (m_month < 1)
		{
			m_month = 12;
			m_year--;
		}
		m_day += GetMonthDay(m_year, m_month);
	}
	if (m_year < 1 || m_day < 1 || m_month < 1)
	{
		Print();
		perror("not exist!");
	}
	return *this;
}
Date  Date::operator- (int day) const
{
	Date tem;
	tem = *this;
	tem -= day;
	return tem;
}
Date& Date::operator++()
{
	return *this += 1;
}
Date& Date::operator++(int)
{
	//���üӼӻ����һ���������
	//���Һ��üӼӷ���ֵ�Ǹı�֮ǰ�ģ�������Ҫ����һ��
	Date tem(*this);//�п����Ĵ���
	*this += 1;
	return tem;
}
Date& Date::operator--()
{
	return *this -= 1;
}


bool Date::operator==(const Date& H) const
{
	if (m_year == H.m_year &&
		m_month == H.m_month &&
		m_day == H.m_day)
		return true;
	else
		return false;
}
bool Date::operator!=(const Date& H) const
{
	if (*this == H)
		return false;
	else
		return true;
}
bool Date::operator> (const Date& H) const
{
	if (m_year > H.m_year)
		return true;
	else if (m_month > H.m_month)
		return true;
	else if (m_day > H.m_day)
		return true;
	else return false;

}
bool Date::operator< (const Date& H) const
{
	if (*this > H || *this == H)
		return false;
	else
		return true;
}
bool Date::operator>=(const Date& H) const
{
	if (*this < H)
		return false;
	else
		return true;
}
bool Date::operator<=(const Date& H) const
{
	if (*this > H)
		return false;
	else
		return true;
}




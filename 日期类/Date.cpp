#include"Date.h"
#include<iostream>
#include <iomanip>
using namespace std;
//如果函数后见const，因为权限的特性，不加const也可以调用
Date::Date(int year, int month, int day)//构造函数
{

	m_year = year;
	m_month = month;
	m_day = day;
	//检查日期是否合法
	if (year < 1 || month > 12 || month < 1 || GetMonthDay(year, month) < day)
	{
		perror("Non compliant dates!!");
		Print();
		cout << "was not exist" << endl;
		exit(1);
	}
}
Date::~Date()//析构函数
{
	//std::cout << "~Date" << std::endl;
}
void Date::Print()//输出
{
	cout 
		<< m_year << "年" 
		<< setw(2) << setfill('0') << m_month << "月" 
		<< m_day << "日" << endl;
}
bool Date::IsLeapYear(int year)//是闰年返回真
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}
int Date::GetMonthDay(int year, int month)//获取月份天数
{
	int NotLeapYearMonthday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && IsLeapYear(year))
		return 29;
	else 
		return NotLeapYearMonthday[month - 1];
}

//运算符重载
Date& Date::operator= (const Date H)//赋值运算符重载
{
	if (this != &H)
	{
		m_year = H.m_year;
		m_month = H.m_month;
		m_day = H.m_day;
	}
	return *this;//为了能够完成连续赋值
}
Date& Date::operator+=(int day)//加等运算符重载
{
	if (day < 0)//参数是负数无法运行，转到-=
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
	//不能改变原来的变量
	//所以需要加一个临时的
	//为了有负值的情况比如a=b+c；返回值给了引用
	Date tem;
	tem = *this;
	tem += day;
	return tem;

}
Date& Date::operator-=(int day)
{
	if (day < 0)//参数是负数无法运行，转到+=
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
	//后置加加会调用一个特殊参数
	//而且后置加加返回值是改变之前的，所以需要开备一份
	Date tem(*this);//有拷贝的代价
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




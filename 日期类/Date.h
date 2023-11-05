#pragma once
#ifndef __DATE_H_
#define __DATE_H_
#include<iostream>
#define ElemTypeDate int
class Date
{
public:
	//注意：缺省参数声明和定义分离，那么声明给定义不给
	Date(int year = 2023, int month = 10, int day = 18);//构造函数
	~Date();							  //析构函数
	
	
	Date& operator= (const Date H);//赋值运算符重载
	Date& operator+=(int day);//运算符重载_加等
	Date  operator+ (int day) const;//运算符重载_加
	Date& operator-= (int day);
	Date  operator- (int day) const;
	Date& operator++ ();
	Date& operator++ (int);
	Date& operator-- ();
	bool  operator==(const Date& H) const;
	bool  operator!=(const Date& H) const;
	bool  operator> (const Date& H) const;//运算符重载_大于
	bool  operator< (const Date& H) const;//运算符重载_小于
	bool  operator>=(const Date& H) const;
	bool  operator<=(const Date& H) const;
	int   operator- (const Date& H) const
	{

	}


	void Print();						  //输出
	int  GetMonthDay(int year, int month);//获取月份天数
	bool IsLeapYear(int year);			  //是闰年返回真

private:
	int m_day;
	int m_month;
	int m_year;
};




#endif // !__DATE_H

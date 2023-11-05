#pragma once
#ifndef __DATE_H_
#define __DATE_H_
#include<iostream>
#define ElemTypeDate int
class Date
{
public:
	//ע�⣺ȱʡ���������Ͷ�����룬��ô���������岻��
	Date(int year = 2023, int month = 10, int day = 18);//���캯��
	~Date();							  //��������
	
	
	Date& operator= (const Date H);//��ֵ���������
	Date& operator+=(int day);//���������_�ӵ�
	Date  operator+ (int day) const;//���������_��
	Date& operator-= (int day);
	Date  operator- (int day) const;
	Date& operator++ ();
	Date& operator++ (int);
	Date& operator-- ();
	bool  operator==(const Date& H) const;
	bool  operator!=(const Date& H) const;
	bool  operator> (const Date& H) const;//���������_����
	bool  operator< (const Date& H) const;//���������_С��
	bool  operator>=(const Date& H) const;
	bool  operator<=(const Date& H) const;
	int   operator- (const Date& H) const
	{

	}


	void Print();						  //���
	int  GetMonthDay(int year, int month);//��ȡ�·�����
	bool IsLeapYear(int year);			  //�����귵����

private:
	int m_day;
	int m_month;
	int m_year;
};




#endif // !__DATE_H

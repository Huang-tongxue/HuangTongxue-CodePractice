#include"FileName.h"

// 获取某年某月的天数
int Date::GetMonthDay(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		std::cout << "31" << std::endl;
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "30" << std::endl;
		return 30;
	}
	else if (month == 2)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			std::cout << "29" << std::endl;
			return 29;
		}
		else
		{
			std::cout << "28" << std::endl;
			return 28;
		}
	}
}

void Date::Creative(int year = 1900, int month = 1, int day = 1)
{
	_year = year;
	_month = month;
	_day = day;
}
Date Date::Copy(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}
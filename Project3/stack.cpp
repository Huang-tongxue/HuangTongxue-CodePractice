#include<iostream>
#include<assert.h>

#include"stack.h"



/*void Stack::Init()
{
	m_data  = 0;
	m_capacity = 0;
	m_top  = 0;//将栈顶置为0
}*/

void Stack::Destroy()//销毁
{
	free(m_data);
	m_capacity = 0;
	m_top = 0;
}

bool Stack::Empty()//判断是否为空
{
	if (m_top == 0)
		return true;
	else if (m_top != 0)
		return false;
}

void Stack::Push(ElemTypeData StackNamedata)
{
	int newcapacity = 0;
//开辟空间******************************************************
	if (m_top == m_capacity )
	{
		if (m_capacity == 0)//如果原来为0就开四个单位的空间
		{
			m_capacity = 4;
			m_data = (ElemTypeData*)std::malloc(sizeof(ElemTypeData) * m_capacity);
			if (m_data == nullptr)
			{
				std::perror("Error: malloc failed");
				exit(-1);
			}
			std::cout << "已经为您申请四个单位空间\n" << std::endl;
		}

		else 
		{
			newcapacity = m_capacity * 2;//新空间为旧空间的二倍
			m_data = (ElemTypeData*)std::realloc(m_data ,sizeof(ElemTypeData) * newcapacity);
			

			if (m_data == nullptr)//开辟新空间失败
			{
				std::perror("Error:realloc failed");
				exit(-1);
			}
			std::cout << "原空间不足，已经为您开辟新的空间\n当前大小" 
				<< newcapacity << std::endl;
			m_capacity = newcapacity;
			
		}
	}
//插入数据*********************************************************
	m_data[m_top] = StackNamedata;
	m_top++;
}

void Stack::Pop()//出栈
{
	//空栈不可以出栈
	if (Empty())//??不知道是否正确??
	{
		std::perror("Error: Nullstack can not Pop!!");
		exit(-1);
	}
	//出栈
	m_top--;
	std::cout << "出栈元素为：" << m_data[m_top] << std::endl;

}

ElemTypeData Stack::GetTop()// 取栈顶元素,返回值为栈顶元素
{
	if (Stack::Empty())
	{
		std::perror("Error: nullstack without top !!");
		exit(-1);
	}
	return m_data[m_top - 1];
}





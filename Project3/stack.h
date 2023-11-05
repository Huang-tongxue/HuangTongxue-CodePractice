#pragma once
#ifndef _STACK_H_
#define _STACK_H_

#define ElemTypeData int

class Stack
{
public:
	Stack(size_t num = 4)
	{
		if (num == 0)
		{
			m_data = nullptr;
			m_capacity = 0;
			m_top = 0;
		}
		else
		{
			m_data = (ElemTypeData*)malloc(sizeof(ElemTypeData) * num);
			if (m_data = nullptr)
			{
				perror("error: malloc failled");
				exit(1);

				m_top = 0;
				m_capacity = (int)num;
			}
		}
		std::cout << "Stack" << std::endl;
	}
	//void Init();//初始化
	void Destroy();//销毁
	bool Empty();//判断是否为空
	void Push( ElemTypeData Stackdata);//进栈
	void Pop();//出栈
	ElemTypeData GetTop();// 取栈顶元素,返回栈顶元素
	~Stack()
	{
		m_capacity = 0;
		m_top = 0;
		free(m_data);
		std::cout << "~Stack" << std::endl;
	}
private:
	int m_top;     //栈顶
	ElemTypeData* m_data;    //顺序栈
	int m_capacity;//空间大小
};






#endif // !_STACK_H_

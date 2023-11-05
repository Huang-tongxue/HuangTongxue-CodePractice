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
	//void Init();//��ʼ��
	void Destroy();//����
	bool Empty();//�ж��Ƿ�Ϊ��
	void Push( ElemTypeData Stackdata);//��ջ
	void Pop();//��ջ
	ElemTypeData GetTop();// ȡջ��Ԫ��,����ջ��Ԫ��
	~Stack()
	{
		m_capacity = 0;
		m_top = 0;
		free(m_data);
		std::cout << "~Stack" << std::endl;
	}
private:
	int m_top;     //ջ��
	ElemTypeData* m_data;    //˳��ջ
	int m_capacity;//�ռ��С
};






#endif // !_STACK_H_

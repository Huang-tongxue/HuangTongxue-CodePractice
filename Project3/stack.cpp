#include<iostream>
#include<assert.h>

#include"stack.h"



/*void Stack::Init()
{
	m_data  = 0;
	m_capacity = 0;
	m_top  = 0;//��ջ����Ϊ0
}*/

void Stack::Destroy()//����
{
	free(m_data);
	m_capacity = 0;
	m_top = 0;
}

bool Stack::Empty()//�ж��Ƿ�Ϊ��
{
	if (m_top == 0)
		return true;
	else if (m_top != 0)
		return false;
}

void Stack::Push(ElemTypeData StackNamedata)
{
	int newcapacity = 0;
//���ٿռ�******************************************************
	if (m_top == m_capacity )
	{
		if (m_capacity == 0)//���ԭ��Ϊ0�Ϳ��ĸ���λ�Ŀռ�
		{
			m_capacity = 4;
			m_data = (ElemTypeData*)std::malloc(sizeof(ElemTypeData) * m_capacity);
			if (m_data == nullptr)
			{
				std::perror("Error: malloc failed");
				exit(-1);
			}
			std::cout << "�Ѿ�Ϊ�������ĸ���λ�ռ�\n" << std::endl;
		}

		else 
		{
			newcapacity = m_capacity * 2;//�¿ռ�Ϊ�ɿռ�Ķ���
			m_data = (ElemTypeData*)std::realloc(m_data ,sizeof(ElemTypeData) * newcapacity);
			

			if (m_data == nullptr)//�����¿ռ�ʧ��
			{
				std::perror("Error:realloc failed");
				exit(-1);
			}
			std::cout << "ԭ�ռ䲻�㣬�Ѿ�Ϊ�������µĿռ�\n��ǰ��С" 
				<< newcapacity << std::endl;
			m_capacity = newcapacity;
			
		}
	}
//��������*********************************************************
	m_data[m_top] = StackNamedata;
	m_top++;
}

void Stack::Pop()//��ջ
{
	//��ջ�����Գ�ջ
	if (Empty())//??��֪���Ƿ���ȷ??
	{
		std::perror("Error: Nullstack can not Pop!!");
		exit(-1);
	}
	//��ջ
	m_top--;
	std::cout << "��ջԪ��Ϊ��" << m_data[m_top] << std::endl;

}

ElemTypeData Stack::GetTop()// ȡջ��Ԫ��,����ֵΪջ��Ԫ��
{
	if (Stack::Empty())
	{
		std::perror("Error: nullstack without top !!");
		exit(-1);
	}
	return m_data[m_top - 1];
}





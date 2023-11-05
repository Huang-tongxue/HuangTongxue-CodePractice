#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MaxSize 100
typedef struct
{
	char data[MaxSize];
	int length;
}SqString;
//���ɴ�
void StrAssign(SqString& s, char cstr[MaxSize])
{
	int i;
	for (i = 0; cstr[i] != '\0'; i++)
	{
		s.data[i] = cstr[i];
	}
	s.length = i;
}

//���ĸ���
void StrCopy(SqString& s, SqString t)
{
	int i;
	for (i = 0; i < t.length; i++)
		s.data[i] = t.data[i];
	s.length = t.length;
}
//�ж��ַ������
bool StrEqual(SqString s, SqString t)
{
	bool same = true;
	int i;
	if (s.length != t.length)
		same = false;
	else
	{
		for (i = 0; i < s.length; i++)
		{
			if (s.data[i] != t.data[i])
			{
				same = false;
				break;
			}
		}
		return true;
	}
}
//���ַ�������
int StrLength(SqString s)
{
	return (s.length);
}
//��������
SqString Concat(SqString s, SqString t)
{
	SqString str;//��������
	int i;
	str.length = s.length + t.length;
	for (i = 0; i < s.length; i++)
		str.data[i] = s.data[i];
	for (i = 0; i < t.length; i++)
		str.data[i + s.length] = t.data[i];
	return str;
 }
//***************�������Ӵ�
SqString SubStr(SqString s, int i, int j)
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || j < 0 || i + j - 1>s.length)
	{
		return str;
	}
	for (k = i - 1; k < i + j - 1; k++)
		str.data[k - i + 1] = s.data[k];
	str.length = j;
	return str;
}
//�Ӵ��Ĳ���
SqString InsStr(SqString s1,int i, SqString s2)
{
	int j;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s1.length)
	{
		return str;
	}
	for (j = 0; j < i - 1; j++)
		str.data[j] = s1.data[j];
	for (j = 0; j < s2.length; j++)
		str.data[i + j - 1] = s2.data[j];
	for (j = i - 1; j < s1.length; j++)
		str.data[s2.length + j] = s1.data[j];
	return str;
}
//�������
void DisStr(SqString s)
{
	if(s.length > 0)
	{
	for (int i = 0; i < s.length; i++)
	printf("%c", s.data[i]);
	printf("\n");
	}
}
//�Ӵ���ɾ��
SqString DelStr(SqString s, int i, int j)//ɾ��s����i��ʼ�ĺ���j��Ԫ��
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j > s.length + 1)//��������ȷʱ���ؿմ�
		return str;
	for (k = 0; k < i - 1; k++)//��s.data[0..i - 2]���Ƶ�str
	{
		str.data[k] = s.data[k];
	}
	for (k = i + j - 1; k < s.length; k++)
	{
		str.data[k - i] = s.data[k];
	}
	str.length = s.length - j;
	return str;
}
//�Ӵ����滻
SqString RepStr(SqString s, int i, int j, SqString t)//i�ַ����д�i��ʼj��Ԫ�أ���t�ַ����滻
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j - 1 > s.length)
		return str;
	for (k = 0; k < i - 1; k++)
		str.data[k] = s.data[k];
	for (k = 0; k < t.length; k++)
		str.data[i + k - 1] = t.data[k];
	for (k = i + j - 1; k < s.length; k++)
		str.data[t.length + k - j] = s.data[k];
	str.length = s.length - j + t.length;
	return str;
}
//������
int main(void)
{
	SqString s1,s2,s3,s4;
	char cstr1[MaxSize] = "abcdefghigklmnopqrstuvwxyz";
	char cstr2[MaxSize] = "abcdefghigklmnopqrstuvwxyz";
	char cstr3[MaxSize] = "asdfghjklqwertyuiopzxcvbnm";
	StrAssign(s1, cstr1);//����
	StrAssign(s2, cstr2);//����
	StrAssign(s3, cstr3);//����
	printf("s1Ϊ>>\n");
	DisStr(s1);
	printf("s2Ϊ>>\n");
	DisStr(s2);
	printf("s3Ϊ>>\n");
	DisStr(s3);
	printf("�ַ�תs1�ĳ���Ϊ>>%d\n", StrLength(s1));//���ַ�������
	printf("s2��s3���Ӻ�Ľ��Ϊ>>\n");
	DisStr(Concat(s2, s3));//����2��3
	printf("��s1������s4�����s4>>\n");
	StrCopy(s4, s1);//��s1������s4�����s4
	DisStr(s4);
	return 0;
}



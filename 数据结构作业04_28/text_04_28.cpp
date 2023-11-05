#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MaxSize 100
typedef struct
{
	char data[MaxSize];
	int length;
}SqString;
//生成串
void StrAssign(SqString& s, char cstr[MaxSize])
{
	int i;
	for (i = 0; cstr[i] != '\0'; i++)
	{
		s.data[i] = cstr[i];
	}
	s.length = i;
}

//串的复制
void StrCopy(SqString& s, SqString t)
{
	int i;
	for (i = 0; i < t.length; i++)
		s.data[i] = t.data[i];
	s.length = t.length;
}
//判断字符串相等
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
//求字符串长度
int StrLength(SqString s)
{
	return (s.length);
}
//串的链接
SqString Concat(SqString s, SqString t)
{
	SqString str;//定义结果串
	int i;
	str.length = s.length + t.length;
	for (i = 0; i < s.length; i++)
		str.data[i] = s.data[i];
	for (i = 0; i < t.length; i++)
		str.data[i + s.length] = t.data[i];
	return str;
 }
//***************串的求子串
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
//子串的插入
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
//串的输出
void DisStr(SqString s)
{
	if(s.length > 0)
	{
	for (int i = 0; i < s.length; i++)
	printf("%c", s.data[i]);
	printf("\n");
	}
}
//子串的删除
SqString DelStr(SqString s, int i, int j)//删除s串中i开始的后面j个元素
{
	int k;
	SqString str;
	str.length = 0;
	if (i <= 0 || i > s.length || i + j > s.length + 1)//参数不正确时返回空串
		return str;
	for (k = 0; k < i - 1; k++)//将s.data[0..i - 2]复制到str
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
//子串的替换
SqString RepStr(SqString s, int i, int j, SqString t)//i字符串中从i开始j个元素，用t字符串替换
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
//主函数
int main(void)
{
	SqString s1,s2,s3,s4;
	char cstr1[MaxSize] = "abcdefghigklmnopqrstuvwxyz";
	char cstr2[MaxSize] = "abcdefghigklmnopqrstuvwxyz";
	char cstr3[MaxSize] = "asdfghjklqwertyuiopzxcvbnm";
	StrAssign(s1, cstr1);//创建
	StrAssign(s2, cstr2);//创建
	StrAssign(s3, cstr3);//创建
	printf("s1为>>\n");
	DisStr(s1);
	printf("s2为>>\n");
	DisStr(s2);
	printf("s3为>>\n");
	DisStr(s3);
	printf("字符转s1的长度为>>%d\n", StrLength(s1));//求字符串长度
	printf("s2和s3连接后的结果为>>\n");
	DisStr(Concat(s2, s3));//链接2和3
	printf("将s1拷贝到s4并输出s4>>\n");
	StrCopy(s4, s1);//将s1拷贝到s4并输出s4
	DisStr(s4);
	return 0;
}



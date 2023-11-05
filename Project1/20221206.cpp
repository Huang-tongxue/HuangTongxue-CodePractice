#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 7; 
	float x = 2.5, y = 4.7;
	printf("%f", (x + a % 3 * (int)(x + y) % a / 4));
	return 0;
}
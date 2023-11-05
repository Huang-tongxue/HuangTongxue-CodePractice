#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int score = 0;
    while (scanf("%d", &score) != EOF)
    {
        if (score < 60)
        {
            printf("Fail\n");
        }
        else if (score >= 60)
        {
            printf("Pass\n");
        }
    }
    return 0;
}

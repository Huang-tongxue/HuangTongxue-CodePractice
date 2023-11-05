#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
typedef struct {
    int no;
    float sc[3];
    float total;
    int rank;
}STU;

void input_data(STU s[])
{

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i].no);
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &s[i].sc[j]);
        }
    }
    /********** End **********/
}
void calculate(STU s[])
{
    /********** Begin **********/
    for (int i = 0; i < 10; i++)
    {
        s[i].total = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s[i].total += s[i].sc[j];
        }
    }

    /********** End **********/
}

void sort_total(STU s[])
{
    /********** Begin **********/
    STU tmp;
    int i = 0;
    int j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (s[j].total < s[j + 1].total)
            {
                tmp = s[j];
                s[j] = s[i + 1];
                s[j + 1] = tmp;
            }
        }
    }
}
void add_rank(STU s[])
{
    for (int i = 0; i < 10; i++)
    {
        s[i].rank = i + 1;
    }
    /********** End **********/
}

void print_data(STU s[])
{
    /********** Begin **********/
    int i = 0;
    int j = 0;
    printf("学号：    语文：    数学：    英语：    总分：    排名：   \n");
    for (i = 0; i < 10; i++)
    {
        printf("%-15d", s[i].no);
        for (j = 0; j <= 2; j++)
        {
            printf("%-15.1f", s[i].sc[j]);
        }
        printf("%-15.1f%d", s[i].total, s[i].rank);
        printf("\n");
    }
}


int main(void)
{
    printf("学号：    语文：    数学：    英语：    总分：    排名：   \n");
    int arr[10] = {99,5,9,6,3,2,4,7,8,0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    for (auto i : arr)
    {
        printf("%d\n", i);
    }
    return 0;
}
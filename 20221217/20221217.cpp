#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    float a = 0;
    scanf("%f", &a);
    if (a >= 0)
    {
        float y = 0;
        y = (int)(a * 10) % 10;
        if (y >= 5) {
            int n = 0;
            n = a / 1 + 1;
            printf("%d", n);
        }
        if (y <= 4) {
            int n = 0;
            n = a / 1;
            printf("%d", n);
        }
    }
    if (a < 0)
    {
        a = 0 - a;
        float y = 0;
        y = (int)(a * 10) % 10;
        if (y >= 5) {
            int n = 0;
            n = a / 1 + 1;
            n = 0 - n;
            printf("%d", n);
        }
        if (y <= 4) {
            int n = 0;
            n = a / 1;
            n = 0 - n;
            printf("%d", n);
        }

    }
    return 0;
}
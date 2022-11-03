#include <stdio.h>

int main()
{
    int i, n;
    int t1 = 0;
    int temp = 0;
    int sum = 0;
    printf(" enter the value of n  ");
    scanf("%d", &n);
    // printf("%d\n", t1);
    for (i = 1; i <= n; i++)
    {
        temp = temp + i * i;
        sum = temp + t1-i+1;
        printf("%d\n", sum);
        t1 = i;
    }

    return 0;
}
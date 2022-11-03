#include <stdio.h>
int main()
{
    int a[10], i, max = 0;
    for (i = 0; i < 10; i++)
    {
        printf("user the enter number ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("max number of arry %d", max);

    return 0;
}

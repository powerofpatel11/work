#include <stdio.h>

int main()
{
    int i, j;
    int a[5], tem;

    for (i = 0; i < 5; i++)
    {
        printf("user enter the arry");
        scanf("%d", &a[i]);
    }

    printf("before arry \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }

    printf("after short arry");
    for (i = 0; i < 5; i++)
    {

        printf(" %d", a[i]);
    }

    return 0;
}
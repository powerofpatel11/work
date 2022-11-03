#include <stdio.h>

int main()
{
    int i, j;
    int a[i];
    int temp = 0;

    for (i = 0; i < 7; i++)
    {
        printf("enter the array = ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d", a[i]);
    }

    printf("max is %d", temp);

    return 0;
}
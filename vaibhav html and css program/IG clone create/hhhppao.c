#include <stdio.h>

int main()
{
    int i, j, n = 5;
    int count=1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",count );
            count++;
        }
        printf("\n");
    }

    return 0;
}
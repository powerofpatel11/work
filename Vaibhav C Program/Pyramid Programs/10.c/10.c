#include <stdio.h>
int main()
{
    int i, j, k, n = 5, h=1;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
         
        {
            printf("%d ",h);
            h=h+1;

        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int i, j, k, n = 6;
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= 2*n-1 ; j++)
        {
            if (j==i || j+i==12)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
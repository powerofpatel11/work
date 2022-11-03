#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 10;
    for (i = 1; i <= n; i++)
    {
         for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == j || j == 1 || i==10)

            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    for (i = 1; i <= n-2; i++)
    {
        for (k = n - 1; k >= n - i; k--)
        {
            printf(" ");
        }
        for (j = n - 1; j >= i; j--)
        {
            if (i == j || j == n - 1)

            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    for (i = 1; i <= n-4; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            
            {
                printf("* ");
            }
        
        }
        printf("\n");
    }

    return 0;
}
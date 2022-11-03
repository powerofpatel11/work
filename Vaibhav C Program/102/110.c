#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 6;
    for (i = 1; i <= n; i++)
    {
        for (k = n; k >= 2*n - i; k--)
        {
            printf("  ");
        }
        for (j = n; j >= i; j--)
        {
            if (i == j ||i+j==8)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            printf("\n");
        }
    }
        return 0;
    }

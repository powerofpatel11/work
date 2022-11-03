#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        

        for (k = 5; k >= n-i; k--)
        {
            printf("  ");
        }

        for (j = 1; j <= n+1-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

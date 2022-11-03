#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("*");
        }
          for (k = 1; k <=i-1; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= n+1-i; j++)
        {
            printf("*");
        }
      
        printf("\n");
    }

    return 0;
}

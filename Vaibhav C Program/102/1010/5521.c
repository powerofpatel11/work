#include <stdio.h>

int main()
{
    int i, j,k, n = 5;
    for (i = 1; i <= n; i++)
    { for(k=1;k<=n-i;k++){
        printf(" ");
    }
        for (j = 1; j <= i; j++)
        {
            if (j == i || j == n)
            {
                printf("1 ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
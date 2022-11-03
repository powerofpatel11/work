#include <stdio.h>
int main()
{
    int i, j, k, n = 5,h;
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++)
         
        {
            printf("%d ",h);
            h=!h;

        }
        h=i%2;
        printf("\n");
    }

    return 0;
}


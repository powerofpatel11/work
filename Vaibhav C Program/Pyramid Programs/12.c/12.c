#include <stdio.h>
int main()
{
    int i, j, k, n = 5, h=1;
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++)
         
        {
            h=i*i;
            printf("%d ",h);
            

        }
        printf("\n");
    }

    return 0;
}


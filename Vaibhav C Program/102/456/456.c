#include <stdio.h>

int main()
{
    int i, j;
    int n = 10;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i% 2 == 0)
            {
                printf("%d   ", j+i-1);
            }

            else
            {
                printf("%d ", i);
                
            }
        }
        printf("\n");
    }

    return 0;
}
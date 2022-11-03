#include <stdio.h>

int main()
{
    int i, j;
    int n = 6;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                printf("A");
            }
        
        
            if (i == 2)
            {
                printf("B");
            }
            
            if (i == 3)
            {
                printf("C");
            }
            
            if (i == 4)
            {
                printf("D");
            }
            
            if (i == 5)
            {
                printf("E");

            }
            if (i == 6)
            {
                printf("F");
                
            }
            
        }
        printf("\n");
    }

    return 0;
}
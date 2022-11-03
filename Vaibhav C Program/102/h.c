#include <stdio.h>

int main()
{
    int i, j;
    int n = 9;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 5)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
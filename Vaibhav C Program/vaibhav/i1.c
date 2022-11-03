#include <stdio.h>
int main()
{
    int i, j, k, n = 7;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == n || i == n)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

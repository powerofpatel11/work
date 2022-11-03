#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("%d", i);
            }
        }

        printf("\n");
    }

    return 0;
}
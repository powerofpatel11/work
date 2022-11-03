#include <stdio.h>

int main()
{
    int i, j, n = 7;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((j == 1 && i <= 6) || (j == n &&i<=6) ||(i==n &&(j==2 ||j==3||j==4||j==5||j==6))||(j==4&&i==4))
            {
                printf("* ");
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
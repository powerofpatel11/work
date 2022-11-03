#include <stdio.h>

int main()
{
    int i, j;
    int n = 9;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {if(i==1&&i+j<=6 || i==5||j==5||i==n&&i+j>=15  ||j==1&&i+j>=6 ||j==n&&i+j<=14)
            printf("* ");
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
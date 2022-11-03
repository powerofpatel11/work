#include <stdio.h>

int main()
{
    int i, j;
    int n = 9;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {if(i==1 &&i+j<=5 ||j==5 ||i==n && i+j>=15 ||j==1&&i+j>=7 ||i==5 || j==n&&i+j<=14 ||i+j==10 ||i==j)
            printf("* ");
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
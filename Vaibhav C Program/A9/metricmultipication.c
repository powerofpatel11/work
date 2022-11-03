#include <stdio.h>

int main()
{
    int c[3][3], b[3][3], a[3][3];
    int i, j, k, mul[3][3] ;
    printf("enter the frist matrics\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the index position %d %d ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("your frist matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            {
                printf("  %d", a[i][j]);
            }
            
        }
        printf("\n");
    }
    printf("enter the second  matrics");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the index position %d %d ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("your second matrix \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  %d", b[i][j]);
        }
        printf("\n");
    }
    printf("multipication of both metrix \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {

                mul[i][j] =( a[i][k] * b[k][j]) + mul[i][j];
            }

        }
                
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            printf("  %d", mul[i][j]);
        }
        printf("\n");

    }

    return 0;
}
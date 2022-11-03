#include <stdio.h>

int main()
{
    int a[3][3], i, j, b[3][3] ,c[3][3];
    printf("enter the frist matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the value of %d %d in index potision", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("your frist matrix is  ...........\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d ", a[i][j]);
        }

        printf("\n");
    }


    printf("enter the second matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the value of %d %d in index potision", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("your second matrix is  ...........\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

printf("additional of both  matrix is  ...........\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
         c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }

        printf("\n");
    }


    return 0;
}


#include <stdio.h>
int main()
{
    int a[3][3], i, j, max;
    printf("user enter the matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the value of %d %d is index position ", i, j);
            scanf("%d",& a[i][j]);
        }
    }
    printf("your  matrix is  ...........\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }

    printf("max number of matrics %d", max);

    return 0;
}
#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    printf(" enter the matrix......\n");
    
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("enter the value for a[%d][%d]index position = ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
    
    printf("your frist matrix is .............\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
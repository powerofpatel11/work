#include <stdio.h>
int main()
{

    int a[3][3];
    int max = 0, min ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the arry=");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < a[i][j])
            
               max= a[i][j];

               if (min>a[i][j])
               min=a[i][j];
            
        }
    }
    printf("max number is =%d\n", max);
    printf("min number is =%d\n", min);

    return 0;
}

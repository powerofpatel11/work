#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 3;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i + 9; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {

            printf("* ");
        }
        printf("\n");
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (k = 10; k >= n - i -1; k--)
        {
            printf("  ");
        }
        for (j = 3; j >= 2 * i - 1; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        for (k = 1; k <= n - i + 9; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == n || i == n)
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

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j == 10 && i == 1 || i==2&&j==3||i==2&&j==9||i==3&&j==2||i==3&&j==4||i==3&&j==8 ||i==4&&j==3 ||i==4&&j==7||i==5&&j==3||i==5&&j==6 ||i==6&&j<=5 ||i==7&&j==3||i==8&&j==3||i==8&&j==3||i==9&&(j==2||j==4))
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

    // for (i = 1; i <= 5; i++)
    // {
    //     for (k = 1; k <= 5 - i+7; k++)
    //     {
    //         printf("  ");
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         if (j == 1)
    //         {
    //             printf("* ");
    //         }
     //         else
    //         {
    //         printf("  ");
    //         }

    //     }
    //     printf("\n");
    // }
    //     for(i=1;i<=2 ;i++){
    //         for(k=1;k<=2-i+1;k++){
    //             printf("  ");
    //         }
    //         for(j=1;j<=2*i-1;j++){
    //             if(j==1||j==n)
    //            { printf("* ");}
    //            else{
    //             printf("  ");
    //            }
    //         }
    //         printf("\n");
    //     }
    //   for(i=1;i<=9;i++){
    //     for(j=1;j<=9;j++){
    //         if(j==3&&i<=4 ||i==3&&j<=5 ||i==5&&(j==2||j==3||j==4) ){
    //             printf("* ");
    //         }
    //         else{
    // printf("  ");
    //         }
    //     }
    //     printf("\n");
    //   }
    //   for(i=1;i<=9;i++){
    //     for(k=1;k<=9-i;k++){
    //         printf("  ");
    //     }
    //     for(j=1;j<=9;j++){
    //         if(j==9){
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }

    //     }
    //     printf("\n");
    //   }

    return 0;
}
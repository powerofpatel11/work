#include <stdio.h>

int main()
{
    int i, j;
    int k, l;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == i * 2 - 1 || j == 1)
            {
                printf("* ");
            }
            else
            {
                for (i = 1; i <= 7; i++)
                    {

                        for (k = 1; k <= i; k++)
                        {
                            printf(" ");
                        }
                        for (l = i - 1; i >= 1; i--)
                        {
                            printf("%d ", l);
                        }
                    }
                
            }
        }
        printf("\n");
    }
    for (i = 1; i <= 7; i++)
    {
        for (j = 7; j >= 2 * i - 1; j--)
        {
            if (j == i * 2 - 1 || j == 7)
            {
                printf("* ");
            }
            else
            {
                {
                    for (i = 1; i <= 7; i++)
                    {

                        for (k = 1; k <= i; k++)
                        {
                            printf(" ");
                        }
                        for (l = i - 1; i >= 1; i--)
                        {
                            printf("%d ", l);
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    //     for(i=1;i<=3;i++)
    //   {  for (j = 4; j >= i-2; j--)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");

    //   }
    return 0;
}
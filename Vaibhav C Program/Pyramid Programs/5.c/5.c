#include <stdio.h>
int main()
{
    int i, j, k, n = 5 ;
    char a=65;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%c",a);
            a++;
            
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a[10], i, even = 0, odd = 0;
    for (i = 0; i < 10; i++)
    {
        printf("enter the value \n");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
          
        }
        else
        {
            odd++;
            
        }

    }

            printf("\n even= %d",even);
        printf("\n odd= %d",odd);

    return 0;
}

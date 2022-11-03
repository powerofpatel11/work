#include <stdio.h>
int main()
{
    int num, i;
    printf("user enter the value ");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {

        printf("the number is prime");
    }

    for (i = 2; i < num; i++)

    {
        if (num % i == 0)
        {
            printf("the number is not prime ");
            break;
            
        }
        else
        {

            printf("the number is  prime ");
            break;
        
        }
    }

    return 0;
}

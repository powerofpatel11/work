#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("user enter the value ");
    scanf("%d", &num);

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("the numer is not prime %d \n", num);


            flag = 1;

            break;
        }
    }
    if (flag == 0)
    {
        printf("the numer is  prime %d", num);
    }



return 0;

}
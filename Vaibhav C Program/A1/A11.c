#include <stdio.h>

int main()
{

    int i, a[5];
    int sum = 0;
    int avarage ;
    for (i = 0; i < 5; i++)

    {
        printf("enter the array ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        avarage=(sum/5);
    }
    printf("sum of arry %d", sum);
    printf("avarage of array %d",avarage);
    return 0;
}
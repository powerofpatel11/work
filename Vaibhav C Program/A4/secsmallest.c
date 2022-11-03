#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int smallest, secsmallest;
    printf(" enter the arry");
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &a[i]);
    }

    smallest = a[0];
    secsmallest = a[1];

    for (i = 0; i < 10; i++)
    {
        if (a[i] < smallest || smallest == secsmallest)
        {
            secsmallest = smallest;
            smallest = a[i];
        }
         else if
            (a[i] < secsmallest && a[i] != smallest)
            {
                secsmallest = a[i];
            }
    }
    printf("smallest number of arry %d\n\n", smallest);
    printf("smallest number of arry %d", secsmallest);

    return 0;
}
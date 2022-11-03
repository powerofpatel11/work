#include <stdio.h>
int main()
{
    int i, a[5];
    int smallest, secsmallest;
    printf("user enter the number\n");
    for (i = 0; i < 5; i++)
    {
        // printf("");
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    secsmallest = a[1];
    for (i = 0; i < 5; i++)

    {
        if (a[i] < smallest || smallest == secsmallest)
        {
            secsmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < secsmallest && a[i] != smallest)
        {

            secsmallest = a[i];
        }
    }
    printf("\n\nsmallest number %d\n\n", smallest);
    printf("Second Smallest number %d", secsmallest);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int a[10];
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter of element a[%d]  = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
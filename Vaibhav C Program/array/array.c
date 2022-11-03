#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elments for arry:  ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value for a[%d] index position:  ", i);
        scanf("%d", &a[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }


return 0;
}
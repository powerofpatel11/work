#include <stdio.h>
int main()
{
    int i, n, a, b, c;
    a = 0, b = 1;
    printf("user enter the value ");
    scanf("%d", &n);
    
    for (i = 3; i <= n; i++)
    {

        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
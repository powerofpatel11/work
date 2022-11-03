#include <stdio.h>

void Fact(int n)
{
    int i, f = 1;
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    printf("Factorial of %d is %d", n, f);
}

int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    Fact(n);
    return 0;
}
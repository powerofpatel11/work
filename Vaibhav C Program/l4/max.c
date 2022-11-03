
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("user enter the three value");
    scanf("%d %d %d",&a, &b, &c);

    (a > b) ? (a > c) ? printf("A is greter") : printf("C is greater") : (b > c) ? printf("b is greter ")
                                                                                 : printf("c is greter ");

    return 0;
}
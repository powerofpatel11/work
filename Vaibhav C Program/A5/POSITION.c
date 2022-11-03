#include <stdio.h>

int main()
{
    int a[10];
    int i, element, flag = 0;

    printf("user enter the value for arry ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("user enter position arry");
    scanf("%d", &element);

    for (i = 0; i < 10; i++)
    {
        if (a[i] == element)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d element positio of arry %d", element, i);
    }
    else
    {
        printf("not found element of arry ....");
    }

    return 0;
}
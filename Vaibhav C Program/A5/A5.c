#include <stdio.h>
int main()
{

    int i, a[5], element, flag = 0;

    printf("enter the element  of arry\n");
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &a[i]);
    }
    printf("user enter the find of postision = ");
    scanf("%d", &element);

    for (i = 0; i < 5; i++)
    {

        if (a[i] == element)

        {
            flag = 1;
            break;
        }
    }
        if (flag == 1)
    {
        printf("%d Element at position %d\n", element, i);
    }
    else
    {
        printf("not element found \n");
    }

    return 0;
}
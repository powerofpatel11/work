#include <stdio.h>

int main()
{

    char s1[100];
    int lenth, flag = 0, i;

    printf("enter the string\n");
    scanf("%s", &s1);
    lenth = strlen(s1);
    for (i = 0; i < lenth; i++)
    {
        if (s1[i] != s1[lenth - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("is not palindrome %s", s1);
    }
    else
    {
        printf("is  palindrome %s", s1);
    }
    return 0;
}
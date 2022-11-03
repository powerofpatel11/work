#include <stdio.h>
int main()
{
    char s1[100];
    int i, lenth, flag = 0;

    printf("enter the string ");
    scanf("%s", &s1);

    lenth = strlen (s1);
    for (i = 0; i < lenth; i++)    
    {
        if (s1[i] != s1[lenth - i - 1])
        {
            flag = 1;
            break;
        }
    }
      if(flag)
      {
          printf("%s is  not palindrome",s1);
      }
      else
       {
      printf("%s is palindrome",s1);
       }
    return 0;
}
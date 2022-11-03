
#include<stdio.h>
#include<string.h>

int main()
{
    int l;
    int temp=0;

    char s[100];

    printf("enter the character of = ");
    scanf("%s",&s);

    l=strlen(s);
    printf("lenth = %d\n",l);

    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            temp=1;
            break;
        }
        
    }
    if(temp==1)
    {
        printf("not.");
    }
    else
    {
        printf("yes");
    }

return 0;
}
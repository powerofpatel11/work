#include <stdio.h>
#include <string.h>
void reverse(char s[])
{ 

    int l = strlen(s);
    int i=0;
    for (i = l; i >= 1; i--)
    {
        printf("%c",s[i]);
    }
}
int main()
{
   
    char s[500] = "vaibhav bhanderi ";
    reverse(s);
    return 0;
}
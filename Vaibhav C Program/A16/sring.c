#include<stdio.h>

int main()
{
    char s1[20]="vaibhv";
    char s2[20]="bhanderi";
 int l1,l2 ,i;
l1=strlen(s1);
l2=strlen(s2);
 for(i=0;i<l1+l2;i++)
{
    s2[l2+i]=s1[i];
}

printf("%s",s2);


return 0;
}
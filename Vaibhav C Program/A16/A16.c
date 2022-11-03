#include<stdio.h>
#include<string.h>
int main ()
{
  int i,l1,l2 ;
char s1[20]= "  vaibhav";
char  s2[20]=" bhanderi";
l1=strlen(s1);
l2=strlen(s2);
for(i=0;i<=l1+l2;i++)
    {
    s1[l1+i]=s2[i];
    }


  printf("%s",s1);


    return 0; 
}
#include<stdio.h>

int main()
{ int i=0,j=0;
  char s1[20]=" vaibhav";
  char s2[20]=" bhanderi";

    while(s1[i]!='\0'){
        i++;
    }
    while (s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    // s1[i]='0';
     printf("%s",s1);
return 0;
}
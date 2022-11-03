#include<stdio.h>

int main()
{
    int  i,count=1;
    char s[20]="BHANDERI VAIBHAV";

    
      
      
      for(  i=0; s[i]!= '\0'; i++)
     {
         
        if(s[i]==' ' || s[i]=='\0')
          {
              count++ ;
          }

      }
    printf("words of string is %d \n",count);
     

return 0;
}
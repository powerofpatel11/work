#include<stdio.h>
int main()
{
int i, n ,fact=1;
printf("user enter the value ");
scanf("%d",&n);
if (n<=1)

 { for  (i=1;i<=n;i++)
      fact=fact*i ;
 
printf("value of fractorial %d",fact);
 }
else 
{
        printf("error........!!!!!!");
}



    




    return 0;
}
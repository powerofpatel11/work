#include<stdio.h>
int main()
{ int n,b,sum ,a;

printf("user enter the value ");
scanf("%d",&n);
  a=n%10;
while (n>=10)
{
    n=n/10;
 
   b=n;
}


   sum=a+b;

   printf("sum of first digit and last digit %d",sum); 
 
    return 0;
}
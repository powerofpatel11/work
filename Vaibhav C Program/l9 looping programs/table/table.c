#include<stdio.h>
int main()
{
int i,n ;
printf("user the enter the value ");
scanf("%d",&n);
printf("the table of %d \n",n);
for(i=1;i<=10;i++)
{  
printf("%d*%d=%d",i,n,n*i);
printf("\n");
    
}



    return 0;
}
#include<stdio.h>
 void fibonacci(int n)
{
 int n1=0,n2=1,n3,i,num;
 printf("user enter the element ");
scanf("%d",&num);
 printf("%d, %d",n1,n2);
 for(i=2;i<=num;i++)
     {
      n3=n1+n2;
printf(", %d ",n3);
     n1=n2;
     n2=n3 ;

     }

}




int main()
{int n;
    fibonacci(n);
return 0;
}
#include<stdio.h>
int main()
{
int a ,b ;

printf("USER  ENTER THE VALUE  ");
scanf("%d",&a);
printf("user enter the value ");
scanf("%d",&b);


printf("the value of a before swap is %d\n",a);
printf("the value of a before swap is %d\n",b);

a=a+b ;
b=a-b ;
a=a-b ;


printf("the value of a after swap is %d\n",a);
printf("the value of a after swap is %d\n",b);



 return 0 ;    
}

#include<stdio.h>
int main()
{int num1,num2,num3 ;
printf("user enter the number ");
scanf("%d",&num1);


printf("user enter the number ");
scanf("%d",&num2);


printf("user enter the number ");
scanf("%d",&num3);



if (num1>=num2 && num2>=num3)
printf("is the largest value of %d",num1);

else if (num2>=num1 && num2>=num3)
 printf("is the largest value of %d",num2);

else

 printf("is the largest value of %d",num3);

    return 0;
}

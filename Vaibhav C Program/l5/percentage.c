#include<stdio.h>
int main()
{ float a,b,c,d,e,percentage ;
 printf("user enter the mathemetrics marks ");
 scanf("%f",&a);


 printf("user enter the hindi marks ");
 scanf("%f",&b);

 
 printf("user enter the biology marks ");
 scanf("%f",&c);

 
 printf("user enter gujrati marks ");
 scanf("%f",&d);
 
 printf("user enter the scince marks ");
 scanf("%f",&e);

percentage=(a+b+c+d+e)/5;

{printf("your score of %f\n",percentage);

}
   if (percentage>75)
   
       printf("distinction\n");
   
       else if (percentage>60 && percentage<=75)
       
           printf("first class\n");

           
       else if (percentage>50 && percentage<=60)
       
           printf("second class\n");


           
       else if (percentage>35 && percentage<=50)
       
           printf("pass class\n");


       else if (percentage>0 && percentage<=35)
       
           printf("fail\n");



       
       
   
   

    return 0 ;
}
#include<stdio.h>
int main()
{

float a,b,c,d,e;
float parcentage ;

printf("user enter the advance engineering mathematics marks ");
scanf("%f",&a);

printf("user enter the machanics of solids marks ");
scanf("%f",&b);


printf("user enter the surveying marks ");
scanf("%f",&c);


printf("user enter the fluid mechanics marks ");
scanf("%f",&d);


printf("user enter the building construction marks ");
scanf("%f",&e);
  

parcentage =  (float)((a+b+c+d+e)/500)*100 ;

    printf("parcentage of the %f ", parcentage);
   


    return 0 ;
}

#include<stdio.h>
int main()
{
float a, t ,r;
printf("user enter the value ");
scanf("%f",&a);

printf("user enter the time ");
scanf("%f",&t);

printf("user enter the rate ");
scanf("%f",&r);

  float h; 
  h= (a*t*r)/100;
 printf("value of simple interest %f ", h);

return 0;
}

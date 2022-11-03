#include <stdio.h>
int main()
{
  int a[5],i, sum = 0;
  float avarage ;
  for (i = 0; i < 5; i++)
  {
    printf("user enter the value ");
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 5; i++)
  {
    sum =sum + a[i];
    avarage=sum/5 ;
      
    
  }
      printf("%d \n", sum);
      printf("%f\n",avarage);
    
return 0;
}

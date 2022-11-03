#include<stdio.h>
int main()
{
 int year ;
 printf("user enter the year ");
 scanf("%d",&year);

if(year%4==0 || year%400==0 && year%100==0)

printf("year is leap year %d", year);
 
 else
 {
    
printf("year is leap not year %d", year);
 }
 



    return 0;
}
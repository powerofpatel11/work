#include<stdio.h>
int main()
{
int m,sum=0, n;
 

printf("user enter the value ");
scanf("%d",&n);


while (n>0){
    m=n%10;
    sum=sum+m;
    n/=10 ;
}
printf("sum is = %d ",sum);

    return 0;
    

}

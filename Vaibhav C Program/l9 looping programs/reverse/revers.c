#include<stdio.h>
int main()
{
    int revers=0,num, rem;
    
    
printf("user enter the  find revers number ");
scanf("%d",&num);

while(num!=0)

{
    rem=num%10;
  revers=revers*10+rem;
    num/=10;
}

printf("the above number revers %d",revers);

    return 0;
}
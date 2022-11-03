#include<stdio.h>
int main()
{ int num,rem,max=0;

printf("Enter the number:");
scanf("%d",&num);

while(num !=0)
{
    rem=num%10;
    printf("\n rem=%d",rem);
    if(max<rem)
    {
        max=rem;
    }

    num=num/10;
}

    printf("\n max=%d",max);

    return 0;
}

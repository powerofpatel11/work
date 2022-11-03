#include<stdio.h>
 void min(int n)
{
 int i,a[200],min,num;
printf("user enter the size of arry");
scanf("%d",&num);
 printf("enter the array elements");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
 
min=a[0];
for(i=0;i<num;i++)
{
if(min>a[i])
min=a[i];
}
printf(" maximum number of arry %d",min);

}


int main()
{
    int n;
min(n);

 
return 0;
}
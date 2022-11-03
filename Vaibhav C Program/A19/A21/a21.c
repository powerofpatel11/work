#include<stdio.h>
 void max(int n)
{
 int i,a[200],max,num;
printf("user enter the size of arry");
scanf("%d",&num);
 printf("enter the array elements");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
 
max=a[0];
for(i=0;i<num;i++)
{
if(max<a[i])
max=a[i];
}
printf(" maximum number of arry %d",max);

}


int main()
{
    int n;
max(n);

 
return 0;
}
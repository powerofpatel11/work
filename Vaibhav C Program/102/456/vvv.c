#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
printf("Enter two strings:");
gets(str1);
gets(str2);
if(strcmp(str1,str2)==0)
{
printf("String are same\n");
}
else
{
printf("String are not same\n");
}
}
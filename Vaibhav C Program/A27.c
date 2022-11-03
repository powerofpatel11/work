#include<stdio.h>

struct emp
{
    int no;
    char name[20];
    char address[60];
    int  age ;
};
int main()
{
 struct emp a1 ;

        printf("Enter the details of id number ");
        scanf("%d",&a1.no);
        printf("your name :");
        scanf("%s",&a1.name);
        printf("your address :");
        scanf("%s",&a1.address);
        printf("enter your age :");
        scanf("%d",&a1.age);


        
        printf("%d\n",a1.no);
        printf("%s\n",a1.name);
        printf("%s\n",a1.address);
        printf("%d\n",a1.age);

return 0;
}
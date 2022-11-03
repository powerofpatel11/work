#include<stdio.h>
int main()
{
    int a,b,c;
int ch;

printf("user enter additional for pess 1 \n");
printf("user enter subtration for pess 2  \n");
printf("user enter multiplication for pess 3  \n");
printf("user enter division for pess  4  \n");


printf("user enter the a ");
scanf("%d",&a);

printf("user enter the value b");
scanf("%d",&b);



printf("Enter your choice");
scanf("%d",&ch);

switch (ch)
{
        case 1:
                 c=a+b;
                printf("%d",c);
                break;
       case 2:
                 c=a-b;
                printf("%d",c);
                 break;
       case 3:
                c=a*b;
                printf("%d",c);
                break; 
       case 4:
                c=a/b;
                printf("%d",c);
                break;
    default:
                printf("Invalid Choice :");

}


    return 0;
}
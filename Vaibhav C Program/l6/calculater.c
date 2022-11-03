#include<stdio.h>

int main()

{ int a,b;
    
    printf("enter value of a = ");
 scanf("%d",&a);
 printf("enter value of b = ");
 scanf("%d",&b);

    printf("additional for press key 1\n");
    printf("subtration for press key 2\n");
    printf("multipication for press key 3\n");
    printf("division for press key 4\n");
    printf("Enter key = ");
    int num;
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        {
            printf("additional of %d",a+b);
        }
        break;
    case 2:
        {
            printf("additional of %d",a-b);
        }
        break;
    case 3:
        {
            printf("additional of %d",a*b);
        }
        break;
    case 4:
        {
            printf("additional of %d",a/b);
        }
        break;
    
    default:
        break;
    }
return 0;
}
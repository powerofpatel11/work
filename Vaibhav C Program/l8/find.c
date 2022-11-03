#include<stdio.h>
#define pi 3.14
int main()
{
    float r,l,b,area;
    int num;
   printf("1 for area of circule\n");
        printf("2 for area of tri.\n");
            printf("3 for area of rec.\n");
  
    printf("Enter the number:");
    scanf("%d",&num);
    
    if(num==1){
                printf("Enter the value of r:");
                scanf("%f",&r);
                area=pi*r*r;
                printf("area of circle %f",area);
            }
            else if(num==2){
                printf("Enter the value of l");
                scanf("%f",&l);
                printf("Enter the value of b");
                scanf("%f",&b);
                area=0.5*l*b;
                printf("area of tri.%f",area);
            }
            else if(num==3){
                printf("Enter the value of l");
                scanf("%f",&l);
                printf("Enter the value of b");
                scanf("%f",&b);

                area=l*b;
                printf("area of rec.%f",area);

            }
            else
            {
                printf("invaild number!!!!");
            }
            
    return 0;
}
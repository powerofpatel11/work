
#include <stdio.h>

struct Emp
{
    int no;
    char name[20];
    char address[60];
    int  age ;
};

int main()
{
    struct Emp e[5];
    for(int i=0;i<5;i++){
        printf("Enter the details of id number e[%d]",i);
        scanf("%d",&e[i].no,i);
        printf("your name e[%d]",i);
        scanf("%s",&e[i].name);
        printf("your address e[%d]",i);
        scanf("%s",&e[i].address);
        printf("enter your age e[%d]",i);
        scanf("%d",&e[i].age);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",e[i].no);
        printf("%s\n",e[i].name);
        printf("%s\n",e[i].address);
        printf("%d\n",e[i].age);


    }

    return 0;
}
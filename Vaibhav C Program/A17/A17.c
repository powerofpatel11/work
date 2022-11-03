#include<stdio.h>
int add(int a, int b){
    return a+b ;
}
int sub(int a, int b){
    return a-b ;
}
int mul(int a, int b){
    return a*b ;
}
int divide(int a, int b){
    return a/b ;
}
int main()
{
    int x=add(9,6);
    int y=sub(56,32);
    int z=mul(78,5);
    int t=divide(80,20);
    printf("additional of %d\n",x);
    printf("subtraction of %d\n",y);
        printf("multipication of %d\n",z);
            printf("division of %d\n",t);
return 0;
}
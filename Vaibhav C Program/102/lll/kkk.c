#include<stdio.h>

int main()
{
    int i,j,k;
    int n=5;

for(i=0;i<n;i++){
    for(k=1;k<=n-i;k++){
        printf(" ");
    }
    
    for(j=0;j<=i;j++){
        if(j%2==0){

   printf("* ");
        }
        else{
            printf("A ");
        }
    }
    printf("\n");
}


return 0;
}
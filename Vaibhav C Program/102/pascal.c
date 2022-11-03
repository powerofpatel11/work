#include<stdio.h>

int main()
{
    int i,j,k;
    int n=5;
    int count=1;
     for(i=0;i<=n;i++){
        for(k=0;k<=n-i;k++){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            if(j==0||i==0){
                count=1;
            }
            else
            
                count=count*(i-j+1)/j;
                printf("%4d",count);
            
            
        }
        printf("\n");
     }


return 0;
}
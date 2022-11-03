#include<stdio.h>

int main()
{
    int i,j,k,n=9;
    int mid=((n/2)+1);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==mid)
            {
                printf("* ");

            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
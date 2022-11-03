#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 4;
    for (i = 0; i <= n; i++)

    {
        

        for (j = 0; j <= i; j++)
        {
        if(j==0&&i==0){
            printf("%d",j);
        }
        else{
            printf("%d",j+1);
        }
        }
        printf("\n");
    }
    return 0;
}
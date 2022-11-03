#include<stdio.h>

int main()
{
    int i, j;
    int a[10];
    int temp = 0;

    for (i = 0; i < 5; i++)
 
    {
        printf("enter the array = ");
        scanf("%d", &a[i]);
    }

    printf("before arry\n");
    for (i = 0; i < 5; i++)
    
    {
    printf(" %d ",a[i]);
        
    }
    
    

    for (i = 0; i < 5; i++)
    
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
printf("after short arry");
    
    for(i=0;i<5;i++)
    { 
        printf("  %d",a[i]);
    }

    return 0;
}
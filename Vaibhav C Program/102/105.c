    #include <stdio.h>

int main()
{
    int i, j, n = 9;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 && i + j >= 7 || i == 5 || j == 5 || i == n && i + j <= 14 || j == 1 && i + j <= 6 || j == n && i + j >= 15 || i == 3 && j == 3 || i == 3 && j == 7 || j == 3 && i == 7 || j == 7 && i == 7)
                printf("* ");
                

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
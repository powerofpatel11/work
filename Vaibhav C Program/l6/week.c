#include <stdio.h>
int main()
{
    printf("user press m\n");
    printf("user press t\n");
    printf("user press w\n");
    printf("user press h\n");
    printf("user press f\n");
    printf("user press S\n");
    printf("user press r\n");
    char ch;
    printf("Enter the choice:");
    scanf("%c", &ch);

    
    switch (ch)
    {
    case'm':
        printf("Monday");
        break;
    
    case 't':
        printf("tuesday");
        break;

    case'w':
        printf("wednesday");
        break;

    case'h':
        printf("thursday");
        break;

    case 'f':
        printf("friday");
        break;
    case's':
        printf("saturday");
        break;
    case'r':
        printf("sunday");
        break;
    default:
        printf("Invalid Input");
    }

    return 0;
}
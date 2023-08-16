#include <stdio.h>

int main()
{
    int op;
    printf("Enter day number:");
    scanf("%d", &op);

    switch(op)
    {
    case 1:
        printf("Friday");
        break;
    case 2:
        printf("Saturday");
        break;
    case 3:
        printf("Sunday");
        break;
    case 4:
        printf("Monday");
        break;
    case 5:
        printf("Tuesday");
        break;
    case 6:
        printf("Wednesday");
        break;
    case 7:
        printf("Thursday");
        break;
    default:
        printf("Something wrong");
        break;
    }}

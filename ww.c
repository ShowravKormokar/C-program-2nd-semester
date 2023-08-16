#include <stdio.h>

int main()
{
    int choice;
    printf("Choice\t\tResult\n");
    printf("1\t\tFriday\n");
    printf("2\t\tSaturday\n");
    printf("3\t\tSunday\n");
    printf("4\t\tMonday\n");
    printf("5\t\tTuesday\n");
    printf("6\t\tWednesday\n");
    printf("7\t\tThursday\n");

    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice)
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
    }
}



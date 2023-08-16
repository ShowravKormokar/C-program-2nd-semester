#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    char choice;
    printf("Choice\t\tResult\n");
    printf("+\t\tAdd\n");
    printf("-\t\tSubtract\n");
    printf("*\t\tMultiply\n");
    printf("/\t\tDivide\n");
    printf("%\t\tRemainder\n");

    printf("Enter choice: ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        printf("%d\n", a / b);
        break;
    case '%':
        printf("%d\n", a % b);
        break;
    default:
        printf("Something wrong");
        break;
    }
}

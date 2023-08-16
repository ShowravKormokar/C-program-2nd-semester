#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter Two integer numbers: ");
    scanf("%d %d", &a,&b);

    int choice;
    printf("Choice\t\tResult\n");
    printf("1\t\tAdd\n");
    printf("2\t\tSubtract\n");
    printf("3\t\tMultiply\n");
    printf("4\t\tDivide\n");
    printf("5\t\tRemainder\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("%d\n",a+b);
        break;
    case 2:
        printf("%d\n",a-b);
        break;
    case 3:
        printf("%d\n",a*b);
        break;
    case 4:
        printf("%d\n",a/b);
        break;
    case 5:
        printf("%d\n",a%b);
        break;
    default:
        printf("Something wrong");
        break;
    }
}

#include <stdio.h>

int main()
{
    int a, b, c, sum;
    printf("Enter your score: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;
    int avg = sum/3;

    if (avg >= 60)
        printf("First");
    else if ((avg >= 50&&avg <= 59))
        printf("second");
    else if ((avg >= 40&&avg <= 49))
        printf("Third");
    else
        printf("Fail");

    return 0;
}


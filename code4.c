#include <stdio.h>

int main()
{
    double P,I;
    printf("Deposit amount: ");
    scanf("%lf %lf", &P, &I);
    printf("%lf\n",P+(P*I/100));
    //return 0;
    getch();
}

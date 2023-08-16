#include <stdio.h>
#include <math.h>

int main()
{
    int n, p, power;
    printf("Enter a number and power: ");
    scanf("%d %d", &n, &p);

    power= pow(n,p);
    printf("%d", power);

    return 0;
}

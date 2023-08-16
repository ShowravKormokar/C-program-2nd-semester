#include <stdio.h>

int main()
{
    float Celcius;
    scanf("%f", &Celcius);

    printf("%g", ((9 * Celcius) / 5) + 32);
    return 0;
}
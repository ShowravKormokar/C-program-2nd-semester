#include <stdio.h>

int main()
{
    float day, year, month, a;
    scanf("%f", &day);

    year = day / 365;
    a = year - (int)year;
    month = a * 12;
    a = month - (int)month;
    day = a * 30;

    printf("%d year %d month %d day\n", (int)year, (int)month, (int)day);
    return 0;
}
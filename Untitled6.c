#include <stdio.h>

int main()
{
    double v,t;

    printf("Enter the velocity and time: ");
    scanf("%lf %lf", &v, &t);
    printf("Displeacement:%lfkm.\n", v*(60*t)/1000);
    getch();
}

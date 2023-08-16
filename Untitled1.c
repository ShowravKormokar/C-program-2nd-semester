#include <stdio.h>

int main()
{
    int a, b, c;
    a= 7 | 2;
    b= a & 1;
    c= a ^ b;

    printf("%d\n", a+b+c);

    return 0;
}

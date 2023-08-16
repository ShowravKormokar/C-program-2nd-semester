#include <stdio.h>

int main()
{
    const float rate = 77;
    float tk, doller, a;
    scanf("%f", &tk);

    doller = tk / rate;
    a = doller - (int)doller;
    tk = a * rate;

    printf("%d doller %g BDT\n", (int)doller, tk);
    return 0;
}
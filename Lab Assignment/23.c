#include <stdio.h>

int main()
{
    int a, b, Q, R;
    scanf("%d %d", &a, &b);

    Q = a / b;
    R = a - (b * Q);

    printf("%d %d", Q, R);
    return 0;
}
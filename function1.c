#include<stdio.h>

int numSquare(int x);
int main()
{
    int a, b;
    scanf("%d", &a);
    b = numSquare(a);
    printf("%d", b);
    return 0;
}
int numSquare(int x)
{
    int y= x*x;
    return y;
}

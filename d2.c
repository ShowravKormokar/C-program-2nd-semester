#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value:");
    scanf("%d", &x);

    //if (x % 2 != 0)
    if(x&1)
        printf("%d\n", x*x*x);
    else
        printf("%d\n", x*x);

    return 0;
}

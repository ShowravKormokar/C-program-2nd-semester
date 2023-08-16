#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value:");
    scanf("%d", &x);

    //if (x % 2 != 0)
    if(x&1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}

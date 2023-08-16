#include <stdio.h>

int main()
{
    int n, fd, ld;
    scanf("%d", &n);

    fd = (n / 100);
    ld = (n % 10);

    printf("Square of %d is %d and Square of %d is %d", fd, (fd * fd), ld, (ld * ld));
    return 0;
}
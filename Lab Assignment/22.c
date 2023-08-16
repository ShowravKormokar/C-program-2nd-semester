#include <stdio.h>

int main()
{
    int n, fd, ld;
    scanf("%d", &n);

    ld = (n % 10);
    fd = (n / 10);

    printf("%d%d", ld, fd);
    return 0;
}
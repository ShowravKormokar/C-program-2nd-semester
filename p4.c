#include <stdio.h>

int main()
{
    int n,fd,ld;
    scanf("%d", &n);

    fd= (n/100);
    ld= (n % 10);

    printf("%d %d", (fd*fd), (ld*ld));

    return 0;
}


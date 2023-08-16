#include <stdio.h>

int main()
{
    int S, h, m, sec;
    scanf("%d", &S);

    h = (S/3600);
    m = (S / 60);
    sec = (S % 3600);


    printf("%d:", h);
    printf("%d:", m);
    printf("%d", sec);

    return 0;
}

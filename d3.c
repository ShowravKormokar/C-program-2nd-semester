#include <stdio.h>

int main()
{
    int s;
    printf("Enter your score: ");
    scanf("%d", &s);

    if (s >= 60)
        printf("First");
    else if ((s >= 50&&s <= 59))
        printf("second");
    else if ((s >= 40&&s <= 49))
        printf("Third");
    else
        printf("Fail");

    return 0;
}

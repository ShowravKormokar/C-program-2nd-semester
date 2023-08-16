#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Input the 3 numbers:\n");
    for (i=1; i<=3; i++)
    {
        printf("Number-%d: ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("%d", sum);
    return 0;
}

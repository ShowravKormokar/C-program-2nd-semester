#include<stdio.h>
int main()
{
    int i, j, k, n, sum=1;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <n; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d", sum);
            sum=sum+1;
        }
        printf("\n");
    }
    return 0;
}

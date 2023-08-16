#include <stdio.h>
int main()
{
    int i, j, k,l,n;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            for(k=1;k<=i;k++)
            {
                printf("  ");
            }
        }
    }

    /*for (i = 1; i <=n; i++)//row
    {
        for (k = 1; k <= i; k++)//col
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++) // Row
    {
        for (j = i; j < n; j++) // Space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // Column
        {
            printf("*");
        }
        printf("\n");
    }*/


    /*for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <=n; i++)//row
    {
        for (k = 1; k <= i; k++)//col
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
}

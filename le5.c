#include<stdio.h>

int main()
{
    int i, n, b=0, sum=0;
    printf("Enter a value: \n");
    scanf("%d", &n);
    int a[100];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for( i=2; i<=(a[i]/i); i++)
    {
        if(a[i]%i==0)b++;
        continue;
    }
    if(b==0)
    {
        sum=sum+a[i];//Prime
    }
    printf("%d", sum);
}

#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter a value: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter a elements: \n");
    for(i=0; i<n; i++)
    {   printf("Enter your %d value : ",i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
        printf("%d ", sum);
    }

}

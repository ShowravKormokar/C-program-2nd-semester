#include<stdio.h>

int main()
{
    int n,a, sum=0;
    scanf("%d", &n);
    for(; n>0; n=n/10)
    {
        a=n%10;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}
/*int n,a,sum=0;
printf("Enter a number: ");
scanf("%d",&n);

while(n>0){
    a=n%10;
    sum+=a;
    n=n/10;
}
printf("\nSum is: %d", sum);
return 0;*/

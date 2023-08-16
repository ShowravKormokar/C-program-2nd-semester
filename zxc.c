#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int i, b=0;
    for(i=0; i<10; i++)
        if((a[i]%2)==0)b+=a[i];
        printf("%d",b);
}

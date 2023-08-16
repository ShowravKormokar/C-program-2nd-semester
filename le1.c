#include<stdio.h>
void revfun (int m);
//int numfun (int x);
int main()
{
    int a;
    printf("Enter value: \n");
    scanf("%d", &a);
    revfun (a);
    //printf("%d + %d = %d\n", a,rev,a+rev);
    //numfun (a);
}
void revfun (int m)
{
    int f, l, temp;
    f=m/10;
    l=m%10;
    temp=f;
    f=l;
    l=temp;
    printf("%d%d", f, l);
}




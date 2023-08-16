#include <stdio.h>
int main()
{
    int b, p, m;
    scanf("%d %d %d", &b, &p, &m);
    printf("%d\n", BigMod (b, p,m));
}
int BigMod( int b, int p, int m )
{
    if(p == 0) return 1;
    else if(p%2 == 1)
    {
        int part1= b%m;
        int part2 =BigMod (b, p-1,m);
        return (part1*part2)% m;
    }
    else if( p%2 == 0)
    {
        int half1 = BigMod (b, p/2, m);
        return (half1*half1)%m;
    }
}




/*#include<stdio.h>

int main()
{
    int i,a,b,c,m,p=1;
    printf("Enter your valu: ");
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        p *= a;
    }
    m =p%c;
    printf("%d",m);
}
*/

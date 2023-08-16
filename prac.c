#include <stdio.h>

int main()
{
    /*int a=-5, b=4, c=2;
    a=(a|b)-(a&&c);
    b=(b^a)+c++;
    c=(a+b+c)||(b&&c);
    printf("%d", (a||b)*a&c);*/
    /*int a=0, b=-3, c=-1;
    a=(a^c)-(b||b);
    b=(a&&b&&c);
    c=(b|a)+(a|b)-(a&c);
    printf("%d", (a||b)-b*c);*/
    int a=-1, b=-2, c=5;
    a=(b||c)&&(a++);
    b=(++b)-(a^c);
    c=a&c+(a|b)+(c++);
    printf("%d",(a+b+c)*(a-c*b+a)+(a&&c));
    /*int a=2, b=-3,c=0;
    a=(b^c)+(a++);
    b=a-(c++);
    c=a+(--b);
    printf("%d",(b*c)+(a-b));*/
}

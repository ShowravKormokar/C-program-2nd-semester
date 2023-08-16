#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *p;
    p=(int*)malloc(3);
    for(int i=0; i<3; i++)  p[i]=i+10;
    p=(int*)realloc(4);
    p[3]=13;
    for(int i=0; i<4; i++) printf("%d\n",p[i]);


    return 0;
}


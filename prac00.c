#include<stdio.h>
#include<string.h>
void myFunc(char a[]);
void rev(char b[]);

int main()
{
    char n[200];
    gets(n);
    myFunc(n);
    rev(n);

    return 0;
}
void myFunc(char a[])
{
    int sum=0;
    int total=strlen(a);
    for(int i=0; a[i]; i++)
    {
        switch(a[i])
        {
        case '1':
            sum+=1;
            break;
        case '2':
            sum+=2;
            break;
        case '3':
            sum+=3;
            break;
        case '4':
            sum+=4;
            break;
        case '5':
            sum+=5;
            break;
        case '6':
            sum+=6;
            break;
        case '7':
            sum+=7;
            break;
        case '8':
            sum+=8;
            break;
        case '9':
            sum+=9;
            break;
        }
    }
    printf("Sum: %d\n",sum);
    printf("Digit Numbers: %d\n",total);
}
void rev(char b[])
{
    int i, size=strlen(b);

    for (i = size; 0<=b[i]; i--)// use for loop to iterate the string
    {
        printf("Reverse Number: %c\n", b[i]);
    }
}
/*#include <stdio.h>
int sum_function(int n);
int ave_function(int n);
int main()
{
    int n;
    printf("Enter a value: \n");
    scanf("%d",&n);
    int result = sum_function(n);//function call
    int average = ave_function(n);
    printf("Sum= %d , Average= %d",result,average);

    return 0;
}
int sum_function(int n)//function pototype
{
    int i,sum=0;

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}
int ave_function(int n)
{
    int i, x=0;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            x++;
        }
    }
    return x;
}
*/


/*#include<stdio.h>
char slType(char sml);
char upType(char cal);
char diType(char num);
char otType(char sps);

int main()
{
    char ch;
    printf("Enter an input: ");
    scanf("%c", &ch);
    printf("%c is lowercase.\n", slType(ch));
    printf("%c is uppercase.\n", upType(ch));
    printf("%c is digit.\n", diType(ch));
    printf("%c is special symbol.\n",otType(ch));
    return 0;
}
char slType(char sml)
{
    if(sml>='a' && sml<='z')
        return sml;
    else if(sml>='A' && sml<='Z')
        return sml;

    else if(sml>='0' && sml<='9')
        return sml;
    else
    return sml;
}
*/

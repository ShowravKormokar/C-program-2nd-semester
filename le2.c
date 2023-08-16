/*
    A
   AB
  ABC
 ABCD
ABCDE
*/

#include<stdio.h>

int main()
{
    int i, j, k, n;
    printf("Enter a value: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)//row
    {
        for (j = i; j < n; j++) // Space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)//col
        {
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }
}

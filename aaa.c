#include <stdio.h>
int main()
{
    int  search, c, n,flag=0;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers numbers\n", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search) //If found
        {
            printf("%d is present at location %d.\n", search, c);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d isn't present in the array.\n", search);


    return 0;
}

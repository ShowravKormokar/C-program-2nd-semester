#include<stdio.h>
int main ()
{
    int i, j,r,c;
    printf("Enter row and column numbers:\n");
    scanf("%d %d", &r, &c);
    int a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value for disp[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //Displaying array elements
    printf("Two Dimensional array elements:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
    /* for(j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");*/
    /*
    int i, j, a, n, number[30];
    printf("Enter the value of N\n");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below\n");

    for (i = 0; i < n; ++i)
    {
        printf("%d ", number[i]);
    }
    */

}
/*int main()
{
    int i,n;
    int array[100];
    printf("Enter the number of elements (less then 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // storing the largest number to arr[0]
    for (i = 1; i < n; ++i)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }

    printf("Largest element = %d\n", array[0]);

    return 0;
}*/



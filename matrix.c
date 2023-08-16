#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,r3,c3;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1!=r1)//c1==r1
    {
        printf("Wrong! Please, enter a correct order.\n");
    }
    else
    {
        //Input First Matrix
        int A[r1][c1];
        printf("Enter an elements for first matrix:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("First [%d][%d]= ",i,j);
                scanf("%d", &A[i][j]);
            }
        }
        //Input Second Matrix
        int B[r2][c2];
        printf("Enter an elements for second matrix:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("Second [%d][%d]= ",i,j);
                scanf("%d", &B[i][j]);
            }
        }
        int C[r1][c2];
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                C[i][j]=0;
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<r2; k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d  ", C[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}

#include<stdio.h>

struct vehicle
{
    int speed;
    int number_of_wheels;
    int milage;
};

int main()
{
    struct vehicle product[2][2];
    int i, j;
    for(i=0; i<2; i++)
    {
        printf("Product %d: \n", i+1);
        for(j=0; j<2; j++)
        {
            scanf("%d %d %d", &product[i][j].speed, &product[i][j].number_of_wheels, &product[i][j].milage);
            //if (j==0) printf("Truck: \n");
            //else printf("Car: \n");
        }
        printf("Speed: %d\nNumber_of_Wheels: %d\nMilage: %d\n", product[i][j].speed, product[i][j].number_of_wheels, product[i][j].milage);
    }
}

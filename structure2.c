#include<stdio.h>
#include<string.h>

struct employee
{
    char name[80];
    int age;
    char street[80];
    char city[80];
};

int main()
{
    int n;
    scanf("%d",&n);
    fflush(stdin);
    struct employee emply[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter Name: ");
        fgets(emply[i].name,80,stdin);
        fflush(stdin);
        printf("Enter Age: ");
        scanf("%d",&emply[i].age);

        fflush(stdin);
        printf("Enter City: ");
        fgets(emply[i].city,80,stdin);
        fflush(stdin);
        printf("Enter Street: ");
        fgets(emply[i].street,80,stdin);
        fflush(stdin);

    }
    printf("Only belong to Pune city:\n\n");
    char comp[]= {'P','u','n','e',' ','c','i','t','y',10,'\0'};
    for(int i=0; i<n; i++)
    {
        if(strcmp(emply[i].city,comp)==0)printf("Name: %s Age: %d\n", emply[i].name, emply[i].age);
    }
    return 0;
}

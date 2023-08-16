#include<stdio.h>
#include<string.h>
#define total 5
struct employee
{
    char name[80];
    int age;
    float salary;
};
void emp_disp(struct employee em[total]);
void emp_sal(struct employee em[total]);
int main()
{
    struct employee emply[total];
    for(int i=0; i<total; i++)
    {
        printf("Enter %dth name: ",i+1);
        fgets(emply[i].name,80,stdin);

        printf("Enter %dth age, salary: ",i+1);
        scanf("%d %f", &emply[i].age, &emply[i].salary);
        fflush(stdin);
    }
    emp_disp(emply);
    emp_sal(emply);

    return 0;
}

void emp_disp(struct employee em[total])
{
    for(int i=0; i<total; i++)
    {
        printf("%d: Name: %s Age: %d Salary: %f\n",i+1, em[i].name, em[i].age, em[i].salary);
    }
}
void emp_sal(struct employee em[total])
{
    float temp=em[0].salary;
    int index=0;

    for(int i=0; i<total; i++)
    {
        if(temp<em[i].salary)
        {
            temp=em[i].salary;
            index=i;
        }
    }
    printf("For highest salary: Name: %s Age: %d Salary: %f\n", em[index].name, em[index].age, em[index].salary);

}
/*#include <stdio.h>

struct Employee{
    char name[30];
    int age;
    double salary;
};

int main()
{
    //number of employees
    int n=2;

    //array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Age: ");
        scanf("%d",&employees[i].age);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Age \t: ");
        printf("%d \n",employees[i].age);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}
*/

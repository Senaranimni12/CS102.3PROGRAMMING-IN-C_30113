#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname;
    float basesalary,newsalary,inc;
    printf("Enter the employee name");
    scanf("%s",&empname);
    printf("Enter the base salary");
    scanf("%f",&basesalary);

    if(basesalary>=10000)
        inc=basesalary*0.15;
    else if (basesalary>=5000)
        inc=basesalary*0.10;
    else
        inc=basesalary*0.05;
    newsalary=basesalary+inc;

    printf("Employee name %s\n",empname);
    printf("New salary %.2f\n",newsalary);


    return 0;
}

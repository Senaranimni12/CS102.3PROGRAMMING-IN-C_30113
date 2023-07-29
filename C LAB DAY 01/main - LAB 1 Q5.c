#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,total,avg;
    printf("Enter the first number");
    scanf("%f",&num1);
    printf("Enter the second number");
    scanf("%f",&num2);
    total=num1+num2;
    avg=total/2;
    printf("Total value is:%f\n",total);
    printf("The average is%f\n",avg);

    return 0;
}

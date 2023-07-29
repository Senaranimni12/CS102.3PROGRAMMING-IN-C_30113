#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp;
    printf("Enter the first name");
    scanf("%d",&num1);
    printf("Enter second name");
    scanf("%d",&num2);

    printf("Before swap:,num1=%d,num2=%d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swap:num1=%d,num2=%d\n",num1,num2);

    return 0;
}

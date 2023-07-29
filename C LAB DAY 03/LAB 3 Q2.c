#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,max,min;

    printf("Enter the three integers");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1>num2>num3)
        max=num1;
        else if (max>num2);
        else (max=num3); {

    if (num1<num2<num3)
        min=num1;
        else if (min<num2);
        else (min=num3); }


    printf("The highest number is %d\n",max );
    printf("The smallest number is %d\n",min );


    return 0;
}

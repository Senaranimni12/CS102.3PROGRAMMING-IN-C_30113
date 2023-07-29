#include <stdio.h>
#include <stdlib.h>
               int main()
{
int num;
int fac=1;
int i=1;

printf("Enter the number:");
scanf("%d",&num);

if(num<0)
{
    printf("unvalid input");

}
else if (num=0)
{
    printf("factorial=1");
}
else
    for(i=1;i<=num;i++)
{
    fac*=i;
}
printf("The factorial of %d is: %d\n",num,fac);
    return 0;
}

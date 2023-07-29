#include <stdio.h>
#include <stdlib.h>
int main()
{
int marks;
int x;
int total=0;
float average;

for(x=1;x<=10;x++)
{
   printf("Enter the %d marks",x);
    scanf("%d,&marks");
}
total=total+marks;
average=marks/10.0;
printf("average=%f\n",average);
if (average<=50)
    printf("Fail");
else
    printf("Pass");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,reversenum=0,digit;

printf("Enter a number");
scanf("%d",&num);
 do
 {
     digit =num % 10;
     reversenum = reversenum*10+digit;
     num /= 10;
 }
 while (num>10);

 printf("Reversed number %d\n",reversenum);
    return 0;
}




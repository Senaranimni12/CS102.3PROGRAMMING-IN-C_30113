 #include <stdio.h>
#include <stdlib.h>

int main()
{int number, originalNumber, remainder, sumOfDigits = 0;

 printf("Enter a number: ");
scanf("%d",&number);

  originalNumber = number;

  while (number > 0)
  {
    remainder = number % 10;
    sumOfDigits += remainder;
    number /= 10;
  }

  if (originalNumber == sumOfDigits)
  {
    printf("The number is an Armstrong number.");
  }
  else
  {
    printf("The number is not an Armstrong number.");
  }
               return 0;
}

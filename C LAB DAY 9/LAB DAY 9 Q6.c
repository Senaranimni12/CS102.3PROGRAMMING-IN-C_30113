#include <stdio.h>
#include <stdlib.h>

int main()
{int base ,exponent ,result = 1;

  printf("Enter base: ");
  scanf("%d", &base);

  printf("Enter exponent: ");
  scanf("%d", &exponent);

  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }

  printf("The  power of %d is: %d", result);
    return 0;
}









#include <stdio.h>
#include <stdlib.h>

int main()
{int first = 0, second = 1, fibonacci, i;

  printf("The first 10 numbers of the Fibonacci Sequence are: \n");

  for (i = 0; i < 10; i++)
  {
    fibonacci = first + second;
    first = second;
    second = fibonacci;

    printf("%d\n", fibonacci);
  }
    return 0;
}











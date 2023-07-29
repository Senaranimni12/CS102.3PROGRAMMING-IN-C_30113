 #include <stdio.h>
#include <stdlib.h>

int main()
{
int choice, radius;

  printf("Select an operation:\n");
  printf("1. Calculate the circumference of a circle\n");
  printf("2. Calculate the area of a circle\n");
  printf("3. Calculate the volume of a sphere\n");
  printf("4. Exit\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("The circumference of the circle is %.2f\n", 2 * 3.14159 * radius);
    break;
  case 2:
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("The area of the circle is %.2f\n", 3.14159 * radius * radius);
    break;
  case 3:
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("The volume of the sphere is %.2f\n", 4 * 3.14159 * radius * radius * radius / 3);
    break;
  case 4:
    exit(0);
    break;
  default:
    printf("Invalid choice.\n");
  }

    return 0;
}


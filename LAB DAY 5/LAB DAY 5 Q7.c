#include <stdio.h>
#include <stdlib.h>

int main()
{
  int basic_salary, years_of_service, monthly_sales;
  char city;

  // Input the salesman's basic salary,years of service,monthly sales,city
  printf("Enter the salesman's basic salary: ");
  scanf("%d", &basic_salary);

  printf("Enter the salesman's years of service: ");
  scanf("%d", &years_of_service);

  printf("Enter the salesman's monthly sales: ");
  scanf("%d", &monthly_sales);

  printf("Enter the salesman's city (C for Colombo): ");
  scanf(" %c", &city);

  // Calculate the salesman's additional allowance
  int additional_allowance = 0;
  if (years_of_service > 5)
  {
    additional_allowance = basic_salary * 0.1;
  }

  // Calculate the salesman's city allowance
  int city_allowance = 0;
  if (city == 'C') {
    city_allowance = 2500;
  }

  // Calculate the salesman's bonus
  int bonus = 0;
  if (monthly_sales <= 25000)
  {
    bonus = monthly_sales * 0.1;
  }
  else if (monthly_sales <= 50000)
  {
    bonus = monthly_sales * 0.12;
  }
  else
  {
    bonus = monthly_sales * 0.15;
  }

  // Calculate the salesman's gross remuneration
  int gross_remuneration = basic_salary + additional_allowance + city_allowance + bonus;

  // Print the salesman's gross remuneration
  printf("The salesman's gross remuneration is: %d\n", gross_remuneration);



    return 0;
}


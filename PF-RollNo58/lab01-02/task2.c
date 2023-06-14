// Task02: Using scanf() and printf()Create a program that has the following output: (the price should be taken as input from the user)

// Price of one page:	4.75 Rs
// Price of 15 pages:	71.25 Rs Price after discount:	60.00 Rs

#include <stdio.h>

int main()
{
  float price, discount;
  printf("Enter the price of a page : ");
  scanf("%f", &price);
  float total = 15 * price;

  discount = total - (total * 15.79 / 100);

  printf("Price of one page: %.2f Rs \n", price);
  printf("Price of 15 pages: %.2f Rs \n", total);
  printf("Price after discount: %.2f Rs", discount);

  return 0;
}

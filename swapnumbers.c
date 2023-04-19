#include <stdio.h>

int main() {
  double first, second, temp;

  // Ask for User Input
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // Value of first is stored in temp
  temp = first;
  // Value of second is stored in first
  first = second;
  // Value of temp (initial value of first) is stored in second
  second = temp;

  // Print Swapped numbers 
  printf("\nSwapped 1st number = %f\n", first);
  printf("Swapped 2nd number = %f", second);

  return 0;
}
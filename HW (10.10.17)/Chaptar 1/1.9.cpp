
#include <stdio.h>

int main ()
{
  int faren;
  float cel;
  printf("Enter temperature of Fahrenheit: armaan  ");
  scanf("%d", &faren);
  cel = (faren - 32) * 5.0 / 9.0;
  printf("%d F in Celsius is: %.2f C\n", faren, cel);
  return 0;
}

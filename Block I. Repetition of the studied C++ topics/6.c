#include <stdio.h>

int main(void)
{
  double C, F;

  printf("Ввети температору С: ");

  scanf("%lf", &C);

  F = C * 9 / 5 + 32;

  printf("Температура в F: %.2f\n", F);
}
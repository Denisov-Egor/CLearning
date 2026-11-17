#include <stdio.h>

int main(void)
{
  int number;

  printf("Привет\n");

  printf("Ваше любимое число: %d \n", number);

  scanf("%d", &number);

  printf("Ваше любимое число: %d\n", number);

  return 0;
}
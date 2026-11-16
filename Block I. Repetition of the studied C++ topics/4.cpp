#include <stdio.h>

int main(void)
{
  int number1;
  int number2;
  int sum;

  printf("Введите 1 и 2 число: ");

  scanf("%d %d", &number1, &number2);

  sum = number1 + number2;

  printf("Сумма: %d\n", sum);

  return 0;

}
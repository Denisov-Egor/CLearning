#include <stdio.h>

int main(void)
{
  double number1;
  double number2;

  printf("Введите 1 и 2 число: ");

  scanf("%lf %lf", &number1, &number2);

  printf("Сумма: %.2f\n", number1 + number2);
  printf("Разность: %.2f\n", number1 - number2);

  if (number2 != 0)
  {
    printf("Частное: %.2f\n", number1 / number2);
  }else
  {
    printf("Ошибка: деление на ноль\n");
  }
  
  printf("Произведение: %.2f\n", number1 * number2);

}
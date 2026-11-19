#include <stdio.h>

int main(void)
{
  int number;

  printf("Введите число: ");

  if (scanf("%d", &number) != 1)
  {
    printf("Ошибка.");
    return 1;
  }else
  {
    printf("%d", number);
  }
}
#include <stdio.h>

int main(void)
{
  double meters;

  printf("Введите длину в метрах: ");

  if (scanf("%lf", &meters) != 1)
  {
    printf("Ошибка.\n");
    return 1;
  }
  
  printf("РЕЗУЛЬТАТЫ\n");
  printf("Километры: %.3f\n", meters / 1000);
  printf("Метры: %.3f\n", meters);
  printf("Сантиметры: %.3f\n", meters * 100);
  printf("Миллиметры: %.3f\n", meters * 1000);

}
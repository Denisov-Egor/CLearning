#include <stdio.h>
#include <limits.h>

int main(void)
{
  int a, b;

  printf("=== КАЛЬКУЛЯТОР ЦЕЛЫХ ЧИСЕЛ ===\n\n");

  printf("Введите 1 число: ");

  if (scanf("%d", &a) != 1)
  {
    printf("Ошибка ввода 1 числа.\n");
    return 1;
  }
  
  printf("Введите 2 число: ");
  
  if (scanf("%d", &b) != 1)
  {
    printf("Ошибка ввода 2 числа.\n");
    return 1;
  }
  
  printf("\nРЕЗУЛЬТАТЫ:\n");

  if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
  {
    printf("Сложение переполнено.\n");
  }else
  {
    printf("Сложение: %d\n", a + b);
  }
  
  if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b))
  {
    printf("Вычитание переполнено.\n");
  }else
  {
    printf("Вычитание: %d\n ё", a - b);
  }
  
  if (a == 0 || b == 0)
  {
    printf("Умножение: 0\n");
  }
  else if ((a == INT_MIN && b == -1) || (b == INT_MIN && a == -1))
  {
    printf("Умножение переполнено.\n");
  }
  else if (a > 0)
  {
    if ((b > 0 && a > INT_MAX / b) || (b < 0 && b < INT_MIN / a))
    {
      printf("Умножение переполнено.\n");
    }else
    {
      printf("Умножение: %d\n", a * b);
    }
  }else
  {
    if ((b > 0 && a < INT_MIN / b) || (b < 0 && a < INT_MAX / b))
    {
      printf("Умножение переполнено.\n");
    } else
    {
      printf("Умножение: %d\n", a * b);
    }
  }
  
  if (b == 0)
  {
    printf("Деление: невозможно (деление на ноль)\n");
    printf("Остаток: невозможно (деление на ноль)\n");
  }else if (a == INT_MIN && b == -1)
  {
    printf("Деление: переполнение\n");
    printf("Остаток: переполнение\n");
  }else
  {
    printf("Деление: %d\n", a / b);
    printf("Остаток: %d\n", a % b);
  }
  
  
}
#include <stdio.h>

int main(void)
{
  int number;
  int ch;

  printf("Введите целое число: ");

  if (scanf("%d", &number) != 1)
  {
    printf("Ошибка.");
  
    while ((ch = getchar()) != '\n' && ch != EOF)
    { 
    }

    return 1;
  }

  printf("Введено число: %d\n", number);
}
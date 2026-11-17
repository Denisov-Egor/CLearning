#include <stdio.h>

int main(void)
{
  int a, b;
  int temp;

  printf("Введите 1 и 2 число: ");

  scanf("%d %d", &a, &b);

  printf("До обмена: %d, %d\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("После обмена: %d, %d\n", a, b);  
}
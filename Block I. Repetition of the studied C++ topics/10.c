#include <stdio.h>

int main(void)
{
  char first_char, second_char, third_char;

  printf("Введите три символа: ");
  scanf(" %c %c %c", &first_char, &second_char, &third_char);

  printf("\nВведённые символы: %c %c %c\n", first_char, second_char, third_char);

  printf("\nКоды символов:\n");
  printf("%c = %d\n", first_char, (int)first_char);
  printf("%c = %d\n", second_char, (int)second_char);
  printf("%c = %d\n", third_char, (int)third_char);

}
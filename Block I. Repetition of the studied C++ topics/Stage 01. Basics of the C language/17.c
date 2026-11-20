#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int symbol;

  printf("Введите символ: ");

  symbol = getchar();

  if (symbol == EOF)
  {
    printf("Ошибка чтения или конец ввода.\n");
    return 1;
  }
  
  printf("\n=== АНАЛИЗ СИМВОЛА ===\n");

  printf("Символ: %c\n", symbol);
  printf("Код: %d\n", (unsigned char)symbol);

  if (isalpha((unsigned char)symbol))
  {
    printf("Буква: да\n");
    printf("Верхний регистр: %c\n", toupper((unsigned char)symbol));
  
    printf("Нижний регистор %c\n", tolower((unsigned char)symbol));
  }
  else
  {
    printf("Буква: нет\n");
  }
  
  if (isdigit((unsigned char)symbol))
  {
    printf("Цыфра: да\n");
  }
  else
  {
    printf("Цыфра: нет\n");
  }
  
  if (isspace((unsigned char)symbol))
  {
    printf("Пробельный символ: да\n");
  }
  else
  {
    printf("Пробельный символ: нет\n");
  }
}
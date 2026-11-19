#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("============================================\n");
  printf("          АНАЛИЗ ТИПОВ ДАННЫХ C\n");
  printf("============================================\n");

  printf("\n[1] ОБЩАЯ ИНФОРМАЦИЯ\n");
  printf("Количество битов в байте: %d\n", CHAR_BIT);

  printf("\n[2] РАЗМЕРЫ ЦЕЛОЧИСЛЕННЫХ ТИПОВ\n");
  
  printf("char: %zu bytes\n", sizeof(char));
  printf("short: %zu bytes\n", sizeof(short));
  printf("int: %zu bytes\n", sizeof(int));
  printf("long: %zu bytes\n", sizeof(long));
  printf("long long: %zu bytes\n", sizeof(long long));

  printf("\n[3] РАЗМЕРЫ ВЕЩЕСТВЕННЫХ ТИПОВ\n");

  printf("float: %zu bytes\n", sizeof(float));
  printf("double: %zu bytes\n", sizeof(double));
  printf("long double: %zu bytes\n", sizeof(long double));

  printf("\n[4] ДИАПАЗОНЫ ЦЕЛОЧИСЛЕННЫХ ТИПОВ\n");

  printf("signed char:   %d ... %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char: 0 ... %u\n", (unsigned int)UCHAR_MAX);

  printf("short: %d ... %d\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned short: 0 ... %u\n", (unsigned int)USHRT_MAX);

  printf("int: %d ... %d\n", INT_MIN, INT_MAX);
  printf("unsigned int: 0 ... %u\n", UINT_MAX);

  printf("long: %ld ... %ld\n", LONG_MIN, LONG_MAX);
  printf("unsigned long: 0 ... %lu\n", ULONG_MAX);

  printf("long long: %lld ... %lld\n", LLONG_MIN, LLONG_MAX);
  printf("unsigned long long: 0 ... %llu\n", ULLONG_MAX);

  printf("\n[5] МАКСИМАЛЬНЫЕ ЗНАЧЕНИЯ ВЕЩЕСТВЕННЫХ ТИПОВ\n");

  printf("float: %e\n", (double)FLT_MAX);
  printf("double: %e\n", DBL_MAX);
  printf("long double: %Le\n", LDBL_MAX);

  printf("\n========================================\n");
  printf("             ОТЧЕТ ЗАВЕРШЕН\n");
  printf("========================================\n");

}
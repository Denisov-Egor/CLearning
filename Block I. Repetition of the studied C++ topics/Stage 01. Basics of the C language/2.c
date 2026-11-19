#include <stdio.h>

int main(void)
{
  double totalMemory;
  double freeMemory;
  double cpuUsage;
  double cpuTemperature;

  double usedMemory;
  double memoryUsage;

  printf("=== СИСТЕМНЫЙ МОНИТОРИНГ ===\n");

  printf("Введите общий объём оперативной памяти (МБ): ");

  if (scanf("%lf", &totalMemory) != 1)
  {
    printf("Ошибка: некорректный ввод!\n");
    return 1;
  }
  
  printf("Введите свободный объём оперативной памяти (МБ): ");

  if (scanf("%lf", &freeMemory) != 1)
  {
    printf("Ошибка: некорректный ввод!\n");
    return 1;
  }
  
  printf("Введите загрузку процессора (%%): ");

  if (scanf("%lf", &cpuUsage) != 1)
  {
    printf("Ошибка: некорректный ввод!\n");
    return 1;
  }
  
  printf("Введите температуру процессора (°C): ");

  if (scanf("%lf", &cpuTemperature) != 1)
  {
    printf("Ошибка: некорректный ввод!\n");
    return 1;
  }

  if (totalMemory <= 0)
  {
    printf("Ошибка: общий объём RAM должен быть больше нуля!\n");
    return 1;
  }
  
  if (freeMemory < 0 || freeMemory > totalMemory)
  {
    printf("Ошибка: некорректный объём свободной RAM!\n");
    return 1;
  }
  
  if (cpuUsage < 0 || cpuUsage > 100)
  {
    printf("Ошибка: загрузка CPU должна быть от 0 до 100%%!\n");
    return 1;
  }
  
  if (cpuTemperature < -50 || cpuTemperature > 150)
  {
    printf("Ошибка: недопустимая температура CPU!\n");
    return 1;
  }

  usedMemory = totalMemory - freeMemory;
  memoryUsage = (usedMemory / totalMemory) * 100;

  printf("\n========== ОТЧЁТ ==========\n\n");

  printf("ОПЕРАТИВНАЯ ПАМЯТЬ\n");
  printf("Общий объём: %.2f МБ\n", totalMemory);
  printf("Свободно: %.2f МБ\n", freeMemory);
  printf("Используется: %.2f МБ\n", usedMemory);
  printf("Использование RAM: %.2f%%\n", memoryUsage);

  printf("\nПРОЦЕССОР\n");
  printf("Загрузка CPU: %.2f%%\n", cpuUsage);
  if (cpuUsage < 50)
  {
    printf("Состояние: НОРМА\n");
  }else if (cpuUsage < 80)
  {
    printf("Состояние: ПРЕДУПРЕЖДЕНИЕ\n");
  }else
  {
    printf("Состояние: КРИТИЧЕСКИЙ\n");
  }

  printf("\nТЕМПЕРАТУРА\n");
  printf("Температура CPU: %.2f °C\n", cpuTemperature);

  if (cpuTemperature < 70)
  {
    printf("Состояние: НОРМА\n");
  }else if (cpuTemperature < 90)
  {
    printf("Состояние: ПРЕДУПРЕЖДЕНИЕ\n");
  }else
  {
    printf("Состояние: КРИТИЧЕСКИЙ\n");
  }

  printf("\n==========================================\n");

  return 0;
}
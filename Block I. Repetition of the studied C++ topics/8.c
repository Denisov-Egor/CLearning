#include <stdio.h>

int main(void)
{
  int cpu_cores;
  double ram_size;
  double cpu_frequency;
  char device_code;

  printf("========== ИНФОРМАЦИЯ О КОМПЬЮТЕРЕ ==========\n");

  printf("Введите количество ядер процессора: ");
  scanf("%d", &cpu_cores);

  printf("Введите объём оперативной памяти (ГБ): ");
  scanf("%lf", &ram_size);

  printf("Введите частоту процессора (ГГц): ");
  scanf("%lf", &cpu_frequency);

  printf("Введите буквенный код устройства: ");
  scanf(" %c", &device_code);

  printf("=============== ОТЧЁТ ===============\n");

  printf("Количество ядер: %d\n", cpu_cores);
  printf("Объём оперативной памяти: %.2f\n", ram_size);
  printf("Частота процессора: %.2f\n", cpu_frequency);
  printf("Код устройства: %c\n", device_code);

  printf("=====================================\n");

}
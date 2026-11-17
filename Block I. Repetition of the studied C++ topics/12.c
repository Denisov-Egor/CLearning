#include <stdio.h>

int main(void)
{
  int age;
  double height_cm;
  double weight_kg;

  if ( scanf("%d %lf %lf", &age, &height_cm, &weight_kg) != 3)
  {
    printf("Ошибка.");
  }else
  {
    printf("%d %.2f %.2f\n", age, height_cm, weight_kg);
  }
  
  

}
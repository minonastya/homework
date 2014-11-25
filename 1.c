//двоичное представление числа
//Миновская Настя
#include <stdio.h>
int main(void)
{
  int n, i;
  const r = 31;
  scanf("%d", &n);
  if (n == 0) 
  {
    printf("%d", 0);
  }
  else
  {
    for (i = 0; ((n >> r) & 1) == 0; i++) (n = n << 1);
    for(; i <= r; i++) 
    {
      printf("%d", (n >> r) & 1);
      n = n << 1; 
    }
  }
  printf("\n");
  return 0;
}

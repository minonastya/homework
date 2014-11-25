//возведение числа a в степень n
//Миновская Настя
#include <stdio.h>
int main(void)
{
  int n, i;
  float a, b;
  const r = 31;
  scanf("%f""%d", &a, &n);
  if (n == 0) 
  {
    printf("%d\n", 1);
  }
  else 
  {
    if (n > 0)
    {
      b = a; 
      a = 1;
    }
    else if (n < 0) 
    {
      b = 1/a; 
      a = 1;
      n = ~ n + 1;
    }
    for (i = 0; ((n >> r) & 1) == 0; i++)
    {
      n = n << 1;
    }
    n = n >> i;
    for (; i <= r; i++) 
    {
      if (n & 1 == 1) (a *= b);
      b *= b;
      n = n >> 1; 
    }
    printf("%f\n", a); 
  }
  return 0;
}

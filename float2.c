//Разложение числа типа float. 2 способ
//Миновская Настя
#include <stdio.h>
int main(void)
{
  float a, b;
  int p, s, e, m;
  struct
  {
    int type;
    union
    {
      int ival;
      float fval;
    } val;
  } data;

  scanf("%f%f", &a, %b);
  data.val.fval = a / b;
  p = data.val.ival;
  s = (p >> 31) & 1;
  e = (p >> 23) & ((1 << 8) - 1);
  m = p & ((1 << 23) - 1);
  if (s == 0)  
  {
    s = 1;
  }
  else s = -1;
  if ((e == 255) && (m == 0) && (s == -1)) 
  {
    printf("-Infinity\n"); 
  }
  else if ((e == 255) && (m == 0) && (s == 1)) 
  {
    printf("+Infinity\n");
  }
  else if ((e == 255) && (m != 0)) 
  {
    printf("NaN\n");
  }
  else if ((e == 0) && (m == 0))
  {
    printf("Zero\n");
  }
  else printf("%d*2^%d*%f\n", s, e-127,1 + ((float)m / (1 << 23)));
  return 0;
}

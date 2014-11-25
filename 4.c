//знак целого числа
//Миновская Настя
#include <stdio.h>
int main(void)
{
  int n, k;
  scanf("%d", &n);
  k = (n >> 31) & 1;
  printf("%d\n",k | !(!n) | (0 - k));
  return 0;
}

//влезет ли число n в k битов
//Миновская Настя
#include <stdio.h>
int main()
{
  int n, p, m, k;
  scanf("%d", &n);
  scanf("%d", &k);
  p = n & ~(n >> 31);
  m = (~(n - 1) - 1)  & (n >> 31);
  n = !((p >> (k - 1)) | (m >> (k - 1)));
  printf("%d\n", n);
  return 0;
}

//влезет ли число n в k битов
//Миновская Настя
#include <stdio.h>
int main()
{
  const r = 31;
  int n, p, m, k;
  scanf("%d", &n);
  scanf("%d", &k);
  p = n & ~(n >> r);
  m = (~(n - 1) - 1)  & (n >> r);
  n = !((p >> (k - 1)) | (m >> (k - 1)));
  printf("%d\n", n);
  return 0;
}

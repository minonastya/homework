//влезет ли число n в k битов
//Миновская Настя
#include <stdio.h>
int main(void)
{
  int fitBits(int x, int y)
  {  
    return !( (x >> (y - 1)) + !!(x >> (y - 1)));
  }
  int n,k;
  scanf("%d,%d", &n, &k);
  printf("%d\n", fitBits(n, k));
  return 0;
}

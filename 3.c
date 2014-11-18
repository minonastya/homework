//Влезет ли число n в k битов. 1 - да, 0 - нет.
//Миновская Настя
#include <stdio.h>
int main(void)
{
int n, k, c;
const r = 31;
scanf("%d,%d",&n,&k);
c = !(((n >> (k - 1)) << (k - 1)) ^ ((n >> r) << (k - 1)));
printf("%d\n", c);
return 0;
}

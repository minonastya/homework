//знак целого числа
#include <stdio.h>
int main(void)
{
int n, i, k;
scanf("%d", &n);
k = (n >> 31) & 1;
printf("%d\n",k | (n & 1) | (0 - k));
return 0;
}

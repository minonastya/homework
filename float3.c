//Разложение числа типа float. 3 способ
//Миновская Настя
#include <stdio.h>
int main(void)
{
int p, s, e, m, s1, e1, m1;
union{
 float fval, a, b;
 struct
  {
 unsigned int m: 23;
 unsigned int e: 8;
 unsigned int s: 1;
  } bitfields;
} data;

scanf("%f%f", &a, &b);
data.fval = a / b;
s1 = data.bitfields.s;
e1 = data.bitfields.e;
m1 = data.bitfields.m;
if (s1 == 0) 
{
	s1 = 1;
}
else s1 = -1;
if ((e1 == 255) && (m1 == 0) && (s1 == -1)) 
{
	printf("-Infinity\n");
}
else if ((e1 == 255) && (m1 == 0) && (s1 == 1)) 
{
	printf("+Infinity\n");
}
else if ((e1 == 255) && (m1 != 0)) 
{
	printf("NaN\n");
}
else if ((e1 == 0) && (m1 == 0))
{
	printf("NULL\n");
}
else printf("%d*2^%d*%f\n", s1, e1-127,1 + ((float)m1 / (1 << 23)));
return 0;
}
